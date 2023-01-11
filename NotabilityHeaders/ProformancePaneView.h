/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>

@protocol ProformancePaneViewDrawDelegate;
@class GLBlockOperation, NSMutableArray;

@interface ProformancePaneView : UIView {

	int drawState;
	int positionState;
	GLBlockOperation* prefetchOperation;
	char enableFade;
	float drawAlpha;
	NSMutableArray* layers;
	int mode;
	char pendingDrawRect;
	id<ProformancePaneViewDrawDelegate> _delegate;
	float _scaleFactor;

}

@property (retain) GLBlockOperation * prefetchOperation; 
@property (assign) int drawState; 
@property (assign) int mode; 
@property (assign) char enableFade; 
@property (__weak) id<ProformancePaneViewDrawDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) int positionState; 
@property (assign) float drawAlpha; 
@property (assign) float scaleFactor;                                         //@synthesize scaleFactor=_scaleFactor - In the implementation block
+(id)layerClass;
-(int)drawState;
-(int)positionState;
-(void)setPositionState:(int)arg1 ;
-(void)memoryWarning;
-(void)blitFromPane:(id)arg1 inRect:(CGRect)arg2 ;
-(void)setNeedsRefreshInRect:(CGRect)arg1 info:(id)arg2 ;
-(void)overdrawUpdateInRect:(CGRect)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setEnableFade:(char)arg1 ;
-(void)removeLayerContents;
-(void)setDrawAlpha:(float)arg1 ;
-(char)fullyDisplayed;
-(void)setLayersForFlash;
-(void)setLayersForOverdraw;
-(void)setLayersForForeground;
-(void)setPrefetchOperation:(GLBlockOperation *)arg1 ;
-(void)cancelPrefetchAndSyncronouslyGetData;
-(void)syncronousDrawDirtyRect;
-(id)getLayer:(int)arg1 ;
-(void)cancelPrefetch;
-(void)prefetch;
-(GLBlockOperation *)prefetchOperation;
-(void)setDrawState:(int)arg1 ;
-(void)recycleLayerBackings;
-(float)drawAlpha;
-(char)enableFade;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<ProformancePaneViewDrawDelegate>)arg1 ;
-(void)dealloc;
-(id<ProformancePaneViewDrawDelegate>)delegate;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(float)scaleFactor;
-(void)clear;
-(void)setScaleFactor:(float)arg1 ;
@end

