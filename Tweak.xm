#import <UIKit/UIKit.h> 

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

%hook DrawObject
- (void)setFillColor:(CGColorRef)arg1 {
    const CGFloat *components = CGColorGetComponents(arg1);
    NSString *result = [NSString stringWithFormat:@"%f,%f,%f,%f", components[0], components[1], components[2], components[3]];

    UIAlertController *alert = createDebugAlert(@"setFillColor", result, @"OK");
    [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];

    %orig(arg1);
}

- (void)setStrokeColor:(CGColorRef)arg1 {
    const CGFloat *components = CGColorGetComponents(arg1);
    NSString *result = [NSString stringWithFormat:@"%f,%f,%f,%f", components[0], components[1], components[2], components[3]];

    UIAlertController *alert = createDebugAlert(@"setStrokeColor", result, @"OK");
    [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];
    
    %orig(arg1);
}

- (void)setFillAlpha:(float)arg1 {
    NSString *alpha = [NSString stringWithFormat:@"%f", arg1];

    UIAlertController *alert = createDebugAlert(@"setFillAlpha", alpha, @"OK");
    [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];

    %orig(arg1);
}

- (void)setStrokeWidth:(float)arg1 {
    NSString *strokeWidth = [NSString stringWithFormat:@"%f", arg1];

    UIAlertController *alert = createDebugAlert(@"setFillAlpha", strokeWidth, @"OK");
    [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];

    %orig(arg1);
}

%end

%hook ColorPalette
    -(id)init {

        UIAlertController *alert = createDebugAlert(@"Notability.ColorPalette", @"Initializing", @"OK");
        [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];

        return %orig;
    }
%end

%hook ColorPaletteItem
    -(id)init {
        
        UIAlertController *alert = createDebugAlert(@"Notability.ColorPaletteItem", @"Initializing", @"OK");
        [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];

        return %orig;
    }
%end

%hook GLToolbar
    -(id)init {
        
        UIAlertController *alert = createDebugAlert(@"Notability.GLToolbar", @"Initializing", @"OK");
        [[[UIApplication sharedApplication] keyWindow].rootViewController presentViewController:alert animated:YES completion:nil];

        return %orig;
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

%hook IINKEditor
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

	%init(ColorPalette=objc_getClass("Notability.ColorPalette"),
        ColorPaletteItem=objc_getClass("Notability.ColorPaletteItem"),
        GLToolbar=objc_getClass("Notability.GLToolbar")
    );
}