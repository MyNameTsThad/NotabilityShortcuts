/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLPopoverController.h>

@protocol GLDatePickerDelegate;
@class UIDatePicker, UIViewController, NSDate;

@interface GLDatePickerPopoverController : GLPopoverController {

	UIDatePicker* datePicker;
	UIViewController* viewController;
	id<GLDatePickerDelegate> datePickerDelegate;

}

@property (assign,nonatomic,__weak) id<GLDatePickerDelegate> datePickerDelegate; 
@property (nonatomic,retain) NSDate * date; 
-(void)datePickerDidChange:(id)arg1 ;
-(void)dismissDatePicker;
-(id<GLDatePickerDelegate>)datePickerDelegate;
-(void)setDatePickerDelegate:(id<GLDatePickerDelegate>)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

