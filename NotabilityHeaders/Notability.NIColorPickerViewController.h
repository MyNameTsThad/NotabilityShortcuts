/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIColor;

@interface Notability.NIColorPickerViewController : UIViewController <UITextFieldDelegate> {

	 throttledUpdateTextFieldAction.storage;
	 startingColor;
	 selectedColor;
	 isShowing;
	 colorUpdateCallback;
	 dismissCallback;
	 delegate;
	 colorSquarePicker;
	 colorBarPicker;
	 colorIndicatorView;
	 hexTextField;
	 transition.storage;
	 confirmButton.storage;
	 cancelButton.storage;
	 colorDropperButton.storage;
	 leftContainerWidthConstraint;

}

@property (retain,nonatomic) UIColor * startingColor; 
@property (retain,nonatomic) UIColor * selectedColor; 
@property (assign,nonatomic) char isShowing; 
@property (copy,nonatomic) id colorUpdateCallback; 
@property (copy,nonatomic) id dismissCallback; 
@property (assign,__weak,nonatomic) id<NIColorPickerViewControllerDelegate> delegate; 
+(id)shared;
-(void)setColorUpdateCallback:(id)arg1 ;
-(void)setDismissCallback:(id)arg1 ;
-(void)setStartingColor:(UIColor *)arg1 ;
-(id)dismissCallback;
-(UIColor *)startingColor;
-(id)colorUpdateCallback;
-(void)confirmTappedWithSender:(id)arg1 ;
-(void)cancelTappedWithSender:(id)arg1 ;
-(void)colorDropperTappedWithSender:(id)arg1 ;
-(void)colorBarPickerValueChanged:(id)arg1 ;
-(void)colorBarPickerTouchDown:(id)arg1 ;
-(void)colorSquarePickerValueChanged:(id)arg1 ;
-(void)colorSquarePickerTouchDown:(id)arg1 ;
-(void)textFieldEditingChanged:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<NIColorPickerViewControllerDelegate>)arg1 ;
-(id<NIColorPickerViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 reason:(int)arg2 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(char)isShowing;
-(void)setIsShowing:(char)arg1 ;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
@end

