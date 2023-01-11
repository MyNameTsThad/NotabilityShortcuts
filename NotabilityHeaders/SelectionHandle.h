/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>

@protocol SelectionHandleDelegate;
@interface SelectionHandle : UIView {

	char _isStartHandle;
	id<SelectionHandleDelegate> _delegate;
	CGRect _innerRect;

}

@property (assign,nonatomic) char isStartHandle;                                       //@synthesize isStartHandle=_isStartHandle - In the implementation block
@property (assign,nonatomic) CGRect innerRect;                                         //@synthesize innerRect=_innerRect - In the implementation block
@property (assign,nonatomic,__weak) id<SelectionHandleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect popoverFrame; 
-(char)isStartHandle;
-(void)setInnerRect:(CGRect)arg1 ;
-(CGRect)innerRect;
-(id)initWithFrame:(CGRect)arg1 leftGraphic:(char)arg2 ;
-(void)setCaretRect:(CGRect)arg1 ;
-(CGRect)popoverFrame;
-(void)setIsStartHandle:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<SelectionHandleDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SelectionHandleDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
@end

