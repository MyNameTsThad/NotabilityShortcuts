/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/HandwritingObjectCurveBuilder.h>

@protocol SnapProvider, HandwritingObjectLineBuilderDelegate;
@class NSArray;

@interface HandwritingObjectLineBuilder : HandwritingObjectCurveBuilder {

	char _hasStartPoint;
	char _hasEndPoint;
	id<SnapProvider> _snapProvider;
	id<HandwritingObjectLineBuilderDelegate> _delegate;
	NSArray* _snapPrimitives;
	float _pointSizeScreenMultiplier;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (assign) CGPoint startPoint;                                             //@synthesize startPoint=_startPoint - In the implementation block
@property (assign) CGPoint endPoint;                                               //@synthesize endPoint=_endPoint - In the implementation block
@property (assign) char hasStartPoint;                                             //@synthesize hasStartPoint=_hasStartPoint - In the implementation block
@property (assign) char hasEndPoint;                                               //@synthesize hasEndPoint=_hasEndPoint - In the implementation block
@property (retain) NSArray * snapPrimitives;                                       //@synthesize snapPrimitives=_snapPrimitives - In the implementation block
@property (assign) float pointSizeScreenMultiplier;                                //@synthesize pointSizeScreenMultiplier=_pointSizeScreenMultiplier - In the implementation block
@property (__weak) id<SnapProvider> snapProvider;                                  //@synthesize snapProvider=_snapProvider - In the implementation block
@property (__weak) id<HandwritingObjectLineBuilderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancelStroke;
-(void)closeStroke;
-(void)addControlPointsToStroke:(id)arg1 ;
-(CGPoint)startingPoint;
-(CGPoint)endingPoint;
-(id)currentStroke;
-(char)hasCurrentStroke;
-(id<SnapProvider>)snapProvider;
-(void)setSnapPrimitives:(NSArray *)arg1 ;
-(NSArray *)snapPrimitives;
-(void)setSnapProvider:(id<SnapProvider>)arg1 ;
-(float)pointSizeScreenMultiplier;
-(void)setPointSizeScreenMultiplier:(float)arg1 ;
-(char)supportsAnimatedPlayback;
-(void)setUnsnappedStartingPoint:(CGPoint)arg1 ;
-(void)setUnsnappedEndingPoint:(CGPoint)arg1 ;
-(id)snapPrimitivesIncludingConnectingShapes;
-(float)pointThreshold;
-(float)lineThreshold;
-(void)setHasEndPoint:(char)arg1 ;
-(char)hasStartPoint;
-(char)hasEndPoint;
-(id)currentFit;
-(void)setHasStartPoint:(char)arg1 ;
-(id)lineSegmentsConnectedToPoint:(CGPoint)arg1 fromLineSegments:(id)arg2 ;
-(id)horizontalAndVerticalGuidesForSegments:(id)arg1 length:(float)arg2 ;
-(id)init;
-(void)setDelegate:(id<HandwritingObjectLineBuilderDelegate>)arg1 ;
-(id<HandwritingObjectLineBuilderDelegate>)delegate;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(void)resetState;
-(void)beginStroke;
@end

