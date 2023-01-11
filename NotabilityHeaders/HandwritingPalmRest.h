/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>
#import <Notability/GLUndoRedoButtonDelegate.h>
#import <Notability/NIInputToolDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Notability/ToggleColorPalettePencilInteractionTarget.h>

@protocol HandwritingPalmRestProtocol;
@class NSLayoutConstraint, NSArray, UIView, NBButton, GLUndoRedoButton, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, NSUndoManager, _TtC10Notability10PenManager, SelectionManager, NBCPPlayer, NBThumbnailCache, NIPalmGestureRecognizer, NIInputToolView, NSNumber, HandwritingZoomViewContainer, NSString;

@interface HandwritingPalmRest : UIView <GLUndoRedoButtonDelegate, NIInputToolDelegate, UIGestureRecognizerDelegate, ToggleColorPalettePencilInteractionTarget> {

	char isTogglingZoomView;
	NSLayoutConstraint* handwritingZoomViewHeightConstraint;
	NSArray* tabImageViewHorizontalConstraints;
	NSArray* toggleButtonConstraints;
	UIView* leftAlignmentViewForTab;
	UIView* rightAlignmentViewForTab;
	NBButton* toggleZoomViewButton;
	NBButton* movePalmRestButton;
	NBButton* showPenStyleButton;
	GLUndoRedoButton* undoButton;
	NBButton* advanceButton;
	NBButton* backButton;
	NBButton* returnButton;
	UIImageView* tabImageView;
	UIPanGestureRecognizer* moveGestureRecognizer;
	UITapGestureRecognizer* tapGestureRecognizer;
	float maximumHeight;
	float minimumHeight;
	float BARS;
	float defaultTabViewRightDistance;
	id<HandwritingPalmRestProtocol> delegate;
	char isAnimating;
	char isMovingSelf;
	char isInLandscapeOrientation;
	char isAnimatingZoomViewClosing;
	UIImageView* palmRestBackgroundImageView;
	char isUsingRightHandedLayout;
	char _zoomViewOpen;
	char _palmRestOpen;
	char _isUsingPalmRejection;
	NSUndoManager* _undoManager;
	NBButton* selectionModeButton;
	_TtC10Notability10PenManager* _penManager;
	SelectionManager* _selectionManager;
	NBCPPlayer* _contentPlaybackPlayer;
	NBThumbnailCache* _thumbnailCache;
	float _palmRestHeight;
	int _universalSizeClass;
	NIPalmGestureRecognizer* _palmGestureRecognizer;
	float _navigationManagerRightOffset;
	NIInputToolView* _inputToolView;
	NSNumber* _lastUsedHeight;
	HandwritingZoomViewContainer* _handwritingZoomViewContainer;

}

@property (nonatomic,readonly) NIInputToolView * inputToolView;                                          //@synthesize inputToolView=_inputToolView - In the implementation block
@property (assign,getter=isZoomViewOpen,nonatomic) char zoomViewOpen;                                    //@synthesize zoomViewOpen=_zoomViewOpen - In the implementation block
@property (assign,getter=isPalmRestOpen,nonatomic) char palmRestOpen;                                    //@synthesize palmRestOpen=_palmRestOpen - In the implementation block
@property (assign,nonatomic) float palmRestHeight;                                                       //@synthesize palmRestHeight=_palmRestHeight - In the implementation block
@property (nonatomic,retain) NSNumber * lastUsedHeight;                                                  //@synthesize lastUsedHeight=_lastUsedHeight - In the implementation block
@property (nonatomic,readonly) HandwritingZoomViewContainer * handwritingZoomViewContainer;              //@synthesize handwritingZoomViewContainer=_handwritingZoomViewContainer - In the implementation block
@property (nonatomic,readonly) NBButton * toggleZoomViewButton; 
@property (nonatomic,retain) NBButton * selectionModeButton; 
@property (nonatomic,retain) _TtC10Notability10PenManager * penManager;                                  //@synthesize penManager=_penManager - In the implementation block
@property (nonatomic,retain) SelectionManager * selectionManager;                                        //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,retain) NBCPPlayer * contentPlaybackPlayer;                                         //@synthesize contentPlaybackPlayer=_contentPlaybackPlayer - In the implementation block
@property (nonatomic,retain) NBThumbnailCache * thumbnailCache;                                          //@synthesize thumbnailCache=_thumbnailCache - In the implementation block
@property (assign,nonatomic,__weak) id<HandwritingPalmRestProtocol> delegate; 
@property (assign,nonatomic) float minimumHeight; 
@property (assign,nonatomic) CGRect sourceRect; 
@property (nonatomic,retain) NSUndoManager * undoManager;                                                //@synthesize undoManager=_undoManager - In the implementation block
@property (assign,nonatomic) char isInLandscapeOrientation; 
@property (assign,nonatomic) char isUsingRightHandedLayout; 
@property (assign,nonatomic) char isUsingPalmRejection;                                                  //@synthesize isUsingPalmRejection=_isUsingPalmRejection - In the implementation block
@property (assign,nonatomic) int universalSizeClass;                                                     //@synthesize universalSizeClass=_universalSizeClass - In the implementation block
@property (nonatomic,retain) NIPalmGestureRecognizer * palmGestureRecognizer;                            //@synthesize palmGestureRecognizer=_palmGestureRecognizer - In the implementation block
@property (assign,nonatomic) float navigationManagerRightOffset;                                         //@synthesize navigationManagerRightOffset=_navigationManagerRightOffset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentPlaybackPlayer:(NBCPPlayer *)arg1 ;
-(void)setPenManager:(_TtC10Notability10PenManager *)arg1 ;
-(_TtC10Notability10PenManager *)penManager;
-(NIPalmGestureRecognizer *)palmGestureRecognizer;
-(void)setPalmGestureRecognizer:(NIPalmGestureRecognizer *)arg1 ;
-(void)setUniversalSizeClass:(int)arg1 ;
-(char)isZoomViewOpen;
-(void)showZoomView:(char)arg1 ;
-(void)hideZoomView:(char)arg1 ;
-(char)isUsingRightHandedLayout;
-(int)universalSizeClass;
-(void)setIsUsingRightHandedLayout:(char)arg1 ;
-(void)setIsUsingPalmRejection:(char)arg1 ;
-(void)setNavigationManagerRightOffset:(float)arg1 ;
-(char)isPalmRestOpen;
-(float)palmRestHeight;
-(void)toggleColorPalette;
-(NBCPPlayer *)contentPlaybackPlayer;
-(void)snapSourceRectAndUpdateOverlay;
-(void)resetToDefaultSourceRect;
-(void)setSourceRect:(CGRect)arg1 isGestureActive:(char)arg2 ;
-(char)isUsingPalmRejection;
-(float)safeAreaOffset;
-(void)updateHorizontalConstraintsForTab;
-(void)updateToggleButtonConstraints;
-(id)leftMostViewForHiddenZoomView;
-(float)navigationManagerRightOffset;
-(char)shouldHideSelectionModeButton;
-(void)updateConstraintsForAnimatingZoomView;
-(HandwritingZoomViewContainer *)handwritingZoomViewContainer;
-(NIInputToolView *)inputToolView;
-(void)toggleZoomViewAction;
-(void)setSelectionModeButton:(NBButton *)arg1 ;
-(NBButton *)selectionModeButton;
-(void)moveGestureRecognizerMoved:(id)arg1 ;
-(void)showPenStyleModalView;
-(void)requestNewHeight:(float)arg1 ;
-(void)updateIconsPalmRestIsOpen:(char)arg1 ;
-(void)updateForPenMode;
-(void)handlePenModeNotification:(id)arg1 ;
-(NSNumber *)lastUsedHeight;
-(void)setLastUsedHeight:(NSNumber *)arg1 ;
-(void)setZoomViewOpen:(char)arg1 ;
-(void)completionForSnapAnimation;
-(void)saveLastUsedHeight;
-(void)setPalmRestOpen:(char)arg1 ;
-(void)setPalmRestHeight:(float)arg1 ;
-(id)rightMostViewForHiddenZoomView;
-(void)penButtonAction;
-(void)highlighterButtonAction;
-(void)eraserButtonAction;
-(void)selectButtonAction;
-(void)updateLeftAndRightAlignmentViews;
-(void)undoRedoButtonWillShowActionSheet:(id)arg1 ;
-(void)inputToolView:(id)arg1 didSelectItem:(id)arg2 isPencil:(char)arg3 ;
-(void)setIsInLandscapeOrientation:(char)arg1 ;
-(void)textModeButtonAction;
-(NBButton *)toggleZoomViewButton;
-(void)setHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<HandwritingPalmRestProtocol>)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<HandwritingPalmRestProtocol>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSUndoManager *)undoManager;
-(void)updateConstraints;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)document;
-(void)handleTap:(id)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)setDocument:(id)arg1 ;
-(float)minHeight;
-(NBThumbnailCache *)thumbnailCache;
-(void)setThumbnailCache:(NBThumbnailCache *)arg1 ;
-(float)minimumHeight;
-(SelectionManager *)selectionManager;
-(void)setMinimumHeight:(float)arg1 ;
-(void)setSelectionManager:(SelectionManager *)arg1 ;
@end
