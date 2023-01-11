/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:07 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Notability/GLFontSizePickerDelegate.h>
#import <Notability/GLSimpleFontPickerDelegate.h>
#import <Notability/FontPresetButtonDelegate.h>
#import <Notability/FontPresetStyleSource.h>
#import <Notability/GLAlertHUDControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol TextStylingDelegate, RichMediaToolbarTextDelegate;
@class NSArray, UITableView, UIButton, UILabel, UISlider, UIColor, GLFontSizePickerViewController, GLFontFamilyPickerViewController, NSString;

@interface NITextStylingKeyboardViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, GLFontSizePickerDelegate, GLSimpleFontPickerDelegate, FontPresetButtonDelegate, FontPresetStyleSource, GLAlertHUDControllerDelegate, UINavigationControllerDelegate> {

	char _showingTip;
	char _fontSizeSliderIsChanging;
	char _fontSizeIncreaseDecreaseTouchBegan;
	id<TextStylingDelegate> _textStylingDelegate;
	id<RichMediaToolbarTextDelegate> _richMediaToolbarTextDelegate;
	NSArray* _viewConstraints;
	UITableView* _tableView;
	UIButton* _boldButton;
	UIButton* _italicButton;
	UIButton* _underlineButton;
	UIButton* _fontFamilyButton;
	UILabel* _fontPresetTip;
	UIButton* _fontSizeButton;
	UISlider* _fontSizeSlider;
	UIButton* _fontSizeDecreaseButton;
	UIButton* _fontSizeIncreaseButton;
	NSArray* _fontPresetButtons;
	NSArray* _textButtonsNeedingManualTintSetting;
	float _fontSize;
	UIColor* _emphasisButtonSelectedColor;
	UIColor* _emphasisButtonDisabledColor;
	float _currentKeyboardHeight;
	GLFontSizePickerViewController* _fontSizePickerViewController;
	GLFontFamilyPickerViewController* _fontFamilyPickerViewController;

}

@property (nonatomic,retain) NSArray * viewConstraints;                                                         //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIButton * boldButton;                                                             //@synthesize boldButton=_boldButton - In the implementation block
@property (nonatomic,retain) UIButton * italicButton;                                                           //@synthesize italicButton=_italicButton - In the implementation block
@property (nonatomic,retain) UIButton * underlineButton;                                                        //@synthesize underlineButton=_underlineButton - In the implementation block
@property (nonatomic,retain) UIButton * fontFamilyButton;                                                       //@synthesize fontFamilyButton=_fontFamilyButton - In the implementation block
@property (nonatomic,retain) UILabel * fontPresetTip;                                                           //@synthesize fontPresetTip=_fontPresetTip - In the implementation block
@property (assign,nonatomic) char showingTip;                                                                   //@synthesize showingTip=_showingTip - In the implementation block
@property (nonatomic,retain) UIButton * fontSizeButton;                                                         //@synthesize fontSizeButton=_fontSizeButton - In the implementation block
@property (nonatomic,retain) UISlider * fontSizeSlider;                                                         //@synthesize fontSizeSlider=_fontSizeSlider - In the implementation block
@property (nonatomic,retain) UIButton * fontSizeDecreaseButton;                                                 //@synthesize fontSizeDecreaseButton=_fontSizeDecreaseButton - In the implementation block
@property (nonatomic,retain) UIButton * fontSizeIncreaseButton;                                                 //@synthesize fontSizeIncreaseButton=_fontSizeIncreaseButton - In the implementation block
@property (nonatomic,retain) NSArray * fontPresetButtons;                                                       //@synthesize fontPresetButtons=_fontPresetButtons - In the implementation block
@property (nonatomic,retain) NSArray * textButtonsNeedingManualTintSetting;                                     //@synthesize textButtonsNeedingManualTintSetting=_textButtonsNeedingManualTintSetting - In the implementation block
@property (assign,nonatomic) float fontSize;                                                                    //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) char fontSizeSliderIsChanging;                                                     //@synthesize fontSizeSliderIsChanging=_fontSizeSliderIsChanging - In the implementation block
@property (assign,nonatomic) char fontSizeIncreaseDecreaseTouchBegan;                                           //@synthesize fontSizeIncreaseDecreaseTouchBegan=_fontSizeIncreaseDecreaseTouchBegan - In the implementation block
@property (nonatomic,retain) UIColor * emphasisButtonSelectedColor;                                             //@synthesize emphasisButtonSelectedColor=_emphasisButtonSelectedColor - In the implementation block
@property (nonatomic,retain) UIColor * emphasisButtonDisabledColor;                                             //@synthesize emphasisButtonDisabledColor=_emphasisButtonDisabledColor - In the implementation block
@property (assign,nonatomic) float currentKeyboardHeight;                                                       //@synthesize currentKeyboardHeight=_currentKeyboardHeight - In the implementation block
@property (nonatomic,retain) GLFontSizePickerViewController * fontSizePickerViewController;                     //@synthesize fontSizePickerViewController=_fontSizePickerViewController - In the implementation block
@property (nonatomic,retain) GLFontFamilyPickerViewController * fontFamilyPickerViewController;                 //@synthesize fontFamilyPickerViewController=_fontFamilyPickerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TextStylingDelegate> textStylingDelegate;                                //@synthesize textStylingDelegate=_textStylingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<RichMediaToolbarTextDelegate> richMediaToolbarTextDelegate;              //@synthesize richMediaToolbarTextDelegate=_richMediaToolbarTextDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEmphasisButtonSelectedColor:(UIColor *)arg1 ;
-(void)setEmphasisButtonDisabledColor:(UIColor *)arg1 ;
-(void)boldButtonAction:(id)arg1 ;
-(id)buttonWithImageKey:(id)arg1 action:(SEL)arg2 ;
-(void)setBoldButton:(UIButton *)arg1 ;
-(void)italicButtonAction:(id)arg1 ;
-(void)setItalicButton:(UIButton *)arg1 ;
-(void)underlineButtonAction:(id)arg1 ;
-(void)setUnderlineButton:(UIButton *)arg1 ;
-(void)fontFamilyButtonAction:(id)arg1 ;
-(void)setFontFamilyButton:(UIButton *)arg1 ;
-(void)setFontPresetTip:(UILabel *)arg1 ;
-(UILabel *)fontPresetTip;
-(void)fontSizeButtonAction:(id)arg1 ;
-(void)setFontSizeButton:(UIButton *)arg1 ;
-(UIButton *)fontSizeButton;
-(void)setFontSizeSlider:(UISlider *)arg1 ;
-(UISlider *)fontSizeSlider;
-(void)fontSizeSliderValueChangedAction:(id)arg1 ;
-(void)fontSizeSliderTouchUpAction:(id)arg1 ;
-(void)fontSizeIncreaseDecreaseButtonTouchUp:(id)arg1 ;
-(void)setFontSizeDecreaseButton:(UIButton *)arg1 ;
-(UIButton *)fontSizeDecreaseButton;
-(void)fontSizeDecreaseButtonTouchDown:(id)arg1 ;
-(void)setFontSizeIncreaseButton:(UIButton *)arg1 ;
-(UIButton *)fontSizeIncreaseButton;
-(void)fontSizeIncreaseButtonTouchDown:(id)arg1 ;
-(void)presetTouchFinishedAction:(id)arg1 ;
-(void)setFontPresetButtons:(NSArray *)arg1 ;
-(UIButton *)fontFamilyButton;
-(NSArray *)fontPresetButtons;
-(void)setTextButtonsNeedingManualTintSetting:(NSArray *)arg1 ;
-(NSArray *)textButtonsNeedingManualTintSetting;
-(char)fontSizeSliderIsChanging;
-(UIButton *)boldButton;
-(UIButton *)italicButton;
-(UIButton *)underlineButton;
-(void)equallyArrangeViews:(id)arg1 inContentView:(id)arg2 sidePadding:(float)arg3 ;
-(void)arrangeFontSizeViewsInContentView:(id)arg1 ;
-(void)updateToMatchTextStylingDelegate;
-(void)reloadViewController:(id)arg1 ;
-(id<TextStylingDelegate>)textStylingDelegate;
-(id)imageMaskFromText:(id)arg1 imageSize:(CGSize)arg2 ;
-(GLFontFamilyPickerViewController *)fontFamilyPickerViewController;
-(GLFontSizePickerViewController *)fontSizePickerViewController;
-(void)setFontSizePickerViewController:(GLFontSizePickerViewController *)arg1 ;
-(void)setFontSizeSliderIsChanging:(char)arg1 ;
-(void)setFontSizeIncreaseDecreaseTouchBegan:(char)arg1 ;
-(void)decreaseFontSize;
-(char)fontSizeIncreaseDecreaseTouchBegan;
-(float)fontSizeChangeRate;
-(void)increaseFontSize;
-(void)setFontFamilyPickerViewController:(GLFontFamilyPickerViewController *)arg1 ;
-(char)showingTip;
-(void)setShowingTip:(char)arg1 ;
-(void)setEmphasisButton:(id)arg1 selected:(char)arg2 ;
-(UIColor *)emphasisButtonSelectedColor;
-(id)verticalConstraintsForSubviews:(id)arg1 ofView:(id)arg2 ;
-(void)fontSizePickerPickedFontSize:(float)arg1 ;
-(void)simpleFontPicker:(id)arg1 selectedFontFamilyNamed:(id)arg2 ;
-(void)simpleFontPicker:(id)arg1 selectedColor:(id)arg2 ;
-(void)fontPresetDidSave:(id)arg1 ;
-(id)fontPresetButtonRequestsCurrentStyle:(id)arg1 ;
-(void)hudDidFinishDisplaying:(id)arg1 ;
-(void)setTextStylingDelegate:(id<TextStylingDelegate>)arg1 ;
-(id<RichMediaToolbarTextDelegate>)richMediaToolbarTextDelegate;
-(void)setRichMediaToolbarTextDelegate:(id<RichMediaToolbarTextDelegate>)arg1 ;
-(UIColor *)emphasisButtonDisabledColor;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(float)minFontSize;
-(void)setFontSize:(float)arg1 ;
-(float)fontSize;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(id)buttonWithTitle:(id)arg1 action:(SEL)arg2 ;
-(float)maxFontSize;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(float)currentKeyboardHeight;
-(void)setCurrentKeyboardHeight:(float)arg1 ;
@end

