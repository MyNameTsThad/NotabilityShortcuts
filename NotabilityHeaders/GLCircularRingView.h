/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, CAShapeLayer;

@interface GLCircularRingView : UIView {

	float _lineWidth;
	UIColor* _lineColor;
	float _percentRevealed;
	CAShapeLayer* _circleLayer;

}

@property (nonatomic,retain) CAShapeLayer * circleLayer;              //@synthesize circleLayer=_circleLayer - In the implementation block
@property (assign,nonatomic) float lineWidth;                         //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                     //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) float percentRevealed;                   //@synthesize percentRevealed=_percentRevealed - In the implementation block
-(void)setPercentRevealed:(float)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(float)percentRevealed;
-(CAShapeLayer *)circleLayer;
-(void)setPercentRevealed:(float)arg1 ;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)_setup;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
@end

