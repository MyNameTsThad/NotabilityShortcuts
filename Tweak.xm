#import <UIKit/UIKit.h> 
#import <UIKit/UIView.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIButton.h>

UIAlertController *createDebugAlert(NSString *title, NSString *message, NSString *defaultActionTitle) {
    UIAlertController* alert = [UIAlertController alertControllerWithTitle:[NSString stringWithFormat:@"[NotabilityShortcuts] %@", title]
        message:message
        preferredStyle:UIAlertControllerStyleAlert
    ];

    UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:defaultActionTitle
        style:UIAlertActionStyleDefault
        handler:^(UIAlertAction * action) {}
    ];

    [alert addAction:defaultAction];

    return alert;
}

@interface GLUndoRedoButton : UIButton
@end

%hook NINoteViewTopToolbar


-(void)undoButtonAction {

    %orig;
        
    UIAlertController *alert = createDebugAlert(@"NINoteViewTopToolbar", @"Undo.", @"OK");
    [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];

}

-(void)redoButtonAction {
    %orig;
    
    UIAlertController *alert = createDebugAlert(@"NINoteViewTopToolbar", @"Redo.", @"OK");
    [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];
}

-(id)initWithFrame:(CGRect)arg1 {
    NINoteViewTopToolbar *result = %orig(arg1);

    NSLog(@"[NotabilityShortcuts] NINoteViewTopToolbar: Initializing frame.");

    GLUndoRedoButton *redoBtn = [[GLUndoRedoButton alloc] init];
    [[[UIApplication sharedApplication] keyWindow].rootViewController.view addSubview:redoBtn];
    
    return result;
}

%end


%hook GLUndoRedoButton
    -(void)undo {

        %orig;
        
        UIAlertController *alert = createDebugAlert(@"GLUndoRedoButton", @"Undo.", @"OK");
        [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];

    }

    -(void)redo {

        %orig;
        
        UIAlertController *alert = createDebugAlert(@"GLUndoRedoButton", @"Redo.", @"OK");
        [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];

    }
%end

%ctor {
    NSLog(@"[NotabilityShortcuts] Starting!");
    UIAlertController *alert = createDebugAlert(@"Initializing...", @"", @"OK");
    [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];

	// %init(ColorPalette=objc_getClass("Notability.ColorPalette"),
    //     ColorPaletteItem=objc_getClass("Notability.ColorPaletteItem")
    // );
    %init;
}