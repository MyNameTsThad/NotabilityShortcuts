/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NBHandwritingSelectionBoxHandleViewDelegate <NSObject>
@optional
-(char)scaleEnabledForHandle:(id)arg1;
-(char)rotationEnabledForHandle:(id)arg1;

@required
-(void)handleDragDidBegin:(id)arg1 locationInHandleView:(CGPoint)arg2 isForRotation:(char)arg3;
-(void)handleDragCanceled:(id)arg1;
-(void)handleDragWasCompleted:(id)arg1;
-(void)handleWasDragged:(id)arg1 locationInHandleView:(CGPoint)arg2 isForRotation:(char)arg3;
-(float)handleViewRequestsRotation:(id)arg1;

@end

