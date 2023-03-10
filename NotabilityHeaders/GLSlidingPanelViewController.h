/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:07 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/NIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollisionBehaviorDelegate.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <Notability/GLTouchCatcherViewDelegate.h>

@protocol GLSlidingPanelViewControllerDelegate;
@class UIView, UIPanGestureRecognizer, UIDynamicAnimator, UICollisionBehavior, UIGravityBehavior, UIDynamicItemBehavior, UIAttachmentBehavior, GLTouchCatcherView, NSString;

@interface GLSlidingPanelViewController : NIViewController <UIGestureRecognizerDelegate, UICollisionBehaviorDelegate, UIDynamicAnimatorDelegate, GLTouchCatcherViewDelegate> {

	char _haveBounced;
	char _ignoreGestureRecognizer;
	id<GLSlidingPanelViewControllerDelegate> _delegate;
	unsigned _state;
	float _closedInset;
	UIView* _parentView;
	UIPanGestureRecognizer* _panRecognizer;
	unsigned _stateWhenGestureBegan;
	float _openInset;
	UIDynamicAnimator* _animator;
	UICollisionBehavior* _collisionBehavior;
	UIGravityBehavior* _gravityBehavior;
	UIDynamicItemBehavior* _dynamicItemBehavior;
	UIAttachmentBehavior* _attachmentBehavior;
	GLTouchCatcherView* _touchCatcherView;
	CGPoint _panTouchOrigin;
	CGRect _beginFrame;

}

@property (assign,nonatomic,__weak) UIView * parentView;                                            //@synthesize parentView=_parentView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panRecognizer;                                //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (assign,nonatomic) unsigned state;                                                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned stateWhenGestureBegan;                                        //@synthesize stateWhenGestureBegan=_stateWhenGestureBegan - In the implementation block
@property (assign,nonatomic) CGRect beginFrame;                                                     //@synthesize beginFrame=_beginFrame - In the implementation block
@property (assign,nonatomic) float openInset;                                                       //@synthesize openInset=_openInset - In the implementation block
@property (assign,nonatomic) CGPoint panTouchOrigin;                                                //@synthesize panTouchOrigin=_panTouchOrigin - In the implementation block
@property (assign,nonatomic) char haveBounced;                                                      //@synthesize haveBounced=_haveBounced - In the implementation block
@property (assign,nonatomic) char ignoreGestureRecognizer;                                          //@synthesize ignoreGestureRecognizer=_ignoreGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIDynamicAnimator * animator;                                          //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) UICollisionBehavior * collisionBehavior;                               //@synthesize collisionBehavior=_collisionBehavior - In the implementation block
@property (nonatomic,retain) UIGravityBehavior * gravityBehavior;                                   //@synthesize gravityBehavior=_gravityBehavior - In the implementation block
@property (nonatomic,retain) UIDynamicItemBehavior * dynamicItemBehavior;                           //@synthesize dynamicItemBehavior=_dynamicItemBehavior - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * attachmentBehavior;                             //@synthesize attachmentBehavior=_attachmentBehavior - In the implementation block
@property (nonatomic,retain) GLTouchCatcherView * touchCatcherView;                                 //@synthesize touchCatcherView=_touchCatcherView - In the implementation block
@property (assign,nonatomic,__weak) id<GLSlidingPanelViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float closedInset;                                                     //@synthesize closedInset=_closedInset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)panGestureRecognizerFired:(id)arg1 ;
-(void)setTouchCatcherView:(GLTouchCatcherView *)arg1 ;
-(GLTouchCatcherView *)touchCatcherView;
-(CGRect)openFrame;
-(void)setupAttachmentBehavior;
-(UIAttachmentBehavior *)attachmentBehavior;
-(CGRect)closedFrame;
-(void)setAttachmentBehavior:(UIAttachmentBehavior *)arg1 ;
-(char)haveBounced;
-(UIView *)parentView;
-(float)closedInset;
-(void)removeDynamicBehaviors;
-(float)openInset;
-(void)setHaveBounced:(char)arg1 ;
-(CGPoint)panTouchOrigin;
-(void)setStateWhenGestureBegan:(unsigned)arg1 ;
-(void)setPanTouchOrigin:(CGPoint)arg1 ;
-(char)isBeginningOrEnding;
-(void)updateViewFrameInResponseToPan;
-(void)closeWithVelocity:(float)arg1 ;
-(void)openWithVelocity:(float)arg1 ;
-(char)shouldCloseFromCurrentPosition;
-(unsigned)stateWhenGestureBegan;
-(void)addDynamicBehaviorsForClosingWithVelocity:(float)arg1 ;
-(void)setIgnoreGestureRecognizer:(char)arg1 ;
-(void)addDynamicBehaviorsForOpeningWithHorizontalVelocity:(float)arg1 ;
-(char)isCloseToOpen;
-(char)shouldBegin;
-(void)touchCatcher:(id)arg1 touchesEnded:(id)arg2 ;
-(void)setClosedInset:(float)arg1 ;
-(void)addContentView:(id)arg1 ;
-(void)setOpenInset:(float)arg1 ;
-(char)ignoreGestureRecognizer;
-(void)setDelegate:(id<GLSlidingPanelViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(char)isDragging;
-(id<GLSlidingPanelViewControllerDelegate>)delegate;
-(unsigned)state;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2 ;
-(void)setState:(unsigned)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(char)isCancelled;
-(int)preferredInterfaceOrientationForPresentation;
-(void)setAnimator:(UIDynamicAnimator *)arg1 ;
-(CGRect)beginFrame;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(CGPoint)arg4 ;
-(id)initWithParentView:(id)arg1 ;
-(void)close;
-(UICollisionBehavior *)collisionBehavior;
-(void)setCollisionBehavior:(UICollisionBehavior *)arg1 ;
-(void)setBeginFrame:(CGRect)arg1 ;
-(UIDynamicAnimator *)animator;
-(void)open;
-(char)isClosed;
-(char)isOpen;
-(UIGravityBehavior *)gravityBehavior;
-(void)setGravityBehavior:(UIGravityBehavior *)arg1 ;
-(UIDynamicItemBehavior *)dynamicItemBehavior;
-(void)setDynamicItemBehavior:(UIDynamicItemBehavior *)arg1 ;
-(UIPanGestureRecognizer *)panRecognizer;
-(void)setPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(char)isOpening;
-(char)isClosing;
-(void)setParentView:(UIView *)arg1 ;
@end

