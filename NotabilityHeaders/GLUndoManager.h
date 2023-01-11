/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUndoManager.h>

@protocol GLUndoManagerDelegate;
@class NSMutableArray, GLUndoManagerProxy;

@interface GLUndoManager : NSUndoManager {

	char _coalesce;
	id<GLUndoManagerDelegate> _gl_undoDelegate;
	id _targetOfCoalescedInvocation;
	NSMutableArray* _coalescedActions;
	GLUndoManagerProxy* _dispatchProxy;

}

@property (assign,nonatomic) char coalesce;                                                 //@synthesize coalesce=_coalesce - In the implementation block
@property (assign,nonatomic,__weak) id targetOfCoalescedInvocation;                         //@synthesize targetOfCoalescedInvocation=_targetOfCoalescedInvocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * coalescedActions;                             //@synthesize coalescedActions=_coalescedActions - In the implementation block
@property (nonatomic,retain) GLUndoManagerProxy * dispatchProxy;                            //@synthesize dispatchProxy=_dispatchProxy - In the implementation block
@property (assign,nonatomic,__weak) id<GLUndoManagerDelegate> gl_undoDelegate;              //@synthesize gl_undoDelegate=_gl_undoDelegate - In the implementation block
-(id)prepareWithInvocationTarget:(id)arg1 coalesce:(char)arg2 ;
-(void)breakCoalescing;
-(void)setCoalesce:(char)arg1 ;
-(void)setTargetOfCoalescedInvocation:(id)arg1 ;
-(id)targetOfCoalescedInvocation;
-(NSMutableArray *)coalescedActions;
-(void)setCoalescedActions:(NSMutableArray *)arg1 ;
-(GLUndoManagerProxy *)dispatchProxy;
-(id<GLUndoManagerDelegate>)gl_undoDelegate;
-(void)setGl_undoDelegate:(id<GLUndoManagerDelegate>)arg1 ;
-(void)setDispatchProxy:(GLUndoManagerProxy *)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)removeAllActions;
-(void)forwardInvocation:(id)arg1 ;
-(void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(id)prepareWithInvocationTarget:(id)arg1 ;
-(char)coalesce;
-(void)removeAllActionsWithTarget:(id)arg1 ;
@end
