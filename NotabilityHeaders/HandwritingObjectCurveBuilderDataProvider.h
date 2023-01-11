/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, UIWindow, UITouch;

@interface HandwritingObjectCurveBuilderDataProvider : NSObject {

	UIView* _view;
	UIWindow* _window;
	UITouch* _touch;

}

@property (nonatomic,retain) UIView * view;                  //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIWindow * window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) UITouch * touch;                //@synthesize touch=_touch - In the implementation block
-(id)initWithTouch:(id)arg1 ;
-(char)updatesCurveBuilderOnDisplayRefresh;
-(id)controlPointsWithEvent:(id)arg1 ;
-(void)discardPredictiveRecords;
-(UIWindow *)window;
-(UIView *)view;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
@end
