/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NINoteScrollViewDelegate
@required
-(void)zoomContainer:(id)arg1 requestsRedrawAtScale:(float)arg2;
-(char)zoomContainer:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
-(char)zoomContainer:(id)arg1 panGestureShouldCancelTouchesInView:(id)arg2;
-(char)zoomContainer:(id)arg1 touchesShouldCancelInContentView:(id)arg2;
-(void)zoomContainer:(id)arg1 requestsScrollByAmount:(CGPoint)arg2;

@end
