/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIControl.h>

@class NSString;

@interface Notability.ColorBarPicker : UIControl {

	 isVertical;
	 insets;
	 cornerRadius;
	 value;
	 roundedContainer.storage;
	 colorBarView.storage;
	 indicator.storage;
	 accessibilityInterval;

}

@property (assign,nonatomic) float hue; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (copy,nonatomic) NSString * accessibilityValue; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(NSString *)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)setHue:(float)arg1 ;
-(float)hue;
@end

