/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>
#import <Notability/ColorSelectorDelegate.h>

@class UIView, ColorDisplayView, ColorSelectorView, GLNotesSlider, UILabel, UIButton, UIColor, NSString;

@interface TabbedColorSelectorView : UIView <ColorSelectorDelegate> {

	UIView* topView;
	UIView* tabbedView;
	ColorDisplayView* secondColorView;
	UIView* secondColorContainerView;
	ColorDisplayView* firstColorView;
	UIView* firstColorContainerView;
	ColorSelectorView* colorSelectorView;
	UIView* dividerView2;
	GLNotesSlider* alphaSlider;
	UILabel* alphaSliderLabel;
	UIButton* firstColorButton;
	UIButton* secondColorButton;
	UILabel* firstColorLabel;
	UILabel* secondColorLabel;
	UIColor* secondColor;
	UIColor* firstColor;
	float secondColorUserAlpha;
	float firstColorUserAlpha;
	id delegate;
	char isSelectingFirstColor;
	char displayAlphaSlider;
	char displayColorPreviews;
	NSString* firstColorLabelText;
	NSString* secondColorLabelText;

}

@property (assign,nonatomic,__weak) id<TabbedColorSelectorDelegate> delegate; 
@property (assign,nonatomic) char isSelectingFirstColor; 
@property (nonatomic,retain) UIColor * secondColor; 
@property (nonatomic,retain) UIColor * firstColor; 
@property (assign,nonatomic) float secondColorUserAlpha; 
@property (assign,nonatomic) float firstColorUserAlpha; 
@property (nonatomic,retain) NSString * firstColorLabelText; 
@property (nonatomic,retain) NSString * secondColorLabelText; 
@property (assign,nonatomic) char displayAlphaSlider; 
@property (assign,nonatomic) char displayColorPreviews; 
-(float)secondColorUserAlpha;
-(float)firstColorUserAlpha;
-(void)setSecondColorUserAlpha:(float)arg1 ;
-(void)setFirstColorUserAlpha:(float)arg1 ;
-(void)setFirstColorLabelText:(NSString *)arg1 ;
-(void)setSecondColorLabelText:(NSString *)arg1 ;
-(void)colorSelectorView:(id)arg1 didSelectColor:(id)arg2 ;
-(void)applyLayerProperties:(id)arg1 ;
-(void)applyContainerLayerProperties:(id)arg1 ;
-(id)labelWithText:(id)arg1 ;
-(void)firstColorAction:(id)arg1 ;
-(void)secondColorAction:(id)arg1 ;
-(void)alphaAction:(id)arg1 ;
-(char)isSelectingFirstColor;
-(id)firstColorIncludingUserAlpha;
-(id)secondColorIncludingUserAlpha;
-(void)setIsSelectingFirstColor:(char)arg1 ;
-(void)updateAlphaUI;
-(void)updateSelectedElements;
-(NSString *)firstColorLabelText;
-(NSString *)secondColorLabelText;
-(void)setDisplayAlphaSlider:(char)arg1 ;
-(void)setsecondColorUserAlpha:(float)arg1 ;
-(char)displayAlphaSlider;
-(char)displayColorPreviews;
-(void)setDisplayColorPreviews:(char)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<TabbedColorSelectorDelegate>)arg1 ;
-(void)dealloc;
-(id<TabbedColorSelectorDelegate>)delegate;
-(void)notifyDelegate;
-(UIColor *)firstColor;
-(UIColor *)secondColor;
-(void)setFirstColor:(UIColor *)arg1 ;
-(void)setSecondColor:(UIColor *)arg1 ;
@end
