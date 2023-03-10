/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DrawObjectInputConverterProtocol;
#import <Notability/Notability-Structs.h>
@class DrawObject, UITouch;

@interface PrimitiveResizer : NSObject {

	DrawObject* shape;
	id<DrawObjectInputConverterProtocol> coordinateConverter;
	CGSize insetSize;
	UITouch* touch;
	char isResizing;
	CGRect initialRect;
	int selectedHandle;
	char isMoving;
	CGPoint fixedPoint;
	char allowResize;
	char proportional;

}

@property (nonatomic,retain) UITouch * touch; 
@property (assign,nonatomic) CGSize insetSize; 
@property (assign,nonatomic,__weak) id<DrawObjectInputConverterProtocol> coordinateConverter; 
@property (assign,nonatomic,__weak) DrawObject * shape; 
@property (assign,nonatomic) char proportional; 
-(void)setInsetSize:(CGSize)arg1 ;
-(void)setCoordinateConverter:(id<DrawObjectInputConverterProtocol>)arg1 ;
-(CGRect)viewRectFromCanvasRect:(CGRect)arg1 ;
-(void)completeResizing;
-(void)completeMoving;
-(CGPoint)locationForResizeHandle:(int)arg1 rect:(CGRect)arg2 ;
-(char)proportional;
-(CGRect)updatedSelectionRect:(CGRect)arg1 forHandleMoved:(int)arg2 withNewLocation:(CGPoint)arg3 ;
-(CGRect)canvasRectFromViewRect:(CGRect)arg1 ;
-(CGRect)conservativeRect;
-(int)checkResizeHandleCollision:(CGPoint)arg1 withRect:(CGRect)arg2 ;
-(void)startResizing;
-(void)startMoving:(CGPoint)arg1 ;
-(void)resizeTouchMoved:(CGPoint)arg1 ;
-(void)moveTouchMoved:(CGPoint)arg1 ;
-(id)initWithCoordinateConverter:(id)arg1 ;
-(CGRect)viewRect;
-(void)completeCurrentEdit;
-(void)drawWithContext:(id)arg1 ;
-(CGRect)handleEvent:(id)arg1 withView:(id)arg2 ;
-(char)viewPointHitsResizeHandles:(CGPoint)arg1 ;
-(CGSize)insetSize;
-(id<DrawObjectInputConverterProtocol>)coordinateConverter;
-(void)setProportional:(char)arg1 ;
-(void)setShape:(DrawObject *)arg1 ;
-(void)reset;
-(char)isEditing;
-(DrawObject *)shape;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
@end

