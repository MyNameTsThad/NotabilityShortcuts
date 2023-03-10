/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/PenStyleDelegate.h>
#import <Notability/NBColorCollectionViewControllerCustomizableColorSource.h>

@class _TtC10Notability12ColorPalette, UIColor, SelectionManager, InputModeManager;

@interface Notability.PenManager : NSObject <PenStyleDelegate, NBColorCollectionViewControllerCustomizableColorSource> {

	 colorPalette;
	 priorPenModeBeforeToolSwitch;
	 priorInputModeBeforeToolSwitch;
	 penMode;
	 selectionMode;
	 selectionManager;
	 inputModeManager;
	 penColor;
	 highlighterColor;
	 penWidth;
	 highlighterWidth;
	 penVariableWidth;
	 highlighterVariableWidth;
	 penWidthScaleFactor;

}

@property (readonly,nonatomic) char drawExclusivelyWithApplePencilInCurrentPenMode; 
@property (assign,nonatomic) char drawExclusivelyWithApplePencilInHandwritingModes; 
@property (assign,nonatomic) int startedUsingApplePencilCount; 
@property (assign,nonatomic) int stoppedUsingApplePencilCount; 
@property (assign,nonatomic) char hasUsedApplePencil; 
@property (readonly,nonatomic) _TtC10Notability12ColorPalette * colorPalette; 
@property (retain,nonatomic) UIColor * currentToolColor; 
@property (assign,nonatomic) float currentToolWidth; 
@property (assign,nonatomic) char currentToolVariableWidth; 
@property (assign,nonatomic) int penMode; 
@property (assign,nonatomic) int inputMode; 
@property (assign,nonatomic) int selectionMode; 
@property (assign,__weak,nonatomic) SelectionManager * selectionManager; 
@property (readonly,nonatomic) InputModeManager * inputModeManager; 
@property (retain,nonatomic) UIColor * penColor; 
@property (retain,nonatomic) UIColor * highlighterColor; 
@property (assign,nonatomic) float penWidth; 
@property (assign,nonatomic) float highlighterWidth; 
@property (assign,nonatomic) char penVariableWidth; 
@property (assign,nonatomic) char highlighterVariableWidth; 
@property (assign,nonatomic) float penWidthScaleFactor; 
@property (readonly,nonatomic) float currentToolWidthScaled; 
@property (readonly,nonatomic) int lastInputModeBeforeReadOnly; 
+(NSRange)customColorIndexRange;
+(id)penWidths;
+(float)defaultPenWidth;
+(id)defaultPenColor;
+(float)defaultHighlighterWidth;
+(id)defaultHighlighterColor;
+(id)keyPathsForValuesAffectingInputMode;
+(char)defaultPenVariableWidth;
+(char)defaultHighlighterVariableWidth;
+(int)defaultSelectionMode;
+(void)setPenWidths:(id)arg1 ;
+(id)colors;
+(id)shared;
-(void)switchToPreviousTool;
-(void)switchToEraserOrPreviousTool;
-(void)defaultFirstPenColorDidChange:(id)arg1 ;
-(void)defaultSecondPenColorDidChange:(id)arg1 ;
-(void)defaultFirstPenWidthDidChange:(float)arg1 ;
-(void)defaultSecondPenWidthDidChange:(float)arg1 ;
-(void)penVariableWidthEnabled:(char)arg1 ;
-(void)penColorDidChange:(id)arg1 isFinalized:(char)arg2 ;
-(void)drawUsingApplePencilOnlyDidChange:(char)arg1 ;
-(void)penWidthDidChange:(float)arg1 ;
-(char)drawExclusivelyWithApplePencilInCurrentPenMode;
-(void)setDrawExclusivelyWithApplePencilInHandwritingModes:(char)arg1 ;
-(char)drawExclusivelyWithApplePencilInHandwritingModes;
-(int)stoppedUsingApplePencilCount;
-(void)setStoppedUsingApplePencilCount:(int)arg1 ;
-(char)hasUsedApplePencil;
-(void)setHasUsedApplePencil:(char)arg1 ;
-(int)startedUsingApplePencilCount;
-(void)setStartedUsingApplePencilCount:(int)arg1 ;
-(int)selectionMode;
-(int)penMode;
-(void)setToolWithInputMode:(int)arg1 savePriorModes:(char)arg2 ;
-(void)setPenStyleToDefault;
-(void)setToolWithInputMode:(int)arg1 ;
-(char)currentToolVariableWidth;
-(float)penWidthScaleFactor;
-(float)currentToolWidth;
-(UIColor *)currentToolColor;
-(float)currentToolWidthScaled;
-(void)setToolWithPenMode:(int)arg1 ;
-(UIColor *)penColor;
-(NSRange)customColorIndexRange;
-(float)penWidth;
-(int)lastInputModeBeforeReadOnly;
-(void)setInputModeToLastInputModeBeforeReadOnly;
-(void)setCurrentToolVariableWidth:(char)arg1 ;
-(UIColor *)highlighterColor;
-(void)setColors:(id)arg1 atIndexRange:(NSRange)arg2 ;
-(void)setPenWidthScaleFactor:(float)arg1 ;
-(float)highlighterWidth;
-(void)setHighlighterWidth:(float)arg1 ;
-(void)setPenWidth:(float)arg1 ;
-(void)setPenMode:(int)arg1 ;
-(void)setPenColor:(UIColor *)arg1 ;
-(void)setHighlighterColor:(UIColor *)arg1 ;
-(void)setCurrentToolColor:(UIColor *)arg1 ;
-(void)setCurrentToolWidth:(float)arg1 ;
-(void)_delayedNotification;
-(InputModeManager *)inputModeManager;
-(char)penVariableWidth;
-(void)setPenVariableWidth:(char)arg1 ;
-(char)highlighterVariableWidth;
-(void)setHighlighterVariableWidth:(char)arg1 ;
-(id)init;
-(id)colors;
-(void)setInputMode:(int)arg1 ;
-(int)inputMode;
-(void)setSelectionMode:(int)arg1 ;
-(SelectionManager *)selectionManager;
-(_TtC10Notability12ColorPalette *)colorPalette;
-(void)setColor:(id)arg1 atIndex:(int)arg2 ;
-(void)setSelectionManager:(SelectionManager *)arg1 ;
@end

