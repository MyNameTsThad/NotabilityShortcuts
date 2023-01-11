/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@interface CGPathDebug : NSObject {

	CGPathRef path;
	CGColorRef lineColor;
	CGColorRef quadCurveColor;
	CGColorRef curveColor;
	CGColorRef closePathLineColor;
	CGColorRef controlLineColor;
	CGColorRef moveToPointColor;
	CGColorRef curvePointColor;
	CGColorRef quadCurvePointColor;
	CGColorRef linePointColor;
	CGColorRef quadCurveControlColor;
	CGColorRef curveControlColor;

}
-(void)drawWithContext:(id)arg1 ;
-(float)scaleFactorForContext:(id)arg1 ;
-(void)drawControlPointWithP0:(CGPoint)arg1 color:(CGColorRef)arg2 context:(id)arg3 ;
-(void)sanityCheck:(CGPoint)arg1 message:(id)arg2 ;
-(void)drawControlLineWithP0:(CGPoint)arg1 P1:(CGPoint)arg2 context:(id)arg3 ;
-(void)drawMoveToWithP0:(CGPoint)arg1 context:(id)arg2 ;
-(void)drawLineWithP0:(CGPoint)arg1 P1:(CGPoint)arg2 context:(id)arg3 ;
-(void)drawQuadCurveWithP0:(CGPoint)arg1 P1:(CGPoint)arg2 P2:(CGPoint)arg3 context:(id)arg4 ;
-(void)drawCurveWithP0:(CGPoint)arg1 P1:(CGPoint)arg2 P2:(CGPoint)arg3 P3:(CGPoint)arg4 context:(id)arg5 ;
-(void)drawCloseSubpathWithP0:(CGPoint)arg1 P1:(CGPoint)arg2 context:(id)arg3 ;
-(id)initWithCGPath:(CGPathRef)arg1 ;
-(void)dealloc;
@end

