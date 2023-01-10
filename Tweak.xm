#import <UIKit/UIKit.h> 
#import "NotabilityShortcuts-Swift.h"



%hook DrawObject

    - (void)setFillColor:(CGColorRef)arg1 {
        const CGFloat *components = CGColorGetComponents(arg1);
        NSString *result = [NSString stringWithFormat:@"%f,%f,%f,%f", components[0], components[1], components[2], components[3]];
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"setFillColor"
            message:result
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];

        %orig(arg1);
    }

    - (void)setStrokeColor:(CGColorRef)arg1 {
        const CGFloat *components = CGColorGetComponents(arg1);
        NSString *result = [NSString stringWithFormat:@"%f,%f,%f,%f", components[0], components[1], components[2], components[3]];
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"setStrokeColor"
            message:result
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];
        
        %orig(arg1);
    }

    - (void)setFillAlpha:(float)arg1 {
        NSString *alpha = [NSString stringWithFormat:@"%f", arg1];
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"setFillAlpha"
            message:alpha
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];

        %orig(arg1);
    }

    - (void)setStrokeWidth:(float)arg1 {
        NSString *strokeWidth = [NSString stringWithFormat:@"%f", arg1];
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"setStrokeWidth"
            message:strokeWidth
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];

        %orig(arg1);
    }

%end

%hook Notability.ColorPalette
    -(id)init {
        
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"init"
            message:@"Notability.ColorPalette initializing"
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];

        %orig
    }
%end

%hook Notability.ColorPatetteItem
    -(id)init {
        
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"init"
            message:@"Notability.ColorPaletteItem initializing"
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];

        %orig
    }
%end

%hook Notability.GLToolbar
    -(id)init {
        
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"init"
            message:@"Notability.GLToolbar initializing"
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];

        %orig
    }
%end

%hook GLUndoRedoButton
    -(void)undo {
        
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"NotabilityShortcuts Debug Message"
            message:@"undo"
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];

    }

    -(void)redo {
        
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"NotabilityShortcuts Debug Message"
            message:@"redo"
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];

    }
%end

%hook IINKEditor
    -(void)undo {
        
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"NotabilityShortcuts Debug Message"
            message:@"undo"
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];

    }

    -(void)redo {
        
        UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"NotabilityShortcuts Debug Message"
            message:@"redo"
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];

    }
%end

%ctor {
    NSLog(@"[NotabilityShortcuts] Starting!");
    UIAlertView *alert = [[UIAlertView alloc] 
            initWithTitle:@"NotabilityShortcuts Debug Message"
            message:@"Starting!"
            delegate:self 
            cancelButtonTitle:@"OK"
            otherButtonTitles:nil];
        
        [alert show];
	%init;
}