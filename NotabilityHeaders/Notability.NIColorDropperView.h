/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>

@class NSDate, _TtC6GLCore29ThrottledActionDispatchSource, UIColor, _TtC10Notability16NIColorLoupeView, NSLayoutConstraint, UIPanGestureRecognizer;

@interface Notability.NIColorDropperView : UIView {

	 delegate;
	 loupeNeedsUpdateDate;
	 throttledUpdateLoupeView.storage;
	 loupeNeedsUpdate;
	 dismissCallback;
	 isShowing;
	 displayLink;
	 loupeView.storage;
	 loupeViewCenterXConstraint;
	 loupeViewCenterYConstraint;
	 initialPanOffset;
	 panGestureRecognizer.storage;

}

@property (assign,__weak,nonatomic) id<NIColorLoupeViewDelegate> delegate; 
@property (copy,nonatomic) NSDate * loupeNeedsUpdateDate; 
@property (retain,nonatomic) _TtC6GLCore29ThrottledActionDispatchSource * throttledUpdateLoupeView; 
@property (assign,nonatomic) char loupeNeedsUpdate; 
@property (copy,nonatomic) id dismissCallback; 
@property (readonly,nonatomic) UIColor * selectedColor; 
@property (assign,nonatomic) char isShowing; 
@property (retain,nonatomic) _TtC10Notability16NIColorLoupeView * loupeView; 
@property (retain,nonatomic) NSLayoutConstraint * loupeViewCenterXConstraint; 
@property (retain,nonatomic) NSLayoutConstraint * loupeViewCenterYConstraint; 
@property (assign,nonatomic) CGPoint initialPanOffset; 
@property (retain,nonatomic) UIPanGestureRecognizer * panGestureRecognizer; 
+(id)keyPathsForValuesAffectingSelectedColor;
+(id)shared;
-(void)setLoupeNeedsUpdate;
-(void)setDismissCallback:(id)arg1 ;
-(NSDate *)loupeNeedsUpdateDate;
-(void)setLoupeNeedsUpdateDate:(NSDate *)arg1 ;
-(_TtC6GLCore29ThrottledActionDispatchSource *)throttledUpdateLoupeView;
-(void)setThrottledUpdateLoupeView:(_TtC6GLCore29ThrottledActionDispatchSource *)arg1 ;
-(char)loupeNeedsUpdate;
-(void)setLoupeNeedsUpdate:(char)arg1 ;
-(id)dismissCallback;
-(void)moveLoupeCenterToPoint:(CGPoint)arg1 animated:(char)arg2 ;
-(_TtC10Notability16NIColorLoupeView *)loupeView;
-(void)setLoupeView:(_TtC10Notability16NIColorLoupeView *)arg1 ;
-(NSLayoutConstraint *)loupeViewCenterXConstraint;
-(void)setLoupeViewCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)loupeViewCenterYConstraint;
-(void)setLoupeViewCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(CGPoint)initialPanOffset;
-(void)setInitialPanOffset:(CGPoint)arg1 ;
-(void)displayLinkDidFire;
-(void)moveLoupeToMiddleOfBounds;
-(void)resetLoupeView;
-(void)updateLoupeView;
-(void)loupeViewTapped;
-(void)dismissWithSuccess:(char)arg1 color:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)cancel;
-(void)show:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<NIColorLoupeViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(id<NIColorLoupeViewDelegate>)delegate;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(char)isShowing;
-(void)setupViews;
-(void)confirm;
-(void)setIsShowing:(char)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIColor *)selectedColor;
@end

