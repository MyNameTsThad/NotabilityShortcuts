/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import "Notability-Structs.h"
#import <Notability/NIToolbar.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>
#import <Notability/GLUndoRedoButtonDelegate.h>
#import <UIKit/UIToolbarDelegate.h>

@protocol PaperSelectorDelegate, RichMediaTopToolbarDelegate, UILayoutSupport;
@class NBButton, NILabel, UIView, RecorderView, GLUndoRedoButton, UIButton, PaperSelectorViewController, NINotesView, UIViewController, GLPopoverController, NIInputToolView, NoteTakingSession, NSArray, UILabel, NIToolbar, NSUndoManager, GingerLabsRecordingsLibrary, _TtC10Notability10PenManager, GLUtilityTableViewController, UINavigationController, _TtC10Notability18NIColorDropperView, NSDate, NSString;

@interface NINoteViewTopToolbar : NIToolbar <UIPrintInteractionControllerDelegate, GLUndoRedoButtonDelegate, UIToolbarDelegate> {

	NBButton* utilityButton;
	NBButton* libraryButton;
	NBButton* addToLibraryButton;
	NBButton* closeButton;
	NILabel* noteTitleLabel;
	UIView* titleVerticalSpacer1;
	UIView* titleVerticalSpacer2;
	NBButton* colorDoneButton;
	NBButton* colorCancelButton;
	UIView* colorDropperTitleContainer;
	NILabel* colorDropperLabel;
	UIView* colorDropperColorView;
	RecorderView* recorderView;
	GLUndoRedoButton* undoButton;
	UIButton* paperSelectorButton;
	PaperSelectorViewController* paperSelectorViewController;
	NINotesView* notesInSubjectTable;
	UIViewController* notesInSubjectTableVC;
	GLPopoverController* notesInSubjectTablePopover;
	NIInputToolView* segmentedInputControl;
	NoteTakingSession* note;
	NSArray* _customViewToolbarItems;
	UILabel* variableSpeedSliderInstructionLabel;
	NIToolbar* variableSpeedSliderBackground;
	char _shouldExtendThroughTopLayoutGuide;
	char _isUsingRightHandedMode;
	id<PaperSelectorDelegate> paperSelectorDelegate;
	NSUndoManager* _undoManager;
	GingerLabsRecordingsLibrary* _recordingLibrary;
	id<RichMediaTopToolbarDelegate> _topToolbarDelegate;
	_TtC10Notability10PenManager* _penManager;
	GLPopoverController* _utilityPopover;
	GLUtilityTableViewController* _utilityTableViewController;
	UINavigationController* _utilityNavigationController;
	id<UILayoutSupport> _topLayoutGuide;
	int _mode;
	int _universalSizeClass;
	_TtC10Notability18NIColorDropperView* _colorDropper;
	CGRect _exportButtonRect;

}

@property (nonatomic,retain) GLPopoverController * utilityPopover;                                   //@synthesize utilityPopover=_utilityPopover - In the implementation block
@property (nonatomic,retain) GLUtilityTableViewController * utilityTableViewController;              //@synthesize utilityTableViewController=_utilityTableViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * utilityNavigationController;                   //@synthesize utilityNavigationController=_utilityNavigationController - In the implementation block
@property (assign,nonatomic) int universalSizeClass;                                                 //@synthesize universalSizeClass=_universalSizeClass - In the implementation block
@property (nonatomic,retain) _TtC10Notability18NIColorDropperView * colorDropper;                    //@synthesize colorDropper=_colorDropper - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                                            //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,retain) GingerLabsRecordingsLibrary * recordingLibrary;                         //@synthesize recordingLibrary=_recordingLibrary - In the implementation block
@property (nonatomic,readonly) RecorderView * recorderView; 
@property (nonatomic,readonly) NSDate * recordingStartTime; 
@property (assign,nonatomic,__weak) id<PaperSelectorDelegate> paperSelectorDelegate; 
@property (assign,nonatomic,__weak) id<RichMediaTopToolbarDelegate> topToolbarDelegate;              //@synthesize topToolbarDelegate=_topToolbarDelegate - In the implementation block
@property (nonatomic,retain) _TtC10Notability10PenManager * penManager;                              //@synthesize penManager=_penManager - In the implementation block
@property (assign,nonatomic,__weak) id<UILayoutSupport> topLayoutGuide;                              //@synthesize topLayoutGuide=_topLayoutGuide - In the implementation block
@property (assign,nonatomic) char shouldExtendThroughTopLayoutGuide;                                 //@synthesize shouldExtendThroughTopLayoutGuide=_shouldExtendThroughTopLayoutGuide - In the implementation block
@property (nonatomic,readonly) CGRect exportButtonRect;                                              //@synthesize exportButtonRect=_exportButtonRect - In the implementation block
@property (assign,nonatomic) char isUsingRightHandedMode;                                            //@synthesize isUsingRightHandedMode=_isUsingRightHandedMode - In the implementation block
@property (assign) int mode;                                                                         //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPenManager:(_TtC10Notability10PenManager *)arg1 ;
-(_TtC10Notability10PenManager *)penManager;
-(void)setIsUsingRightHandedMode:(char)arg1 ;
-(void)setUniversalSizeClass:(int)arg1 ;
-(void)setColorDropper:(_TtC10Notability18NIColorDropperView *)arg1 ;
-(_TtC10Notability18NIColorDropperView *)colorDropper;
-(void)updateInterfaceForInputMode;
-(GingerLabsRecordingsLibrary *)recordingLibrary;
-(void)resetStateForNote:(id)arg1 ;
-(void)setRecordingLibrary:(GingerLabsRecordingsLibrary *)arg1 ;
-(int)universalSizeClass;
-(void)setTopToolbarDelegate:(id<RichMediaTopToolbarDelegate>)arg1 ;
-(void)setPaperSelectorDelegate:(id<PaperSelectorDelegate>)arg1 ;
-(void)updateStateForUniversalSizeClass:(int)arg1 ;
-(RecorderView *)recorderView;
-(void)restoreRecordingStartTime:(id)arg1 ;
-(void)tearDownBeforeUniversalSizeClassChange;
-(void)libraryButtonAction;
-(GLPopoverController *)utilityPopover;
-(void)setUpUtilityPopover;
-(void)exportButtonAction:(id)arg1 ;
-(void)showPaperTray;
-(void)showInfoAction;
-(UINavigationController *)utilityNavigationController;
-(void)navigationManagerWillOpen;
-(void)navigationManagerWillClose;
-(void)recordingButtonAction;
-(id)customViewToolbarItemsForSizeAndState;
-(void)setCustomViewToolbarItems:(id)arg1 ;
-(void)updateCustomViewToolbarItems:(id)arg1 previousItems:(id)arg2 ;
-(void)updateCustomViewToolbarItems;
-(id)customViewToolbarItems;
-(char)isUsingRightHandedMode;
-(void)undoRedoButtonWillShowActionSheet:(id)arg1 ;
-(void)sendShowUtilityMenuAction;
-(void)importButtonAction;
-(void)colorDoneButtonAction;
-(void)colorCancelButtonAction;
-(void)handleTimelineSeek:(id)arg1 ;
-(void)updateUndoRedoButtons;
-(void)updateConstraintsEditAllowed;
-(void)updateConstraintsViewOnly;
-(void)updateConstraintsColorDropper;
-(void)setUtilityPopover:(GLPopoverController *)arg1 ;
-(void)tearDownPopoverControllers;
-(void)setUtilityTableViewController:(GLUtilityTableViewController *)arg1 ;
-(GLUtilityTableViewController *)utilityTableViewController;
-(id)cellDataForUtilityTable;
-(void)setUtilityNavigationController:(UINavigationController *)arg1 ;
-(id<RichMediaTopToolbarDelegate>)topToolbarDelegate;
-(void)showMediaMenu;
-(void)paperCellAction;
-(void)_centerViewInSelfVertically:(id)arg1 ;
-(void)updateSkin;
-(id)customViewToolbarItemsForViewOnly;
-(id)customViewToolbarItemsForColorDropper;
-(void)updateInterfaceForPenMode;
-(void)undoButtonAction;
-(void)redoButtonAction;
-(void)noteInfoViewRequestsBack;
-(void)closeAllPopoversAnimated:(char)arg1 ;
-(id<PaperSelectorDelegate>)paperSelectorDelegate;
-(char)shouldExtendThroughTopLayoutGuide;
-(void)setShouldExtendThroughTopLayoutGuide:(char)arg1 ;
-(CGRect)exportButtonRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSUndoManager *)undoManager;
-(void)updateConstraints;
-(int)positionForBar:(id)arg1 ;
-(id<UILayoutSupport>)topLayoutGuide;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)setTopLayoutGuide:(id<UILayoutSupport>)arg1 ;
-(NSDate *)recordingStartTime;
@end

