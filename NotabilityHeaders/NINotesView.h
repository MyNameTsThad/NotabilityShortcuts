/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/LibraryNoteView.h>
#import <Notability/NBNoteCellDelegate.h>
#import <UIKit/UITableViewDragDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Notability/GLTouchCatcherViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIPanGestureRecognizer, UITableViewCell, UIImageView, GLTouchCatcherView, UITableView, _TtC10Notability28NoteIndexingStatusController, UIView, NINomadView, NINotesViewTapComposeHelperView, _TtC10Notability20SearchViewController, NSMutableArray, GLKVOToken, NSArray, NIiCloudEmergencyView, NSLayoutConstraint, UIColor, NBNoteCell, NoteCellThumbnailView, NSString;

@interface NINotesView : LibraryNoteView <NBNoteCellDelegate, UITableViewDragDelegate, UITextFieldDelegate, GLTouchCatcherViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	UIPanGestureRecognizer* tablePanGestureRecognizer;
	UITableViewCell* emptyListCell;
	UIImageView* emptyListCellImageView;
	GLTouchCatcherView* iPhoneTouchCatcherView;
	char _extraTopContentInsetSetExternally;
	char _shouldShowCreateNoteButton;
	char _shouldShowImportButton;
	char _allowNoteDragging;
	char _noteStoreDidUpdateDuringNoteMove;
	char _displayingLastViewedDate;
	char _displayingCreationDate;
	char _headerIsAttachedToTable;
	char _isLibraryNotesView;
	char _useCompactLayout;
	char _allowsHeaderToBeShown;
	UITableView* _notesTableView;
	_TtC10Notability28NoteIndexingStatusController* _indexingStatusController;
	float _extraTopContentInset;
	UIView* _headerView;
	NINomadView* _headerNomadView;
	NINotesViewTapComposeHelperView* _composeInstructionsCellView;
	_TtC10Notability20SearchViewController* _searchViewController;
	float _keyboardBottomInset;
	/*^block*/id _deceleratedCallback;
	NSMutableArray* _preinitializedNoteCells;
	GLKVOToken* _sortKeyObservationToken;
	NSArray* _notesTableVerticalConstraints;
	NIiCloudEmergencyView* _iCloudEmergencyView;
	NSLayoutConstraint* _iCloudEmergencyViewVerticalHiddenConstraint;
	UIColor* _deleteActionImagePattern;
	NBNoteCell* _draggingCell;
	NoteCellThumbnailView* _draggingImageView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char headerIsAttachedToTable;                                                                            //@synthesize headerIsAttachedToTable=_headerIsAttachedToTable - In the implementation block
@property (nonatomic,readonly) UIView * headerView;                                                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) NINomadView * headerNomadView;                                                               //@synthesize headerNomadView=_headerNomadView - In the implementation block
@property (nonatomic,retain) NINotesViewTapComposeHelperView * composeInstructionsCellView;                                 //@synthesize composeInstructionsCellView=_composeInstructionsCellView - In the implementation block
@property (nonatomic,retain) _TtC10Notability20SearchViewController * searchViewController;                                 //@synthesize searchViewController=_searchViewController - In the implementation block
@property (assign,nonatomic) float keyboardBottomInset;                                                                     //@synthesize keyboardBottomInset=_keyboardBottomInset - In the implementation block
@property (assign,nonatomic) char isLibraryNotesView;                                                                       //@synthesize isLibraryNotesView=_isLibraryNotesView - In the implementation block
@property (assign,nonatomic) char useCompactLayout;                                                                         //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
@property (assign,nonatomic) char allowsHeaderToBeShown;                                                                    //@synthesize allowsHeaderToBeShown=_allowsHeaderToBeShown - In the implementation block
@property (nonatomic,copy) id deceleratedCallback;                                                                          //@synthesize deceleratedCallback=_deceleratedCallback - In the implementation block
@property (nonatomic,readonly) NSMutableArray * preinitializedNoteCells;                                                    //@synthesize preinitializedNoteCells=_preinitializedNoteCells - In the implementation block
@property (nonatomic,readonly) GLKVOToken * sortKeyObservationToken;                                                        //@synthesize sortKeyObservationToken=_sortKeyObservationToken - In the implementation block
@property (nonatomic,retain) NSArray * notesTableVerticalConstraints;                                                       //@synthesize notesTableVerticalConstraints=_notesTableVerticalConstraints - In the implementation block
@property (nonatomic,retain) NIiCloudEmergencyView * iCloudEmergencyView;                                                   //@synthesize iCloudEmergencyView=_iCloudEmergencyView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iCloudEmergencyViewVerticalHiddenConstraint;                              //@synthesize iCloudEmergencyViewVerticalHiddenConstraint=_iCloudEmergencyViewVerticalHiddenConstraint - In the implementation block
@property (nonatomic,retain) UIColor * deleteActionImagePattern;                                                            //@synthesize deleteActionImagePattern=_deleteActionImagePattern - In the implementation block
@property (nonatomic,retain) NBNoteCell * draggingCell;                                                                     //@synthesize draggingCell=_draggingCell - In the implementation block
@property (nonatomic,retain) NoteCellThumbnailView * draggingImageView;                                                     //@synthesize draggingImageView=_draggingImageView - In the implementation block
@property (nonatomic,readonly) UITableView * notesTableView;                                                                //@synthesize notesTableView=_notesTableView - In the implementation block
@property (assign,nonatomic,__weak) _TtC10Notability28NoteIndexingStatusController * indexingStatusController;              //@synthesize indexingStatusController=_indexingStatusController - In the implementation block
@property (assign,nonatomic) char shouldShowCreateNoteButton;                                                               //@synthesize shouldShowCreateNoteButton=_shouldShowCreateNoteButton - In the implementation block
@property (assign,nonatomic) char shouldShowImportButton;                                                                   //@synthesize shouldShowImportButton=_shouldShowImportButton - In the implementation block
@property (assign,nonatomic) char allowNoteDragging;                                                                        //@synthesize allowNoteDragging=_allowNoteDragging - In the implementation block
@property (assign,nonatomic) float extraTopContentInset;                                                                    //@synthesize extraTopContentInset=_extraTopContentInset - In the implementation block
@property (nonatomic,readonly) NSString * currentSearchTerm; 
@property (assign,nonatomic) char noteStoreDidUpdateDuringNoteMove;                                                         //@synthesize noteStoreDidUpdateDuringNoteMove=_noteStoreDidUpdateDuringNoteMove - In the implementation block
@property (assign,nonatomic) char displayingLastViewedDate;                                                                 //@synthesize displayingLastViewedDate=_displayingLastViewedDate - In the implementation block
@property (assign,nonatomic) char displayingCreationDate;                                                                   //@synthesize displayingCreationDate=_displayingCreationDate - In the implementation block
-(id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)touchCatcher:(id)arg1 touchesEnded:(id)arg2 ;
-(void)touchCatcher:(id)arg1 touchesMoved:(id)arg2 ;
-(char)searchBarIsFirstResponder;
-(void)searchBarBecomeFirstResponder;
-(void)resignSearchBar;
-(void)restoreSearchTerm:(id)arg1 becomeFirstResponder:(char)arg2 ;
-(NSString *)currentSearchTerm;
-(id)initForLibrary:(char)arg1 compactLayout:(char)arg2 ;
-(void)setShouldShowCreateNoteButton:(char)arg1 ;
-(void)setShouldShowImportButton:(char)arg1 ;
-(void)setAllowNoteDragging:(char)arg1 ;
-(void)redrawNotesAnimated:(char)arg1 ;
-(void)updatedSortState:(id)arg1 ;
-(void)cancelTraySearch;
-(char)moving;
-(void)setSelectedSubject:(id)arg1 ;
-(void)setICloudEmergencyState:(int)arg1 ;
-(void)setClouding:(char)arg1 ;
-(void)noteCell:(id)arg1 didEditOrCloud:(char)arg2 ;
-(char)displayingCreationDate;
-(char)displayingLastViewedDate;
-(char)noteCellCanShowMenu:(id)arg1 ;
-(void)noteCell:(id)arg1 requestsHandleThumbnailGestureRecognizer:(id)arg2 ;
-(UITableView *)notesTableView;
-(void)setNotesTableVerticalConstraints:(NSArray *)arg1 ;
-(NSArray *)notesTableVerticalConstraints;
-(void)_initTableHeaderForLibrary:(char)arg1 ;
-(float)extraTopContentInset;
-(float)keyboardBottomInset;
-(void)_chainInitializationOfCells;
-(void)ensureTableOffsetIsStillValid:(CGPoint)arg1 ;
-(char)useCompactLayout;
-(NINomadView *)headerNomadView;
-(_TtC10Notability28NoteIndexingStatusController *)indexingStatusController;
-(char)shouldShowEmptyStateCell;
-(NBNoteCell *)draggingCell;
-(void)setNoteStoreDidUpdateDuringNoteMove:(char)arg1 ;
-(void)setAllowsHeaderToBeShown:(char)arg1 ;
-(void)updateTableFooter;
-(void)updateHeaderTrayVisibility;
-(CGPoint)headerHiddenPoint;
-(void)_clampToBelowHeaderAnimated:(char)arg1 ;
-(id)generateContextForUpdatingView;
-(void)updatedSortStyle:(int)arg1 ;
-(void)setDisplayingCreationDate:(char)arg1 ;
-(void)setDisplayingLastViewedDate:(char)arg1 ;
-(char)isLibraryNotesView;
-(NIiCloudEmergencyView *)iCloudEmergencyView;
-(void)_endOpenFlash;
-(void)_setOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(NINotesViewTapComposeHelperView *)composeInstructionsCellView;
-(void)appDidEnterBackground:(id)arg1 ;
-(void)endCellsShowingSwipeToDeleteControlIfNeeded;
-(void)setNotes:(id)arg1 selected:(char)arg2 ;
-(id)emptyListCell;
-(NSMutableArray *)preinitializedNoteCells;
-(void)unlockNoteAlertWithDocument:(id)arg1 ;
-(void)deleteNoteAlertWithDocument:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)tryToDeleteNoteWithIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCell:(id)arg1 editing:(char)arg2 ;
-(void)setCell:(id)arg1 clouding:(char)arg2 ;
-(void)setCell:(id)arg1 selected:(char)arg2 ;
-(UIColor *)deleteActionImagePattern;
-(void)setDeleteActionImagePattern:(UIColor *)arg1 ;
-(char)allowsHeaderToBeShown;
-(int)scrollStateForOffset:(CGPoint)arg1 ;
-(void)setDeceleratedCallback:(id)arg1 ;
-(void)_clampNoteTableOffsetToEntirelyBelowOrAboveHeaderIfNeeded;
-(id)deceleratedCallback;
-(id)currentlyEditingIndexPath;
-(void)setKeyboardBottomInset:(float)arg1 ;
-(NSLayoutConstraint *)iCloudEmergencyViewVerticalHiddenConstraint;
-(void)setICloudEmergencyViewVerticalHiddenConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setICloudEmergencyView:(NIiCloudEmergencyView *)arg1 ;
-(void)_removeAndNilEmergencyHiddenConstraint;
-(void)setExtraTopContentInset:(float)arg1 ;
-(id)updateAndReturnContextForNextUpdate:(id)arg1 ;
-(void)redrawNotes;
-(CGPoint)getOffset;
-(void)clampView:(id)arg1 toWidth:(float)arg2 ;
-(char)isEditingOrCellsEditing;
-(void)animateInsertionOfNotes:(id)arg1 ;
-(void)scrollCurrentlyVisibleEditingIndexPathToCenterAnimated:(char)arg1 ;
-(void)disableTableViewScrolling;
-(void)enableTableViewScrolling;
-(void)dismissTrayPopovers;
-(CGRect)sourceRectForViewControllerPreviewingAtLocation:(CGPoint)arg1 ;
-(id)documentForViewControllerPreviewingAtLocation:(CGPoint)arg1 ;
-(void)scrollToDocument:(id)arg1 animated:(char)arg2 highlighted:(char)arg3 ;
-(void)setIndexingStatusController:(_TtC10Notability28NoteIndexingStatusController *)arg1 ;
-(char)shouldShowCreateNoteButton;
-(char)shouldShowImportButton;
-(char)allowNoteDragging;
-(char)noteStoreDidUpdateDuringNoteMove;
-(char)headerIsAttachedToTable;
-(void)setHeaderIsAttachedToTable:(char)arg1 ;
-(void)setComposeInstructionsCellView:(NINotesViewTapComposeHelperView *)arg1 ;
-(void)setIsLibraryNotesView:(char)arg1 ;
-(void)setUseCompactLayout:(char)arg1 ;
-(GLKVOToken *)sortKeyObservationToken;
-(void)setDraggingCell:(NBNoteCell *)arg1 ;
-(NoteCellThumbnailView *)draggingImageView;
-(void)setDraggingImageView:(NoteCellThumbnailView *)arg1 ;
-(void)noteMoveCompleted:(char)arg1 ;
-(id)dragItemsForIndexPath:(id)arg1 ;
-(id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4 ;
-(id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2 ;
-(void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2 ;
-(char)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2 ;
-(char)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)didMoveToSuperview;
-(void)setEditing:(char)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(UIView *)headerView;
-(float)headerHeight;
-(void)startObserving;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)_setOffset:(CGPoint)arg1 ;
-(_TtC10Notability20SearchViewController *)searchViewController;
-(void)setSearchViewController:(_TtC10Notability20SearchViewController *)arg1 ;
-(void)stopObserving;
@end

