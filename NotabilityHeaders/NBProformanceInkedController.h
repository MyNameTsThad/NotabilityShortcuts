/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/ProformanceInkedController.h>

@protocol NBProformanceInkedControllerViewDelegate;
@class NSTimer, NBDisplayLinkWrapper, NSMutableArray, NSDate, StationaryDrawingDetector;

@interface NBProformanceInkedController : ProformanceInkedController {

	NSTimer* strokeDisablesPanZoomTimer;
	char strokeDisablesPanZoom;
	NBDisplayLinkWrapper* displayLinkWrapper;
	char _removesStrayMarks;
	char _enableZoomLoupe;
	char _isDisplayLinkActive;
	char _switchedSelectionModeFromGesture;
	char _loupeVisible;
	id<NBProformanceInkedControllerViewDelegate> _viewDelegate;
	NSMutableArray* _possibleStrayMarks;
	NSDate* _lineStraightenDate;
	StationaryDrawingDetector* _stationaryDrawingDetector;

}

@property (retain) NSMutableArray * possibleStrayMarks;                                          //@synthesize possibleStrayMarks=_possibleStrayMarks - In the implementation block
@property (assign) char switchedSelectionModeFromGesture;                                        //@synthesize switchedSelectionModeFromGesture=_switchedSelectionModeFromGesture - In the implementation block
@property (assign) char loupeVisible;                                                            //@synthesize loupeVisible=_loupeVisible - In the implementation block
@property (retain) NSDate * lineStraightenDate;                                                  //@synthesize lineStraightenDate=_lineStraightenDate - In the implementation block
@property (nonatomic,retain) StationaryDrawingDetector * stationaryDrawingDetector;              //@synthesize stationaryDrawingDetector=_stationaryDrawingDetector - In the implementation block
@property (__weak) id<NBProformanceInkedControllerViewDelegate> viewDelegate;                    //@synthesize viewDelegate=_viewDelegate - In the implementation block
@property (assign) char removesStrayMarks;                                                       //@synthesize removesStrayMarks=_removesStrayMarks - In the implementation block
@property (assign) char enableZoomLoupe;                                                         //@synthesize enableZoomLoupe=_enableZoomLoupe - In the implementation block
@property (assign,nonatomic) char isDisplayLinkActive;                                           //@synthesize isDisplayLinkActive=_isDisplayLinkActive - In the implementation block
-(void)setIsDisplayLinkActive:(char)arg1 ;
-(void)setViewDelegate:(id<NBProformanceInkedControllerViewDelegate>)arg1 ;
-(void)presentMenu:(id)arg1 inTargetRect:(CGRect)arg2 ;
-(void)presentPopover:(id)arg1 inTargetRect:(CGRect)arg2 ;
-(id<NBProformanceInkedControllerViewDelegate>)viewDelegate;
-(void)cancelStroke;
-(void)closeStroke;
-(void)setRemovesStrayMarks:(char)arg1 ;
-(char)pointInsideSelection:(CGPoint)arg1 forView:(id)arg2 ;
-(void)pasteCurves:(id)arg1 selectionRepresentation:(id)arg2 atPoint:(CGPoint)arg3 fromView:(id)arg4 ;
-(char)removesStrayMarks;
-(void)setEnableZoomLoupe:(char)arg1 ;
-(void)handwritingObjectDidAddObject:(id)arg1 ;
-(void)setInkTouch:(id)arg1 ;
-(char)isStylusTouch:(id)arg1 ;
-(void)setStrokeDisablesPanZoom;
-(void)updateCurrentStrokeWithControlPoints:(id)arg1 ;
-(CGPoint)convertViewPoint:(CGPoint)arg1 toDocumentContentPointForView:(id)arg2 ;
-(StationaryDrawingDetector *)stationaryDrawingDetector;
-(char)enableZoomLoupe;
-(void)setLoupeVisible:(char)arg1 ;
-(char)loupeVisible;
-(void)hideLoupe;
-(char)straightLinesExistInPenMode:(int)arg1 ;
-(NSDate *)lineStraightenDate;
-(void)setLineStraightenDate:(NSDate *)arg1 ;
-(void)setSwitchedSelectionModeFromGesture:(char)arg1 ;
-(void)setStationaryDrawingDetector:(StationaryDrawingDetector *)arg1 ;
-(void)completeCurrentStroke;
-(void)beginStrokeWithTouch:(id)arg1 event:(id)arg2 ;
-(char)switchedSelectionModeFromGesture;
-(void)switchBackSelectionModesIfNeeded;
-(id)checkPointCollision:(CGPoint)arg1 forView:(id)arg2 ;
-(void)discardTouchesAndStroke;
-(char)shouldPreventPanZoom;
-(void)handwritingObjectLineBuilder:(id)arg1 didMoveEndpoint:(CGPoint)arg2 ;
-(void)stationaryDrawingDetectorRecognized:(id)arg1 ;
-(void)penManagerDidChangeInputMode;
-(void)playbackTouchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setPossibleStrayMarks:(NSMutableArray *)arg1 ;
-(void)removeStrayHandwritingStrokes;
-(NSMutableArray *)possibleStrayMarks;
-(char)touch:(id)arg1 containsCurve:(id)arg2 ;
-(char)isDisplayLinkActive;
-(id)init;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(void)refresh:(id)arg1 ;
-(void)showLoupe;
@end

