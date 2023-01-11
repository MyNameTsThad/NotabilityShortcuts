/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GenericMediaObjectDelegate
@required
-(void)mediaObjectBeganResizing:(id)arg1;
-(void)mediaObjectStoppedResizing:(id)arg1;
-(void)mediaObjectToggledTextWrapMode:(id)arg1;
-(void)mediaObjectShouldBeDeleted:(id)arg1 andMenuShouldBeHidden:(char)arg2;
-(void)mediaObjectStoppedMoving:(id)arg1;
-(void)mediaObjectNeedsRedraw:(id)arg1 redrawAsync:(char)arg2;
-(void)mediaObjectNeedsRedraw:(id)arg1 redrawAsync:(char)arg2 dirtyRects:(id)arg3;
-(void)mediaObjectDidDrag:(id)arg1 redrawAsync:(char)arg2 dirtyRects:(id)arg3;
-(void)mediaObjectBeganMoving:(id)arg1 withTouchOrGestureRecognizer:(id)arg2;
-(void)mediaObject:(id)arg1 didMoveByAmount:(CGPoint)arg2;
-(void)mediaObjectDidResize:(id)arg1 resizeMode:(int)arg2;
-(void)mediaObjectStoppedMoving:(id)arg1 showEditMenu:(char)arg2;
-(void)mediaObjectCancelledMoving:(id)arg1;
-(char)mediaObjectCaptionShouldBeginEditing:(id)arg1 captionView:(id)arg2;
-(void)mediaObjectCaptionDidFinishEditing:(id)arg1 captionView:(id)arg2;
-(char)mediaObjectIsVisible:(id)arg1;
-(char)mediaObjectShouldBeSelectedForEdit:(id)arg1;
-(void)mediaObjectTouchEndedWithoutMoving:(id)arg1;
-(void)mediaObjectDidAnimate:(id)arg1;
-(float)mediaObjectCurrentViewScale:(id)arg1;

@end

