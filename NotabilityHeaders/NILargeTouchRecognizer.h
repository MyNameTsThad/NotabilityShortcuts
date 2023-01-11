/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@protocol NILargeTouchRecognizerDelegate;
@class UITouch;

@interface NILargeTouchRecognizer : UIGestureRecognizer {

	char _forceRecognize;
	id<NILargeTouchRecognizerDelegate> _touchRecognizerDelegate;
	UITouch* _trackedTouch;

}

@property (retain) UITouch * trackedTouch;                                                  //@synthesize trackedTouch=_trackedTouch - In the implementation block
@property (assign) char forceRecognize;                                                     //@synthesize forceRecognize=_forceRecognize - In the implementation block
@property (__weak) id<NILargeTouchRecognizerDelegate> touchRecognizerDelegate;              //@synthesize touchRecognizerDelegate=_touchRecognizerDelegate - In the implementation block
-(void)setTouchRecognizerDelegate:(id<NILargeTouchRecognizerDelegate>)arg1 ;
-(char)isTrackingTouch:(id)arg1 ;
-(void)recognizeTouch;
-(UITouch *)trackedTouch;
-(void)setForceRecognize:(char)arg1 ;
-(void)setTrackedTouch:(UITouch *)arg1 ;
-(id<NILargeTouchRecognizerDelegate>)touchRecognizerDelegate;
-(char)forceRecognize;
-(id)init;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
@end

