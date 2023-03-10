/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor, UITouch, CALayer, NSMutableArray, UIView;

@interface Cropper : CALayer {

	CGRect cropRect;
	char isInCropMode;
	char isResizing;
	CGSize minSize;
	UIColor* fillColor;
	UIColor* innerBorderColor;
	float innerBorderWidth;
	CGRect originalRect;
	UITouch* resizeTouch;
	CALayer* tl;
	CALayer* tm;
	CALayer* tr;
	CALayer* ml;
	CALayer* mm;
	CALayer* mr;
	CALayer* bl;
	CALayer* bm;
	CALayer* br;
	NSMutableArray* handleLayers;
	CALayer* selectedHandle;
	UIView* view;

}

@property (assign,setter=setIsInCropMode:,nonatomic) char isInCropMode; 
@property (nonatomic,readonly) char isResizing; 
@property (assign,nonatomic) CGRect cropRect; 
@property (assign,nonatomic) CGSize minSize; 
@property (nonatomic,readonly) CGSize maxSize; 
@property (nonatomic,retain) UIColor * fillColor; 
@property (nonatomic,retain) UIColor * innerBorderColor; 
@property (assign,nonatomic) float innerBorderWidth; 
@property (assign,nonatomic,__weak) UIView * view; 
-(void)completeResizing;
-(void)setInnerBorderColor:(UIColor *)arg1 ;
-(void)setInnerBorderWidth:(float)arg1 ;
-(CGPoint)anchorPositionForHandle:(id)arg1 ;
-(void)enterCropMode;
-(void)exitCropMode;
-(void)startResizing:(id)arg1 ;
-(CGRect)maxBounds;
-(UIColor *)innerBorderColor;
-(void)setIsInCropMode:(char)arg1 ;
-(char)isInCropMode;
-(id)init;
-(UIView *)view;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setView:(UIView *)arg1 ;
-(CGSize)maxSize;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(CGSize)minSize;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setMinSize:(CGSize)arg1 ;
-(float)innerBorderWidth;
-(char)isResizing;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
@end

