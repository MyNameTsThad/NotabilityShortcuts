/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>
#import <Notability/RichMediaView.h>
#import <Notability/NBTextPresenter.h>
#import <Notability/NBTextCaretZoomControllerDataSource.h>
#import <Notability/NoteInfoEditingDelegate.h>
#import <Notability/NBTextMappingProtocol.h>
#import <Notability/NBTextRedrawingProtocol.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Notability/RichMediaTouchInputManagerDelegate.h>
#import <Notability/MediaObjectFactoryDelegate.h>
#import <Notability/ImageMediaObjectDelegate.h>
#import <Notability/GenericMediaObjectDelegate.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <Notability/GLDroppableView.h>
#import <Notability/ProformancePaneViewEditingStateDelegate.h>
#import <Notability/NBNoteControllerTextInputDelegate.h>
#import <Notability/NIMediaObjectResizingViewDelegate.h>
#import <Notability/NINoteScrollViewContentView.h>
#import <Notability/SelectionUIObjectTextSystemDelegate.h>
#import <Notability/ProformancePaneViewControllerPaneBehaviorDelegate.h>
#import <Notability/ToggleSelectionColorPaletteInteractionTarget.h>

@protocol ProformanceNoteViewDelegate, NINoteViewDelegate;
@class ProformancePaneViewController, NINoteScrollView, NoteTakingSession, RichMediaDocument, NBNoteController, RichMediaTouchInputManager, NIMediaObjectResizingView, NSArray, UIPanGestureRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, RichMediaTitleView, GLScrollViewSmoothTouchTracker, GLPopoverController, NSTimer, RichMediaCaretView, NBTokenizer, MediaObjectFactory, NSUndoManager, NBThumbnailCache, UIView, _TtC10Notability10PenManager, SelectionManager, NBCPPlayer, AppActivityView, CNContactViewController, NSMutableArray, NIPDFResponderView, GLDragSession, GLDropSession, NSURL, NIImagePopover, NSDate, NBHighlightColorPickerManager, NBSelectionTargetManager, NSString, GenericMediaObject, UIScrollView, SelectionUIObject;

@interface ProformanceNoteView : UIView <RichMediaView, NBTextPresenter, NBTextCaretZoomControllerDataSource, NoteInfoEditingDelegate, NBTextMappingProtocol, NBTextRedrawingProtocol, UIGestureRecognizerDelegate, RichMediaTouchInputManagerDelegate, MediaObjectFactoryDelegate, ImageMediaObjectDelegate, GenericMediaObjectDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, GLDroppableView, ProformancePaneViewEditingStateDelegate, NBNoteControllerTextInputDelegate, NIMediaObjectResizingViewDelegate, NINoteScrollViewContentView, SelectionUIObjectTextSystemDelegate, ProformancePaneViewControllerPaneBehaviorDelegate, ToggleSelectionColorPaletteInteractionTarget> {

	ProformancePaneViewController* paneViewController;
	NINoteScrollView* scrollView;
	NoteTakingSession* note;
	RichMediaDocument* document;
	NBNoteController* noteController;
	RichMediaTouchInputManager* touchManager;
	NIMediaObjectResizingView* mediaObjectResizingView;
	NSArray* touchesShouldNotCancelViews;
	UIPanGestureRecognizer* scrollViewPanGestureRecognizer;
	UITapGestureRecognizer* tapGestureRecognizerOneFinger;
	UITapGestureRecognizer* tapGestureRecognizerTwoFingers;
	UILongPressGestureRecognizer* longPressGestureRecognizerOneFingerLongPress;
	CGPoint previousLocationForMediaObjectLongPress;
	CGPoint previousScrollViewContentOffsetForMediaObjectLongPress;
	UITapGestureRecognizer* readOnlyTapRecognizer;
	RichMediaTitleView* titleView;
	GLScrollViewSmoothTouchTracker* smoothTouchTracker;
	GLScrollViewSmoothTouchTracker* smoothTouchTrackerForMediaObjects;
	GLPopoverController* textInteractionPopover;
	NSTimer* caretBlinkTimer;
	char caretBlinkState;
	char shouldBlinkCaret;
	char shouldScrollToCaret;
	CGRect caretRect;
	RichMediaCaretView* caretView;
	char isInsertingNewlines;
	char shouldAbortAutoScrolling;
	char enableFirstResponder;
	char enableFirstResponder_;
	char isMediaObjectMovingOrResizing;
	char shouldShowEditMenu;
	NBTokenizer* tokenizer;
	CGPoint selectedMediaObjectStartingDocumentContentOrigin;
	CGSize selectedMediaObjectStartingContentSize;
	MediaObjectFactory* mediaObjectFactory;
	char needsUpdatePanes;
	int lastInputMode;
	char _isUsingPalmRejection;
	char _isActive;
	char _isUserResizing;
	char _isUserInteracting;
	char _isUserDragging;
	char _isUserShowingOverlay;
	char _initialDrawComplete;
	char _noteIsNew;
	char _textBoxModeOnTouch;
	NSUndoManager* _undoManager;
	id<ProformanceNoteViewDelegate> _proformanceNoteViewDelegate;
	id<NINoteViewDelegate> _noteViewDelegate;
	NBThumbnailCache* _thumbnailCache;
	UIView* _inputView;
	_TtC10Notability10PenManager* _penManager;
	SelectionManager* _selectionManager;
	NBCPPlayer* _contentPlaybackPlayer;
	AppActivityView* _activityView;
	CNContactViewController* _contactViewController;
	NSMutableArray* _lastNoteControllers;
	NIPDFResponderView* _pdfResponderView;
	GLDragSession* _dragSession;
	GLDropSession* _dropSession;
	NSTimer* _delayedScrollCaretIntoViewTimer;
	NSURL* _pdfURL;
	NIImagePopover* _pdfPageImagePopover;
	NSDate* _lastScrollDate;
	NBHighlightColorPickerManager* _highlightColorPickerManager;
	NBSelectionTargetManager* _selectionTargetManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) GenericMediaObject * selectedMediaObject; 
@property (nonatomic,retain) NSMutableArray * lastNoteControllers;                                     //@synthesize lastNoteControllers=_lastNoteControllers - In the implementation block
@property (assign,nonatomic) char noteIsNew;                                                           //@synthesize noteIsNew=_noteIsNew - In the implementation block
@property (nonatomic,retain) NIPDFResponderView * pdfResponderView;                                    //@synthesize pdfResponderView=_pdfResponderView - In the implementation block
@property (nonatomic,retain) GLDragSession * dragSession;                                              //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,retain) GLDropSession * dropSession;                                              //@synthesize dropSession=_dropSession - In the implementation block
@property (assign,nonatomic) char initialDrawComplete;                                                 //@synthesize initialDrawComplete=_initialDrawComplete - In the implementation block
@property (assign,nonatomic) char textBoxModeOnTouch;                                                  //@synthesize textBoxModeOnTouch=_textBoxModeOnTouch - In the implementation block
@property (nonatomic,retain) NSTimer * delayedScrollCaretIntoViewTimer;                                //@synthesize delayedScrollCaretIntoViewTimer=_delayedScrollCaretIntoViewTimer - In the implementation block
@property (nonatomic,retain) NSURL * pdfURL;                                                           //@synthesize pdfURL=_pdfURL - In the implementation block
@property (nonatomic,retain) NIImagePopover * pdfPageImagePopover;                                     //@synthesize pdfPageImagePopover=_pdfPageImagePopover - In the implementation block
@property (nonatomic,retain) NSDate * lastScrollDate;                                                  //@synthesize lastScrollDate=_lastScrollDate - In the implementation block
@property (nonatomic,retain) NBHighlightColorPickerManager * highlightColorPickerManager;              //@synthesize highlightColorPickerManager=_highlightColorPickerManager - In the implementation block
@property (nonatomic,readonly) NBSelectionTargetManager * selectionTargetManager;                      //@synthesize selectionTargetManager=_selectionTargetManager - In the implementation block
@property (assign,nonatomic) char removesStrayMarks; 
@property (assign,nonatomic) char isUsingPalmRejection;                                                //@synthesize isUsingPalmRejection=_isUsingPalmRejection - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView; 
@property (nonatomic,__weak,readonly) RichMediaDocument * document; 
@property (__weak) id<ProformanceNoteViewDelegate> proformanceNoteViewDelegate;                        //@synthesize proformanceNoteViewDelegate=_proformanceNoteViewDelegate - In the implementation block
@property (__weak) id<NINoteViewDelegate> noteViewDelegate;                                            //@synthesize noteViewDelegate=_noteViewDelegate - In the implementation block
@property (nonatomic,readonly) NBNoteController * noteController; 
@property (nonatomic,readonly) CGRect documentRect; 
@property (assign,nonatomic) char shouldAbortAutoScrolling; 
@property (assign,nonatomic) char isActive;                                                            //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) char isUserResizing;                                                      //@synthesize isUserResizing=_isUserResizing - In the implementation block
@property (nonatomic,retain) NBThumbnailCache * thumbnailCache;                                        //@synthesize thumbnailCache=_thumbnailCache - In the implementation block
@property (assign,nonatomic) char isUserInteracting;                                                   //@synthesize isUserInteracting=_isUserInteracting - In the implementation block
@property (assign,nonatomic) char isUserDragging;                                                      //@synthesize isUserDragging=_isUserDragging - In the implementation block
@property (assign,nonatomic) char isUserShowingOverlay;                                                //@synthesize isUserShowingOverlay=_isUserShowingOverlay - In the implementation block
@property (nonatomic,readonly) char isMediaObjectMovingOrResizing; 
@property (nonatomic,readonly) char isEditingTextBox; 
@property (nonatomic,readonly) NSArray * touchesShouldNotCancelViews; 
@property (nonatomic,readonly) MediaObjectFactory * mediaObjectFactory; 
@property (nonatomic,retain) NSUndoManager * undoManager;                                              //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,readonly) SelectionUIObject * selectionUIObject; 
@property (nonatomic,readonly) RichMediaTitleView * titleView; 
@property (assign,nonatomic,__weak) UIView * inputView;                                                //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) _TtC10Notability10PenManager * penManager;                                //@synthesize penManager=_penManager - In the implementation block
@property (nonatomic,retain) SelectionManager * selectionManager;                                      //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,retain) NBCPPlayer * contentPlaybackPlayer;                                       //@synthesize contentPlaybackPlayer=_contentPlaybackPlayer - In the implementation block
@property (nonatomic,retain) AppActivityView * activityView;                                           //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) CNContactViewController * contactViewController;                          //@synthesize contactViewController=_contactViewController - In the implementation block
-(void)setContentPlaybackPlayer:(NBCPPlayer *)arg1 ;
-(void)recycleAllViews;
-(void)setInitialDrawComplete:(char)arg1 ;
-(CGRect)documentRect;
-(void)updatePanesInResponseToScrollOrZoom;
-(void)setDocumentNeedsDisplayInScaledDocumentRect:(CGRect)arg1 async:(char)arg2 info:(id)arg3 ;
-(void)setDocumentNeedsDisplayInDocumentContentRect:(CGRect)arg1 async:(char)arg2 info:(id)arg3 ;
-(void)setDocumentNeedsDisplay:(char)arg1 info:(id)arg2 ;
-(void)setPenManager:(_TtC10Notability10PenManager *)arg1 ;
-(SelectionUIObject *)selectionUIObject;
-(_TtC10Notability10PenManager *)penManager;
-(int)maxBackgroundPanes;
-(char)ignoreUpdatePanes;
-(void)updateThumbviewsInResponseToScrollOrZoom;
-(char)isUserResizing;
-(CGSize)hysterisisInsetSizeForScale:(float)arg1 ;
-(CGSize)prefetchInsetSizeForScale:(float)arg1 ;
-(char)shouldShowTextSelectionHighlight;
-(char)initialDrawComplete;
-(char)selectionUIObject:(id)arg1 shouldRespondToGestureRecognizer:(id)arg2 ;
-(char)isMediaObjectSelected;
-(void)setIsUserResizing:(char)arg1 ;
-(void)setNoteViewDelegate:(id<NINoteViewDelegate>)arg1 ;
-(void)setUniversalSizeClass:(int)arg1 ;
-(char)isUserDragging;
-(void)setIsUserShowingOverlay:(char)arg1 ;
-(void)setIsUserDragging:(char)arg1 ;
-(void)setIsUsingPalmRejection:(char)arg1 ;
-(MediaObjectFactory *)mediaObjectFactory;
-(void)deletePageAtIndex:(int)arg1 ;
-(void)clearPageAtIndex:(int)arg1 ;
-(void)cutPageAtIndex:(int)arg1 ;
-(void)pastePageAtIndex:(int)arg1 ;
-(void)setPaperIndex:(int)arg1 ;
-(void)setPaperLineStyle:(int)arg1 ;
-(void)toggleSelectionColorPalette;
-(char)isUserShowingOverlay;
-(GenericMediaObject *)selectedMediaObject;
-(NBNoteController *)noteController;
-(char)isEditingTextBox;
-(void)moveSelectedMediaObjectByAmount:(CGPoint)arg1 ;
-(void)presentEventViewControllerForEvent:(id)arg1 eventStore:(id)arg2 fromDocumentContentRect:(CGRect)arg3 ;
-(void)presentContactViewControllerForContact:(id)arg1 fromDocumentContentRect:(CGRect)arg2 ;
-(void)presentViewController:(id)arg1 fromDocumentContentRect:(CGRect)arg2 ;
-(void)documentInteractionTargetsDidChange:(id)arg1 ;
-(void)showEditMenuForSelection;
-(void)hideEditMenu;
-(void)checkSpelling;
-(void)showReplaceMenu;
-(void)replaceTextAtCaretNoReplacement;
-(void)replaceTextAtCaretChoice0;
-(void)replaceTextAtCaretChoice1;
-(void)replaceTextAtCaretChoice2;
-(void)textCheckerLearnSelectedWord;
-(void)textCheckerUnlearnSelectedWord;
-(void)noteControllerWillInsertOrDeleteText:(id)arg1 ;
-(void)noteControllerDidInsertOrDeleteText:(id)arg1 ;
-(NBCPPlayer *)contentPlaybackPlayer;
-(void)textCaretZoomController:(id)arg1 renderInContext:(CGContextRef)arg2 ;
-(CGRect)textCaretZoomController:(id)arg1 rectInDataSourceCoords:(CGRect)arg2 fromView:(id)arg3 ;
-(void)setDropSession:(GLDropSession *)arg1 ;
-(GLDropSession *)dropSession;
-(void)redrawMediaViewInDocumentRects:(id)arg1 async:(char)arg2 ;
-(GLDragSession *)dragSession;
-(void)setDragSession:(GLDragSession *)arg1 ;
-(char)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)noteControllerCopy:(id)arg1 ;
-(void)speak:(id)arg1 ;
-(void)defineSelectedText;
-(void)zoomContainerWillBeginZooming;
-(void)zoomContainerDidEndZooming;
-(void)zoomContainerDidScroll;
-(void)setNeedsUpdatePanes;
-(void)zoomContainerDidEndScrollAnimation;
-(void)zoomContainerWillDecelerate;
-(void)zoomContainerDidEndDecelerating;
-(void)zoomContainerDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)mediaObjectBeganResizing:(id)arg1 ;
-(void)mediaObjectStoppedResizing:(id)arg1 ;
-(id<NINoteViewDelegate>)noteViewDelegate;
-(void)setNote:(id)arg1 isNew:(char)arg2 ;
-(float)normalizedDocumentOffset;
-(void)doTextLayout;
-(void)setRemovesStrayMarks:(char)arg1 ;
-(void)selectionUIObject:(id)arg1 textSystemInsertTextBlockInRect:(CGRect)arg2 withText:(id)arg3 ;
-(char)isUsingPalmRejection;
-(void)dropSelectedCurves:(id)arg1 selectionRepresentation:(id)arg2 penWidthScaleFactor:(float)arg3 toLocation:(CGPoint)arg4 operation:(int)arg5 completion:(/*^block*/id)arg6 ;
-(void)dropImage:(id)arg1 toLocation:(CGPoint)arg2 operation:(int)arg3 completion:(/*^block*/id)arg4 ;
-(CGPoint)mediaObjectFactoryRequestsScreenCenterInDocumentCoords:(id)arg1 ;
-(id)mediaObjectFactoryRequestsCurrentNoteDocument:(id)arg1 ;
-(CGPoint)mediaObjectFactory:(id)arg1 requestsConvertPointFromWindow:(CGPoint)arg2 ;
-(void)mediaObjectFactory:(id)arg1 adjustMediaObjectResizingViewForObject:(id)arg2 ;
-(void)mediaObjectFactory:(id)arg1 didDismissEditingViewControllerForObject:(id)arg2 ;
-(void)mediaObjectShouldRedraw:(id)arg1 ;
-(char)selectionUIObjectCanPaste:(id)arg1 ;
-(void)selectionUIObject:(id)arg1 textSystemPasteAtPoint:(CGPoint)arg2 ;
-(void)selectionUIObject:(id)arg1 textSystemInsertTextBlockAtPoint:(CGPoint)arg2 ;
-(void)selectionUIObject:(id)arg1 insertCaretAtPoint:(CGPoint)arg2 ;
-(void)selectionUIObject:(id)arg1 insertImage:(id)arg2 atPoint:(CGPoint)arg3 ;
-(int)maxOffscreenBackgroundPanes;
-(void)noteControllerDocumentPageCountDidChangeAsync:(char)arg1 ;
-(void)redrawPaperAndPDFForPagesBelowIndex:(int)arg1 ;
-(void)selectMediaObjectForEdit:(id)arg1 ;
-(void)redrawMediaViewForMediaObject:(id)arg1 ;
-(void)deselectSelectedForEditingMediaObject;
-(void)showCaret;
-(unsigned)characterIndexForPoint:(CGPoint)arg1 noteController:(id*)arg2 ;
-(id)nonTextBlockMediaObjectForPoint:(CGPoint)arg1 ;
-(char)seekToContentPlaybackEventID:(unsigned)arg1 ;
-(void)noteControllerWantsToBlinkCaret;
-(void)makePDFResponderFirstSelector;
-(void)noteControllerWillMoveCaretToPointBelowText;
-(void)noteControllerDidMoveCaretToPointBelowText:(char)arg1 ;
-(void)resignSelectedForEditingMediaObjectIfNeededAndDeselect;
-(void)noteControllerSelect:(id)arg1 ;
-(void)noteControllerSelectAll:(id)arg1 ;
-(void)noteControllerCut:(id)arg1 ;
-(void)noteControllerPaste:(id)arg1 ;
-(void)_paste:(id)arg1 ;
-(void)_paste:(id)arg1 options:(int)arg2 ;
-(char)noteControllerCanBecomeFirstResponder;
-(void)noteControllerDidRestoreCaret;
-(void)noteControllerWillRestoreCaret;
-(void)noteControllerWillBecomeFirstResponder;
-(void)noteControllerWillResignFirstResponder;
-(void)mediaObjectToggledTextWrapMode:(id)arg1 ;
-(void)mediaObjectShouldBeDeleted:(id)arg1 andMenuShouldBeHidden:(char)arg2 ;
-(void)handleApplicationWillChangeStatusBarOrientation:(id)arg1 ;
-(void)blinkCaret:(id)arg1 ;
-(void)mediaObjectStoppedMoving:(id)arg1 ;
-(void)inputManager_rectsForSelectionStartHandle:(CGRect*)arg1 endHandle:(CGRect*)arg2 ;
-(NBHighlightColorPickerManager *)highlightColorPickerManager;
-(void)showEditMenuForRect:(CGRect)arg1 ;
-(void)mediaObjectNeedsRedraw:(id)arg1 redrawAsync:(char)arg2 ;
-(void)inputManager_showCaretZoomViewForRect:(CGRect)arg1 ;
-(void)setHighlightColorPickerManager:(NBHighlightColorPickerManager *)arg1 ;
-(void)noteControllerWantsToShowCaret;
-(CGPoint)inputManager_locationForTouch:(id)arg1 ;
-(char)inputManager_delegateContainsPoint:(CGPoint)arg1 ;
-(char)inputManager_shouldInsertTextBoxForTapPoint:(CGPoint)arg1 ;
-(void)inputManager_insertTextBoxAtPoint:(CGPoint)arg1 ;
-(void)inputManager_showEditMenuAtCaret;
-(void)inputManager_moveEditMenuToCaret;
-(void)inputManager_showEditMenuForSelection;
-(void)inputManager_hideEditMenu;
-(void)inputManager_hideCaretZoomView;
-(void)inputManager_showCaretZoomView;
-(void)inputManager_scrollTouchIntoView:(id)arg1 ;
-(void)inputManager_showPopoverForPDFHighlight:(id)arg1 forPage:(id)arg2 location:(CGPoint)arg3 ;
-(void)inputManager_showPopoverForTextHighlight:(id)arg1 location:(CGPoint)arg2 ;
-(char)inputManager_isLocationInSelectableText:(CGPoint)arg1 ;
-(char)inputManager_isLocationInSelectablePDFText:(CGPoint)arg1 ;
-(void)inputManager_didTapAndHoldAtLocationAwayFromText:(CGPoint)arg1 ;
-(void)inputManager_hideCaret;
-(char)inputManager_autoZoomCaretHeightRatioThresholdExceeded;
-(void)passTouchesBeganToSuper:(id)arg1 event:(id)arg2 ;
-(void)passTouchesMovedToSuper:(id)arg1 event:(id)arg2 ;
-(void)passTouchesEndedToSuper:(id)arg1 event:(id)arg2 ;
-(void)passTouchesCanceledToSuper:(id)arg1 event:(id)arg2 ;
-(void)documentNeedsDisplayInDocumentContentRect:(CGRect)arg1 ;
-(void)mediaObjectNeedsRedraw:(id)arg1 redrawAsync:(char)arg2 dirtyRects:(id)arg3 ;
-(void)mediaObjectDidDrag:(id)arg1 redrawAsync:(char)arg2 dirtyRects:(id)arg3 ;
-(void)dropAttributedString:(id)arg1 fromTextStore:(id)arg2 range:(NSRange)arg3 toLocation:(CGPoint)arg4 operation:(int)arg5 completion:(/*^block*/id)arg6 ;
-(void)dropString:(id)arg1 toLocation:(CGPoint)arg2 operation:(int)arg3 completion:(/*^block*/id)arg4 ;
-(id)mediaObjectHandleForPoint:(CGPoint)arg1 ;
-(char)mediaObjectResizingViewZoomedPastManipulatability:(id)arg1 ;
-(void)mediaObjectBeganMoving:(id)arg1 withTouchOrGestureRecognizer:(id)arg2 ;
-(void)mediaObject:(id)arg1 didMoveByAmount:(CGPoint)arg2 ;
-(void)mediaObjectDidResize:(id)arg1 resizeMode:(int)arg2 ;
-(void)mediaObjectStoppedMoving:(id)arg1 showEditMenu:(char)arg2 ;
-(void)mediaObjectCancelledMoving:(id)arg1 ;
-(char)mediaObjectCaptionShouldBeginEditing:(id)arg1 captionView:(id)arg2 ;
-(void)mediaObjectCaptionDidFinishEditing:(id)arg1 captionView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 scrollView:(id)arg2 ;
-(void)setProformanceNoteViewDelegate:(id<ProformanceNoteViewDelegate>)arg1 ;
-(char)removesStrayMarks;
-(void)prepareToCloseNote;
-(void)updateAnimatableMediaObjects;
-(void)insertNewPageAtIndex:(int)arg1 ;
-(void)movePageAtIndex:(int)arg1 toIndex:(int)arg2 ;
-(NSArray *)touchesShouldNotCancelViews;
-(char)panRecognizersShouldCancelTouchForView:(id)arg1 ;
-(char)zoomContainerRecognizerShouldBegin:(id)arg1 ;
-(void)scrollOrAutoZoomCaretIntoView;
-(id)currentNoteController;
-(char)shouldAutoZoomBasedOnCaretHeight;
-(float)scaledLineHeightForCurrentCaret;
-(CGRect)currentCaretLocationRectUnscaled;
-(float)ratioOfIdealCaretHeightToHeight:(float)arg1 ;
-(float)visualBufferForScrollingToCaret;
-(CGPoint)snapPointToTopLeftIfNecessary:(CGPoint)arg1 autoZoomChangeFactor:(float)arg2 ;
-(void)dropGIFImage:(id)arg1 toLocation:(CGPoint)arg2 operation:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)dropContentFileAtURL:(id)arg1 operation:(int)arg2 completion:(/*^block*/id)arg3 ;
-(CGPoint)mediaObjectFactoryRequestsContentOffsetOfInsertingView:(id)arg1 ;
-(void)mediaObjectFactory:(id)arg1 willInsertMediaObject:(id)arg2 ;
-(void)mediaObjectFactory:(id)arg1 didInsertMediaObject:(id)arg2 inViewRect:(CGRect)arg3 ;
-(id)mediaObjectFactoryRequestsCurrentWindow:(id)arg1 ;
-(void)updateThumbsInDocumentRect:(CGRect)arg1 ;
-(id<ProformanceNoteViewDelegate>)proformanceNoteViewDelegate;
-(char)hasVisiblePlayingAnimatableObjects;
-(char)willHandlePDFLinkForGestureRecognizer:(id)arg1 ;
-(id)newNoteControllerWithScaleFactor:(float)arg1 pageContentWidth:(float)arg2 ;
-(void)handleApplicationWillResignActive:(id)arg1 ;
-(void)setShouldAbortAutoScrolling:(char)arg1 ;
-(void)updateCaretLocation:(unsigned)arg1 ;
-(void)updateMediaObjectResizingViewWithScaleFactor:(float)arg1 ;
-(char)noteIsNew;
-(void)setLastScrollDate:(NSDate *)arg1 ;
-(void)setIsUserInteracting:(char)arg1 ;
-(void)handlePlayerNotification:(id)arg1 ;
-(void)setNoteIsNew:(char)arg1 ;
-(void)hideCaretZoomView;
-(void)handwritingObjectWasModified:(id)arg1 ;
-(void)handwritingObjectDidClearSelection:(id)arg1 ;
-(void)handwritingObjectDidSetSelection:(id)arg1 ;
-(void)propagateProperties;
-(void)adoptMetadataFromNote:(id)arg1 ;
-(void)prepareForNewNote;
-(void)_makeMediaObjectFactoryForTextStore:(id)arg1 ;
-(NBSelectionTargetManager *)selectionTargetManager;
-(void)enableAndDisableGestureRecognizersForMode:(int)arg1 ;
-(NIPDFResponderView *)pdfResponderView;
-(void)scrollOrAutoZoomCaretIntoViewWithCaretRect:(id)arg1 ;
-(NSTimer *)delayedScrollCaretIntoViewTimer;
-(char)rectIsWithinVisibleScrollViewArea:(CGRect)arg1 ;
-(float)scrollCaretIntoViewVerticalBuffer;
-(unsigned)mapViewPointToCharacterIndex:(CGPoint)arg1 isBelowContent:(char*)arg2 ;
-(void)textSystemInsertTextBlockInRect:(CGRect)arg1 withText:(id)arg2 ;
-(void)scrollCaretIntoViewAnimated:(char)arg1 ;
-(char)mediaObjectZoomedPastManipulatability;
-(void)resetSelectionTargets;
-(id)currentTouchInputManager;
-(void)clearPages;
-(void)scrollTextRangeIntoView:(NSRange)arg1 ;
-(float)distancePointIsOffTopOfView:(CGPoint)arg1 ;
-(float)distancePointIsOffBottomOfView:(CGPoint)arg1 ;
-(char)isMediaObjectMovingOrResizing;
-(char)shouldAbortAutoScrolling;
-(NSMutableArray *)lastNoteControllers;
-(void)setLastNoteControllers:(NSMutableArray *)arg1 ;
-(void)setPdfResponderView:(NIPDFResponderView *)arg1 ;
-(char)textBoxModeOnTouch;
-(void)setTextBoxModeOnTouch:(char)arg1 ;
-(void)setDelayedScrollCaretIntoViewTimer:(NSTimer *)arg1 ;
-(NIImagePopover *)pdfPageImagePopover;
-(void)setPdfPageImagePopover:(NIImagePopover *)arg1 ;
-(NSDate *)lastScrollDate;
-(void)_deselectSelectedForEditingMediaObject;
-(void)_selectMediaObjectForEdit:(id)arg1 ;
-(float)caretHeightRatioThreshold;
-(void)delayedScrollCaretIntoViewTimerFire:(id)arg1 ;
-(void)scrollCaretIntoViewWithCaretRect:(id)arg1 ;
-(id)selectedTextBlockOrNil;
-(float)currentCaretHeight;
-(void)registerFullReloadWithUndoManager;
-(void)deletePageAtIndex:(int)arg1 writeToPasteboard:(char)arg2 ;
-(void)setPasteboardItemsForPageAtIndex:(int)arg1 cut:(char)arg2 ;
-(void)dismissContactViewController;
-(void)updateSelectionTargetManager;
-(id)selectedMediaObjectRects;
-(char)charLocation:(int)arg1 isInPage:(id)arg2 ;
-(void)showCaretZoomViewForRect:(CGRect)arg1 ;
-(char)noteInfoEditorShouldBeginEditing:(id)arg1 ;
-(void)noteInfoEditorDidBeginEditing:(id)arg1 ;
-(char)noteInfoEditorShouldEndEditing:(id)arg1 newTitle:(id)arg2 ;
-(char)noteInfoEditorShouldReturn:(id)arg1 newTitle:(id)arg2 ;
-(void)noteInfoEditorDidEndEditing:(id)arg1 newTitle:(id)arg2 ;
-(void)noteInfoEditorDidRequestDateChange:(id)arg1 ;
-(id)urlForCurrentNote:(char)arg1 ;
-(void)handwritingTouchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)handwritingTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)handwritingTouchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)handwritingTouchesEstimatedPropertiesUpdated:(id)arg1 ;
-(void)handwritingTouchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateSelectionTargetManagerWithGestureRecognizer:(id)arg1 ;
-(char)_enablePDFLinkBehaviorOnlyForGestureRecognizer:(id)arg1 ;
-(id)_validTappedObjectForMediaObjectSelectionRecognizer:(id)arg1 ;
-(char)_handlePDFLinkForGestureRecognizer:(id)arg1 ;
-(void)moveEditMenuToRect:(CGRect)arg1 ;
-(float)_realZoomScale;
-(void)_scrollMediaResizingViewToVisible;
-(void)redrawMediaObject:(id)arg1 async:(char)arg2 ;
-(void)startEditingSelectedTextBlock:(id)arg1 ;
-(void)_showEditMenu;
-(void)moveMediaObject:(id)arg1 fromDocumentContentOrigin:(CGPoint)arg2 toDocumentContentOrigin:(CGPoint)arg3 ;
-(void)resizeMediaObject:(id)arg1 fromSize:(CGSize)arg2 toSize:(CGSize)arg3 fromOrigin:(CGPoint)arg4 toOrigin:(CGPoint)arg5 ;
-(void)redrawMediaObject:(id)arg1 async:(char)arg2 dirtyRects:(id)arg3 ;
-(void)updateHandwritingObjectForChangeInMediaObject:(id)arg1 ;
-(char)mediaObjectIsVisible:(id)arg1 ;
-(char)shouldPauseAnimatableObjects;
-(char)mediaObjectShouldBeSelectedForEdit:(id)arg1 ;
-(void)mediaObjectTouchEndedWithoutMoving:(id)arg1 ;
-(void)mediaObjectDidAnimate:(id)arg1 ;
-(float)mediaObjectCurrentViewScale:(id)arg1 ;
-(void)mediaObjectShouldOpenInFigureEditor:(id)arg1 ;
-(void)mediaObjectShouldOpenInWebBrowser:(id)arg1 ;
-(void)mediaObjectDidLoadImageData:(id)arg1 ;
-(void)mediaObjectFactory:(id)arg1 willPushEditingViewControllerForObject:(id)arg2 ;
-(void)showEditMenuAtCaret;
-(CGRect)viableMenuRectForRect:(CGRect)arg1 ;
-(void)pasteMediaObjectHandwritingInRect:(CGRect)arg1 forMediaObject:(id)arg2 ;
-(void)dropMediaObject:(id)arg1 includeHandwriting:(char)arg2 penWidthScaleFactor:(float)arg3 toLocation:(CGPoint)arg4 operation:(int)arg5 completion:(/*^block*/id)arg6 ;
-(id)dragItemsForSession:(id)arg1 withTouchAtPoint:(CGPoint)arg2 ;
-(char)hasSelectionAtViewPoint:(CGPoint)arg1 selectionManager:(id)arg2 ;
-(void)_updateSelectionTargetManagerWithTouchAtPoint:(CGPoint)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(char)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(char)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(char)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2 ;
-(void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned)arg3 ;
-(void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(id)dropSessionFromSession:(id)arg1 ;
-(char)canHandleDropSession:(id)arg1 ;
-(void)clearDropSession;
-(id)dropProposalForDropSession:(id)arg1 location:(CGPoint)arg2 ;
-(void)_showFailureForError:(id)arg1 ;
-(void)showTextCursorAtPoint:(CGPoint)arg1 noteController:(id*)arg2 charIndex:(unsigned*)arg3 ;
-(void)handleNotification:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)didMoveToWindow;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)isActive;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)resignFirstResponder;
-(NSUndoManager *)undoManager;
-(char)becomeFirstResponder;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(char)touchesShouldCancelInContentView:(id)arg1 ;
-(RichMediaTitleView *)titleView;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(CGRect)visibleRect;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)select:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(UIView *)inputView;
-(void)setIsActive:(char)arg1 ;
-(void)setInputView:(UIView *)arg1 ;
-(void)setInputMode:(int)arg1 ;
-(CGRect)caretRect;
-(char)canPaste;
-(RichMediaDocument *)document;
-(void)setScaleFactor:(float)arg1 ;
-(NSURL *)pdfURL;
-(void)setPdfURL:(NSURL *)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(AppActivityView *)activityView;
-(void)setActivityView:(AppActivityView *)arg1 ;
-(void)copyPageAtIndex:(int)arg1 ;
-(NBThumbnailCache *)thumbnailCache;
-(void)setThumbnailCache:(NBThumbnailCache *)arg1 ;
-(void)handleTapGesture:(id)arg1 ;
-(void)pauseSpeaking:(id)arg1 ;
-(CNContactViewController *)contactViewController;
-(void)setContactViewController:(CNContactViewController *)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)handleLongPressGesture:(id)arg1 ;
-(SelectionManager *)selectionManager;
-(char)isUserInteracting;
-(void)setNote:(id)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)hideCaret;
-(char)isEditingText;
-(void)highlight:(id)arg1 ;
-(id)visiblePages;
-(void)setSelectionManager:(SelectionManager *)arg1 ;
-(void)createTitleView;
@end

