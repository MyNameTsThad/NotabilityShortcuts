/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>

@protocol GLSegmentedControlDelegate;
@class NSArray, NSMutableArray, UIImageView, NSString;

@interface GLSegmentedControl : UIView {

	NSArray* buttons;
	NSMutableArray* views;
	NSArray* _titles;
	NSArray* _imageKeys;
	char buttonsDirty;
	char dirty;
	char firstLayout;
	float _minimumButtonWidth;
	float _minimumHeight;
	UIImageView* selectionIndicator;
	UIImageView* bkd;
	NSString* _backgroundImageKey;
	NSString* _separatorImageKey;
	NSString* _leftCapImageKey;
	NSString* _rightCapImageKey;
	NSString* _movingSelectionIndicatorKey;
	int _selectedIndex;
	char _backgroundEdgeInsetsLayoutWithinButtons;
	char _buttonsAdjustToFillWidth;
	char _movingSelectionIndicatorAnimates;
	char _enableMultipleSelection;
	char _skinned;
	char _separatorSizeIncludedInLayout;
	char _buttonsShowTouchWhenHighlighted;
	char _selectButtonsOnTouchDown;
	float _minimumTotalWidth;
	float _maximumTotalWidth;
	id<GLSegmentedControlDelegate> _delegate;
	int _numberOfObjects;
	double _selectedStateScaleAnimationDuration;
	CGSize _intrinsicSize;
	UIEdgeInsets _backgroundEdgeInsets;

}

@property (assign,nonatomic) CGSize intrinsicSize;                                        //@synthesize intrinsicSize=_intrinsicSize - In the implementation block
@property (assign,nonatomic) char skinned;                                                //@synthesize skinned=_skinned - In the implementation block
@property (nonatomic,retain) NSString * backgroundImageKey;                               //@synthesize backgroundImageKey=_backgroundImageKey - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundEdgeInsets;                           //@synthesize backgroundEdgeInsets=_backgroundEdgeInsets - In the implementation block
@property (assign,nonatomic) char backgroundEdgeInsetsLayoutWithinButtons;                //@synthesize backgroundEdgeInsetsLayoutWithinButtons=_backgroundEdgeInsetsLayoutWithinButtons - In the implementation block
@property (nonatomic,retain) NSArray * titles;                                            //@synthesize titles=_titles - In the implementation block
@property (nonatomic,retain) NSArray * imageKeys;                                         //@synthesize imageKeys=_imageKeys - In the implementation block
@property (assign,nonatomic) float minimumButtonWidth;                                    //@synthesize minimumButtonWidth=_minimumButtonWidth - In the implementation block
@property (assign,nonatomic) float minimumHeight;                                         //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) float minimumTotalWidth;                                     //@synthesize minimumTotalWidth=_minimumTotalWidth - In the implementation block
@property (assign,nonatomic) float maximumTotalWidth;                                     //@synthesize maximumTotalWidth=_maximumTotalWidth - In the implementation block
@property (assign,nonatomic) char buttonsAdjustToFillWidth;                               //@synthesize buttonsAdjustToFillWidth=_buttonsAdjustToFillWidth - In the implementation block
@property (nonatomic,retain) NSString * separatorImageKey;                                //@synthesize separatorImageKey=_separatorImageKey - In the implementation block
@property (nonatomic,retain) NSString * leftCapImageKey;                                  //@synthesize leftCapImageKey=_leftCapImageKey - In the implementation block
@property (nonatomic,retain) NSString * rightCapImageKey;                                 //@synthesize rightCapImageKey=_rightCapImageKey - In the implementation block
@property (nonatomic,retain) NSString * movingSelectionIndicatorKey;                      //@synthesize movingSelectionIndicatorKey=_movingSelectionIndicatorKey - In the implementation block
@property (assign,nonatomic) char movingSelectionIndicatorAnimates;                       //@synthesize movingSelectionIndicatorAnimates=_movingSelectionIndicatorAnimates - In the implementation block
@property (assign,nonatomic) char enableMultipleSelection;                                //@synthesize enableMultipleSelection=_enableMultipleSelection - In the implementation block
@property (assign,nonatomic) int selectedIndex;                                           //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic,__weak) id<GLSegmentedControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int numberOfObjects;                                       //@synthesize numberOfObjects=_numberOfObjects - In the implementation block
@property (nonatomic,readonly) NSArray * buttons; 
@property (assign,nonatomic) char separatorSizeIncludedInLayout;                          //@synthesize separatorSizeIncludedInLayout=_separatorSizeIncludedInLayout - In the implementation block
@property (assign,nonatomic) char buttonsShowTouchWhenHighlighted;                        //@synthesize buttonsShowTouchWhenHighlighted=_buttonsShowTouchWhenHighlighted - In the implementation block
@property (assign,nonatomic) double selectedStateScaleAnimationDuration;                  //@synthesize selectedStateScaleAnimationDuration=_selectedStateScaleAnimationDuration - In the implementation block
@property (assign,nonatomic) char selectButtonsOnTouchDown;                               //@synthesize selectButtonsOnTouchDown=_selectButtonsOnTouchDown - In the implementation block
-(void)dirtyButtonAtIndex:(int)arg1 ;
-(void)setButtonsAdjustToFillWidth:(char)arg1 ;
-(void)setMinimumTotalWidth:(float)arg1 ;
-(void)setSkinned:(char)arg1 ;
-(void)setEnableMultipleSelection:(char)arg1 ;
-(void)setBackgroundEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setMovingSelectionIndicatorAnimates:(char)arg1 ;
-(void)setMinimumButtonWidth:(float)arg1 ;
-(void)setSeparatorSizeIncludedInLayout:(char)arg1 ;
-(void)setButtonsShowTouchWhenHighlighted:(char)arg1 ;
-(void)setSelectedStateScaleAnimationDuration:(double)arg1 ;
-(void)setSelectButtonsOnTouchDown:(char)arg1 ;
-(void)setMaximumTotalWidth:(float)arg1 ;
-(void)setImageKeys:(NSArray *)arg1 ;
-(void)setBackgroundImageKey:(NSString *)arg1 ;
-(char)enableMultipleSelection;
-(void)setControlState:(unsigned)arg1 forButton:(id)arg2 ;
-(void)updateButtonSelectedStateAtIndex:(int)arg1 ;
-(CGRect)rectForSegmentAtIndex:(int)arg1 ;
-(char)movingSelectionIndicatorAnimates;
-(void)setupButtons;
-(char)selectButtonsOnTouchDown;
-(char)buttonsShowTouchWhenHighlighted;
-(void)_configureButton:(id)arg1 ;
-(void)initializeButtons;
-(void)setupButton:(id)arg1 ;
-(NSString *)separatorImageKey;
-(NSString *)rightCapImageKey;
-(NSString *)leftCapImageKey;
-(NSString *)backgroundImageKey;
-(NSString *)movingSelectionIndicatorKey;
-(void)updateButtonsSelectedState;
-(void)setupButtonsIfNeeded;
-(char)backgroundEdgeInsetsLayoutWithinButtons;
-(UIEdgeInsets)backgroundEdgeInsets;
-(char)separatorSizeIncludedInLayout;
-(float)minimumButtonWidth;
-(float)minimumTotalWidth;
-(char)buttonsAdjustToFillWidth;
-(void)updateSelectionIndicatorForFirstLayout:(char)arg1 ;
-(float)maximumTotalWidth;
-(void)dirtyWithButtons:(char)arg1 ;
-(id)initWithImageKeys:(id)arg1 titles:(id)arg2 skinned:(char)arg3 ;
-(void)moveTo:(CGPoint)arg1 ;
-(void)setSeparatorImageKey:(NSString *)arg1 ;
-(void)setLeftCapImageKey:(NSString *)arg1 ;
-(void)setRightCapImageKey:(NSString *)arg1 ;
-(void)setMovingSelectionIndicatorKey:(NSString *)arg1 ;
-(void)setScale:(float)arg1 forButtonAtIndex:(int)arg2 ;
-(void)setBackgroundEdgeInsetsLayoutWithinButtons:(char)arg1 ;
-(char)skinned;
-(double)selectedStateScaleAnimationDuration;
-(void)layoutSubviews;
-(void)setDelegate:(id<GLSegmentedControlDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<GLSegmentedControlDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)buttonTapped:(id)arg1 ;
-(id)font;
-(void)setTitles:(NSArray *)arg1 ;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(void)updateLayout;
-(NSArray *)titles;
-(NSArray *)buttons;
-(CGSize)intrinsicSize;
-(void)setIntrinsicSize:(CGSize)arg1 ;
-(NSArray *)imageKeys;
-(int)numberOfObjects;
-(float)minimumHeight;
-(void)setMinimumHeight:(float)arg1 ;
@end

