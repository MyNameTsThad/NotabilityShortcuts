/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIToolbarDelegate.h>

@class UIView, UIImageView, UIButton, UIToolbar, UILabel, NIEmailVerificationField, NBButton, NSDictionary, NSString;

@interface NINewsletterSignupViewController : UIViewController <UITextFieldDelegate, UIToolbarDelegate> {

	char _showMainContainer;
	char _successfullySignedUp;
	int _universalSizeClass;
	UIView* _fadeView;
	UIView* _mainContainerView;
	UIImageView* _backgroundView;
	UIButton* _closeButton;
	UIToolbar* _compactToolbar;
	UILabel* _headerLabel;
	UILabel* _bodyLabel;
	UIButton* _successCheckButton;
	UIButton* _failureXButton;
	NIEmailVerificationField* _textField;
	NBButton* _confirmButton;
	UIView* _outerSpacerTop;
	UIView* _outerSpacerBottom;
	UIView* _innerSpacerTop;
	UIView* _innerSpacerBottom;
	float _fullSizeWidth;
	float _regularAspectRatio;
	float _compactAspectRatio;
	float _keyboardHeight;

}

@property (assign,nonatomic) int universalSizeClass;                            //@synthesize universalSizeClass=_universalSizeClass - In the implementation block
@property (nonatomic,retain) UIView * fadeView;                                 //@synthesize fadeView=_fadeView - In the implementation block
@property (nonatomic,retain) UIView * mainContainerView;                        //@synthesize mainContainerView=_mainContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundView;                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                            //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIToolbar * compactToolbar;                        //@synthesize compactToolbar=_compactToolbar - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                             //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                               //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIButton * successCheckButton;                     //@synthesize successCheckButton=_successCheckButton - In the implementation block
@property (nonatomic,retain) UIButton * failureXButton;                         //@synthesize failureXButton=_failureXButton - In the implementation block
@property (nonatomic,retain) NIEmailVerificationField * textField;              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) NBButton * confirmButton;                          //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UIView * outerSpacerTop;                           //@synthesize outerSpacerTop=_outerSpacerTop - In the implementation block
@property (nonatomic,retain) UIView * outerSpacerBottom;                        //@synthesize outerSpacerBottom=_outerSpacerBottom - In the implementation block
@property (nonatomic,retain) UIView * innerSpacerTop;                           //@synthesize innerSpacerTop=_innerSpacerTop - In the implementation block
@property (nonatomic,retain) UIView * innerSpacerBottom;                        //@synthesize innerSpacerBottom=_innerSpacerBottom - In the implementation block
@property (assign,nonatomic) char showMainContainer;                            //@synthesize showMainContainer=_showMainContainer - In the implementation block
@property (assign,nonatomic) char successfullySignedUp;                         //@synthesize successfullySignedUp=_successfullySignedUp - In the implementation block
@property (assign) float fullSizeWidth;                                         //@synthesize fullSizeWidth=_fullSizeWidth - In the implementation block
@property (assign) float regularAspectRatio;                                    //@synthesize regularAspectRatio=_regularAspectRatio - In the implementation block
@property (assign) float compactAspectRatio;                                    //@synthesize compactAspectRatio=_compactAspectRatio - In the implementation block
@property (assign,nonatomic) float keyboardHeight;                              //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (nonatomic,readonly) NSDictionary * attrs; 
@property (nonatomic,readonly) NSString * headerKey; 
@property (nonatomic,readonly) NSString * bodyKey; 
@property (nonatomic,readonly) NSString * textFieldKey; 
@property (nonatomic,readonly) NSString * textFieldPlaceholderKey; 
@property (nonatomic,readonly) NSString * confirmKey; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUniversalSizeClass:(int)arg1 ;
-(int)universalSizeClass;
-(char)_useCompactLayout;
-(void)presentAnimated;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)setFadeView:(UIView *)arg1 ;
-(UIView *)fadeView;
-(void)setMainContainerView:(UIView *)arg1 ;
-(UIView *)mainContainerView;
-(void)updateBackgroundViewForCurrentSizeClass;
-(void)updateMainContainerForCurrentSizeClass;
-(void)setSuccessCheckButton:(UIButton *)arg1 ;
-(UIButton *)successCheckButton;
-(void)setFailureXButton:(UIButton *)arg1 ;
-(UIButton *)failureXButton;
-(void)clearTextField;
-(void)validateTextField;
-(char)successfullySignedUp;
-(void)attemptSignupAction;
-(void)updateAllTextForCurrentSizeClass;
-(void)setOuterSpacerTop:(UIView *)arg1 ;
-(UIView *)outerSpacerTop;
-(void)setOuterSpacerBottom:(UIView *)arg1 ;
-(UIView *)outerSpacerBottom;
-(void)setInnerSpacerTop:(UIView *)arg1 ;
-(UIView *)innerSpacerTop;
-(void)setInnerSpacerBottom:(UIView *)arg1 ;
-(UIView *)innerSpacerBottom;
-(char)mayRequireCompactDisplay;
-(void)setCompactToolbar:(UIToolbar *)arg1 ;
-(UIToolbar *)compactToolbar;
-(float)fullSizeWidth;
-(float)regularAspectRatio;
-(float)compactAspectRatio;
-(char)showMainContainer;
-(void)setShowMainContainer:(char)arg1 ;
-(void)setSuccessfullySignedUp:(char)arg1 ;
-(void)attemptSubscribeEmailAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFullSizeWidth:(float)arg1 ;
-(void)setRegularAspectRatio:(float)arg1 ;
-(void)setCompactAspectRatio:(float)arg1 ;
-(NSString *)bodyKey;
-(NSString *)confirmKey;
-(NSString *)textFieldKey;
-(NSString *)textFieldPlaceholderKey;
-(void)updateWithNotification:(id)arg1 animated:(char)arg2 ;
-(void)dealloc;
-(int)positionForBar:(id)arg1 ;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)backgroundView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(char)textFieldShouldReturn:(id)arg1 ;
-(NIEmailVerificationField *)textField;
-(UIButton *)closeButton;
-(void)setTextField:(NIEmailVerificationField *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(float)keyboardHeight;
-(void)setKeyboardHeight:(float)arg1 ;
-(UILabel *)bodyLabel;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(NSString *)headerKey;
-(NSDictionary *)attrs;
-(void)dismissAction;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)setConfirmButton:(NBButton *)arg1 ;
-(NBButton *)confirmButton;
@end

