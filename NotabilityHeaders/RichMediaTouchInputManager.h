/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIResponder.h>
#import <Notability/SelectionHandleDelegate.h>
#import <Notability/FormattedStringSelectionDelegate.h>

@protocol RichMediaTouchInputManagerDelegate;
@class NSTimer, UITouch, SelectionHandle, NBTextRange, NBNoteController, _TtC10Notability10PenManager, NSString;

@interface RichMediaTouchInputManager : UIResponder <SelectionHandleDelegate, FormattedStringSelectionDelegate> {

	NSTimer* touchTimer;
	char touchIsHolding;
	UITouch* holdingTouch;
	NSTimer* doubleTapTimer;
	SelectionHandle* startHandle;
	SelectionHandle* endHandle;
	NBTextRange* selectionHandleRange;
	NSTimer* selectWithinWordTimer;
	char shouldSelectWithinWord;
	CGPoint touchDownLocation;
	NBNoteController* noteController;
	char _touchesWillEnd;
	char _waitingForPossibleDoubleTap;
	char _hadTextSelectionOrLocation;
	char _hadPDFSelection;
	char _didDeselectMedia;
	char _didInsertTextBox;
	char _touchMoved;
	id<RichMediaTouchInputManagerDelegate> _delegate;
	_TtC10Notability10PenManager* _penManager;
	unsigned _tapAndHoldStatus;

}

@property (assign,nonatomic) char touchesWillEnd;                                                 //@synthesize touchesWillEnd=_touchesWillEnd - In the implementation block
@property (assign,nonatomic) char waitingForPossibleDoubleTap;                                    //@synthesize waitingForPossibleDoubleTap=_waitingForPossibleDoubleTap - In the implementation block
@property (assign,nonatomic) unsigned tapAndHoldStatus;                                           //@synthesize tapAndHoldStatus=_tapAndHoldStatus - In the implementation block
@property (assign,nonatomic) char hadTextSelectionOrLocation;                                     //@synthesize hadTextSelectionOrLocation=_hadTextSelectionOrLocation - In the implementation block
@property (assign,nonatomic) char hadPDFSelection;                                                //@synthesize hadPDFSelection=_hadPDFSelection - In the implementation block
@property (assign,nonatomic) char didDeselectMedia;                                               //@synthesize didDeselectMedia=_didDeselectMedia - In the implementation block
@property (assign,nonatomic) char didInsertTextBox;                                               //@synthesize didInsertTextBox=_didInsertTextBox - In the implementation block
@property (assign,nonatomic) char touchMoved;                                                     //@synthesize touchMoved=_touchMoved - In the implementation block
@property (assign,nonatomic,__weak) id<RichMediaTouchInputManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NBNoteController * noteController; 
@property (nonatomic,readonly) char touchIsHolding; 
@property (nonatomic,readonly) UITouch * holdingTouch; 
@property (nonatomic,retain) _TtC10Notability10PenManager * penManager;                           //@synthesize penManager=_penManager - In the implementation block
@property (nonatomic,readonly) SelectionHandle * startHandle; 
@property (nonatomic,readonly) SelectionHandle * endHandle; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPenManager:(_TtC10Notability10PenManager *)arg1 ;
-(_TtC10Notability10PenManager *)penManager;
-(NBNoteController *)noteController;
-(void)selectionHandleTouchDown:(id)arg1 touch:(id)arg2 ;
-(void)selectionHandleDidMove:(id)arg1 touch:(id)arg2 ;
-(void)selectionHandleTouchUp:(id)arg1 touch:(id)arg2 ;
-(char)touchIsHolding;
-(void)postCaretChangeNotification;
-(void)setNoteController:(NBNoteController *)arg1 ;
-(void)updateSelectionHandles;
-(void)hideSelectionHandles;
-(void)formattedString:(id)arg1 caretStateChangedTo:(id)arg2 ;
-(void)legacy_formattedStringContentsChangedAndMayRequireUpdateOfSelectionHandles;
-(void)setTouchesWillEnd:(char)arg1 ;
-(void)setHadTextSelectionOrLocation:(char)arg1 ;
-(void)setHadPDFSelection:(char)arg1 ;
-(void)setDidDeselectMedia:(char)arg1 ;
-(void)setDidInsertTextBox:(char)arg1 ;
-(void)setTouchMoved:(char)arg1 ;
-(void)setTapAndHoldStatus:(unsigned)arg1 ;
-(void)touchTimerExpired:(id)arg1 ;
-(void)_touchDown:(CGPoint)arg1 ;
-(void)_touchMovedWhileHolding:(CGPoint)arg1 ;
-(void)_touchMoved:(CGPoint)arg1 ;
-(void)setWaitingForPossibleDoubleTap:(char)arg1 ;
-(char)touchMoved;
-(unsigned)tapAndHoldStatus;
-(void)_touchUpInside:(CGPoint)arg1 becomeFirstResponder:(char)arg2 ;
-(void)stoppedWaitingForDoubleTap:(id)arg1 ;
-(void)_touchUpOutside;
-(void)_showCaretZoomForTouchAtLocation:(CGPoint)arg1 ;
-(char)didDeselectMedia;
-(char)_deselectMedia;
-(char)hadPDFSelection;
-(char)hadTextSelectionOrLocation;
-(void)_touchIsHolding:(CGPoint)arg1 ;
-(char)didInsertTextBox;
-(void)_selectWithinWordTimerAction;
-(void)_setSelectionToPoint:(CGPoint)arg1 startOfSelection:(char)arg2 ;
-(void)_showStartHandleAtRect:(CGRect)arg1 ;
-(void)_showEndHandleAtRect:(CGRect)arg1 ;
-(UITouch *)holdingTouch;
-(void)stopDoubleTapTimer;
-(char)touchesWillEnd;
-(char)waitingForPossibleDoubleTap;
-(id)init;
-(void)setDelegate:(id<RichMediaTouchInputManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<RichMediaTouchInputManagerDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(SelectionHandle *)startHandle;
-(SelectionHandle *)endHandle;
@end

