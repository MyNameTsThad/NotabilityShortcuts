/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Notability/NITouchPassingGestureRecognizerDelegateProtocol.h>
#import <Notability/NILargeTouchRecognizerDelegate.h>

@class UITouch, NIPanZoomPreventingGestureRecognizer, NSMutableDictionary, NSMutableArray, NSArray, NIWristDirection, NITouchPassingGestureRecognizer, NSDate, NSString;

@interface NIPalmGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate, NITouchPassingGestureRecognizerDelegateProtocol, NILargeTouchRecognizerDelegate> {

	UITouch* _handwritingTouch;
	char _shouldGuardBorder;
	char _hasInstalledHelpers;
	char _useWristDirection;
	char _possibleControlCenterTouchesWhileResigningActive;
	char _possibleMultitaskingTouchesWhileResigningActive;
	NIPanZoomPreventingGestureRecognizer* _panzoomPreventingGestureRecognizer;
	NSMutableDictionary* _debugViewsKeyedByTouch;
	NSMutableArray* _bigFatTouches;
	NSArray* _largeTouchGestureRecognizers;
	NIWristDirection* _wristDirection;
	NSMutableArray* _palmDirectionCandidates;
	NITouchPassingGestureRecognizer* _touchPassingHelperGestureRecognizer;
	NSDate* _lastResignedActiveDate;
	NSDate* _lastRecognizedDate;

}

@property (retain) NSMutableDictionary * debugViewsKeyedByTouch;                                           //@synthesize debugViewsKeyedByTouch=_debugViewsKeyedByTouch - In the implementation block
@property (retain) NSMutableArray * bigFatTouches;                                                         //@synthesize bigFatTouches=_bigFatTouches - In the implementation block
@property (assign) char hasInstalledHelpers;                                                               //@synthesize hasInstalledHelpers=_hasInstalledHelpers - In the implementation block
@property (retain) NSArray * largeTouchGestureRecognizers;                                                 //@synthesize largeTouchGestureRecognizers=_largeTouchGestureRecognizers - In the implementation block
@property (retain) NIWristDirection * wristDirection;                                                      //@synthesize wristDirection=_wristDirection - In the implementation block
@property (retain) NSMutableArray * palmDirectionCandidates;                                               //@synthesize palmDirectionCandidates=_palmDirectionCandidates - In the implementation block
@property (assign) char shouldGuardBorder;                                                                 //@synthesize shouldGuardBorder=_shouldGuardBorder - In the implementation block
@property (assign) char useWristDirection;                                                                 //@synthesize useWristDirection=_useWristDirection - In the implementation block
@property (readonly) NITouchPassingGestureRecognizer * touchPassingHelperGestureRecognizer;                //@synthesize touchPassingHelperGestureRecognizer=_touchPassingHelperGestureRecognizer - In the implementation block
@property (assign) char possibleControlCenterTouchesWhileResigningActive;                                  //@synthesize possibleControlCenterTouchesWhileResigningActive=_possibleControlCenterTouchesWhileResigningActive - In the implementation block
@property (assign) char possibleMultitaskingTouchesWhileResigningActive;                                   //@synthesize possibleMultitaskingTouchesWhileResigningActive=_possibleMultitaskingTouchesWhileResigningActive - In the implementation block
@property (retain) NSDate * lastResignedActiveDate;                                                        //@synthesize lastResignedActiveDate=_lastResignedActiveDate - In the implementation block
@property (retain) NSDate * lastRecognizedDate;                                                            //@synthesize lastRecognizedDate=_lastRecognizedDate - In the implementation block
@property (nonatomic,retain) UITouch * handwritingTouch; 
@property (retain) NIPanZoomPreventingGestureRecognizer * panzoomPreventingGestureRecognizer;              //@synthesize panzoomPreventingGestureRecognizer=_panzoomPreventingGestureRecognizer - In the implementation block
@property (readonly) NSArray * nonHandwritingTouches; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportedByPlatformAndEnabledInDefaults;
+(char)supportedByPlatform;
+(char)touchIntersectsScreenEdge:(id)arg1 ;
+(CGPoint)touchDirectionFromScreenEdge:(id)arg1 ;
+(float)touchDistanceToScreenEdge:(id)arg1 ;
+(id)sharedInstance;
-(UITouch *)handwritingTouch;
-(void)setHandwritingTouch:(UITouch *)arg1 ;
-(void)installHelpersIfNeeded;
-(NIPanZoomPreventingGestureRecognizer *)panzoomPreventingGestureRecognizer;
-(void)applicationWillResignActiveAction:(id)arg1 ;
-(void)applicationDidBecomeActiveAction:(id)arg1 ;
-(NSDate *)lastRecognizedDate;
-(void)setLastResignedActiveDate:(NSDate *)arg1 ;
-(void)setPossibleControlCenterTouchesWhileResigningActive:(char)arg1 ;
-(void)setPossibleMultitaskingTouchesWhileResigningActive:(char)arg1 ;
-(double)timeIntervalSinceGestureRecognized;
-(NITouchPassingGestureRecognizer *)touchPassingHelperGestureRecognizer;
-(char)possibleMultitaskingTouchesWhileResigningActive;
-(char)possibleControlCenterTouchesWhileResigningActive;
-(NSDate *)lastResignedActiveDate;
-(void)setupInterferenceDetection;
-(void)cleanupInterferenceDetection;
-(NIWristDirection *)wristDirection;
-(void)setWristDirection:(NIWristDirection *)arg1 ;
-(char)shouldGuardBorder;
-(void)touchPassingGestureRecognizer:(id)arg1 passesTouchesBegan:(id)arg2 withEvent:(id)arg3 ;
-(void)touchPassingGestureRecognizer:(id)arg1 passesTouchesMoved:(id)arg2 withEvent:(id)arg3 ;
-(void)touchPassingGestureRecognizer:(id)arg1 passesTouchesEnded:(id)arg2 withEvent:(id)arg3 ;
-(void)touchPassingGestureRecognizer:(id)arg1 passesTouchesCancelled:(id)arg2 withEvent:(id)arg3 ;
-(id)mostProbableTouchWithTouches:(id)arg1 ;
-(NSArray *)nonHandwritingTouches;
-(void)setLastRecognizedDate:(NSDate *)arg1 ;
-(void)setDebugViewsKeyedByTouch:(NSMutableDictionary *)arg1 ;
-(void)setBigFatTouches:(NSMutableArray *)arg1 ;
-(void)setPanzoomPreventingGestureRecognizer:(NIPanZoomPreventingGestureRecognizer *)arg1 ;
-(void)largeTouchRecognized:(id)arg1 ;
-(void)setLargeTouchGestureRecognizers:(NSArray *)arg1 ;
-(void)setPalmDirectionCandidates:(NSMutableArray *)arg1 ;
-(void)setShouldGuardBorder:(char)arg1 ;
-(void)setUseWristDirection:(char)arg1 ;
-(NSMutableArray *)palmDirectionCandidates;
-(NSMutableArray *)bigFatTouches;
-(char)touchIsInWristDirection:(id)arg1 relativeToAnyTouchesInSet:(id)arg2 withWristDirection:(CGPoint)arg3 minDistance:(float)arg4 ;
-(void)updateShouldGuardBorder;
-(void)updateDebugVisualization;
-(char)useWristDirection;
-(NSArray *)largeTouchGestureRecognizers;
-(void)setHasInstalledHelpers:(char)arg1 ;
-(void)transitionStateIfNeeded;
-(char)touchIsInWristDirectionRelativeToFatTouches:(id)arg1 withWristDirection:(CGPoint)arg2 ;
-(char)touchIntersectsOtherBigFatTouch:(id)arg1 ;
-(char)touchIsInWristDirectionRelativeToFatTouches:(id)arg1 ;
-(char)touchTypeIsStylus:(id)arg1 ;
-(void)_addTouchToBigFatTouchListAndRecognize:(id)arg1 ;
-(char)touchIsPalmEdge:(id)arg1 ;
-(char)touchIsInPalmRegion:(id)arg1 ;
-(void)cancelAnyPalmTouchesWithShouldIncludeWristDirection:(char)arg1 ;
-(void)removeSetFromFatTouchesAndTransitionStateIfNeeded:(id)arg1 ;
-(void)updatePalmDirectionIfNeededWithTouch:(id)arg1 ;
-(void)removeEndedOrCancelledTouchesAndTransitionStateIfNeeded;
-(char)largeTouchRecognizer:(id)arg1 shouldRecognizeTouch:(id)arg2 ;
-(char)largeTouchRecognizer:(id)arg1 touchNeedsTracker:(id)arg2 ;
-(void)updateWristDirectionVisualization;
-(NSMutableDictionary *)debugViewsKeyedByTouch;
-(char)hasInstalledHelpers;
-(id)init;
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setState:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setEnabled:(char)arg1 ;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
@end

