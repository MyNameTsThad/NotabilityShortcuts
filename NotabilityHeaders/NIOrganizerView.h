/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDragDelegate.h>
#import <UIKit/UITableViewDropDelegate.h>
#import <Notability/GLTouchCatcherViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Notability/SubjectCellDelegate.h>
#import <Notability/CategoryCellDelegate.h>

@protocol SubjectListViewDelegate, LibraryControllerDelegate;
@class NSIndexPath, NISubjectCell, GLScrollViewSmoothTouchTracker, GLUpdatingViewContext, NIOrganizerTitleEditView, UITableView, UIImageView, NSLayoutConstraint, CAGradientLayer, UIView, NSMutableArray, NBOrganizersBundle, NBSubject, NBOrganizer, NSString, UIColor;

@interface NIOrganizerView : UIView <UITableViewDragDelegate, UITableViewDropDelegate, GLTouchCatcherViewDelegate, UITableViewDataSource, UITableViewDelegate, SubjectCellDelegate, CategoryCellDelegate> {

	NSIndexPath* currentlyTextEditingIndexPath;
	char editing;
	char clouding;
	NISubjectCell* bulgedCell;
	char visible;
	GLScrollViewSmoothTouchTracker* smoothTouchTracker;
	char isEditing;
	char _creatingNewSubject;
	char _allowSwipeToDelete;
	char _needsFullReload;
	id<SubjectListViewDelegate> _delegate;
	id<LibraryControllerDelegate> _controllerDelegate;
	GLUpdatingViewContext* _updatingViewContext;
	float _rightLayoutGuideInset;
	NIOrganizerTitleEditView* _addOrganizerTitleEntryView;
	UITableView* _subjectTableView;
	UIImageView* _personalityBackgroundView;
	NSLayoutConstraint* _personalityBackgroundViewHeight;
	CAGradientLayer* _personalityBackgroundGradient;
	UIView* _keyboardLayoutGuide;
	NSLayoutConstraint* _keyboardLayoutVerticalConstraint;
	NSLayoutConstraint* _subjectListBottomSpaceConstraint;
	NSMutableArray* _preinitializedSubjectCells;
	NSMutableArray* _preinitializedDividerCells;
	NBOrganizersBundle* _organizersBundle;
	NBSubject* _selectedSubject;
	NBSubject* _subjectBeingCreated;
	NBOrganizer* _parentOfSubjectBeingCreated;
	UIEdgeInsets _contentInsets;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float rightLayoutGuideInset;                                          //@synthesize rightLayoutGuideInset=_rightLayoutGuideInset - In the implementation block
@property (nonatomic,retain) NIOrganizerTitleEditView * addOrganizerTitleEntryView;                //@synthesize addOrganizerTitleEntryView=_addOrganizerTitleEntryView - In the implementation block
@property (nonatomic,retain) UITableView * subjectTableView;                                       //@synthesize subjectTableView=_subjectTableView - In the implementation block
@property (nonatomic,retain) UIImageView * personalityBackgroundView;                              //@synthesize personalityBackgroundView=_personalityBackgroundView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * personalityBackgroundViewHeight;                 //@synthesize personalityBackgroundViewHeight=_personalityBackgroundViewHeight - In the implementation block
@property (nonatomic,retain) CAGradientLayer * personalityBackgroundGradient;                      //@synthesize personalityBackgroundGradient=_personalityBackgroundGradient - In the implementation block
@property (nonatomic,retain) UIView * keyboardLayoutGuide;                                         //@synthesize keyboardLayoutGuide=_keyboardLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * keyboardLayoutVerticalConstraint;                //@synthesize keyboardLayoutVerticalConstraint=_keyboardLayoutVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subjectListBottomSpaceConstraint;                //@synthesize subjectListBottomSpaceConstraint=_subjectListBottomSpaceConstraint - In the implementation block
@property (nonatomic,readonly) NSMutableArray * preinitializedSubjectCells;                        //@synthesize preinitializedSubjectCells=_preinitializedSubjectCells - In the implementation block
@property (nonatomic,readonly) NSMutableArray * preinitializedDividerCells;                        //@synthesize preinitializedDividerCells=_preinitializedDividerCells - In the implementation block
@property (nonatomic,retain) NBOrganizersBundle * organizersBundle;                                //@synthesize organizersBundle=_organizersBundle - In the implementation block
@property (nonatomic,retain) NBSubject * selectedSubject;                                          //@synthesize selectedSubject=_selectedSubject - In the implementation block
@property (nonatomic,retain) NBSubject * subjectBeingCreated;                                      //@synthesize subjectBeingCreated=_subjectBeingCreated - In the implementation block
@property (nonatomic,retain) NBOrganizer * parentOfSubjectBeingCreated;                            //@synthesize parentOfSubjectBeingCreated=_parentOfSubjectBeingCreated - In the implementation block
@property (assign,nonatomic) char needsFullReload;                                                 //@synthesize needsFullReload=_needsFullReload - In the implementation block
@property (assign,nonatomic,__weak) id<SubjectListViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<LibraryControllerDelegate> controllerDelegate;              //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (assign,nonatomic) char visible; 
@property (nonatomic,readonly) char isEditing; 
@property (nonatomic,__weak,readonly) UIColor * selectedSubjectColor; 
@property (assign,nonatomic) char creatingNewSubject;                                              //@synthesize creatingNewSubject=_creatingNewSubject - In the implementation block
@property (nonatomic,retain) GLUpdatingViewContext * updatingViewContext;                          //@synthesize updatingViewContext=_updatingViewContext - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                           //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) char allowSwipeToDelete;                                              //@synthesize allowSwipeToDelete=_allowSwipeToDelete - In the implementation block
-(char)tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(id)visibleOrganizerForIndexPath:(id)arg1 ;
-(NBSubject *)selectedSubject;
-(NBOrganizersBundle *)organizersBundle;
-(void)setOrganizersBundle:(NBOrganizersBundle *)arg1 ;
-(void)setSelectedSubject:(NBSubject *)arg1 ;
-(void)setClouding:(char)arg1 ;
-(char)subjectCellRequestsDeleteSelf:(id)arg1 ;
-(void)_chainInitializationOfCells;
-(void)setUpdatingViewContext:(GLUpdatingViewContext *)arg1 ;
-(GLUpdatingViewContext *)updatingViewContext;
-(CGPoint)getOffset;
-(void)setCreatingNewSubject:(char)arg1 ;
-(void)setPersonalityBackgroundViewHeight:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)personalityBackgroundView;
-(CAGradientLayer *)personalityBackgroundGradient;
-(void)setPersonalityBackgroundGradient:(CAGradientLayer *)arg1 ;
-(NSLayoutConstraint *)subjectListBottomSpaceConstraint;
-(NSLayoutConstraint *)personalityBackgroundViewHeight;
-(UITableView *)subjectTableView;
-(void)scrollToIndexPath:(id)arg1 animated:(char)arg2 ;
-(void)enterAddNewSubjectViewForSubject:(id)arg1 atIndexPath:(id)arg2 ;
-(id)categoryOfSubject:(id)arg1 ;
-(void)setAddOrganizerTitleEntryView:(NIOrganizerTitleEditView *)arg1 ;
-(NIOrganizerTitleEditView *)addOrganizerTitleEntryView;
-(NBSubject *)subjectBeingCreated;
-(int)indexOfNewSubject:(id)arg1 ;
-(void)updateViewState;
-(void)setSubjectBeingCreated:(NBSubject *)arg1 ;
-(void)setParentOfSubjectBeingCreated:(NBOrganizer *)arg1 ;
-(char)needsFullReload;
-(void)setNeedsFullReload:(char)arg1 ;
-(char)creatingNewSubject;
-(NBOrganizer *)parentOfSubjectBeingCreated;
-(int)indexOfNewSubjectFromBundle:(id)arg1 selectedSubject:(id)arg2 ;
-(void)updateIndentationForCell:(id)arg1 inVisibleOrganizers:(id)arg2 ;
-(void)handleKeyboardNotifications:(id)arg1 ;
-(id)indexPathOfOrganizer:(id)arg1 ;
-(id)selectedSubjectCell;
-(void)supressDrawingOfSelectedSubject;
-(void)enableDrawingOfSelectedSubject;
-(void)unlockSubjectAlertWithOrganizer:(id)arg1 ;
-(void)deleteOrganizerAlert:(id)arg1 ;
-(NSMutableArray *)preinitializedDividerCells;
-(NSMutableArray *)preinitializedSubjectCells;
-(void)updateIndentationOfCellsAtIndexPaths:(id)arg1 forVisibleOrganizers:(id)arg2 ;
-(char)isCategoryForIndexPath:(id)arg1 ;
-(char)allowSwipeToDelete;
-(float)rightLayoutGuideInset;
-(void)setRightLayoutGuideInset:(float)arg1 ;
-(id)indexPathOfOrganizer:(id)arg1 fromOrganizerList:(id)arg2 ;
-(id)organizerNamed:(id)arg1 ;
-(NSLayoutConstraint *)keyboardLayoutVerticalConstraint;
-(id)subjectForIndexPath:(id)arg1 ;
-(void)scrollBulgePointIntoView:(CGPoint)arg1 ;
-(void)unbulgeView:(id)arg1 ;
-(void)bulgeView:(id)arg1 ;
-(void)enterAddNewSubjectModeForCategory;
-(void)subjectCellBeginsTextFieldEditing:(id)arg1 ;
-(void)subjectCellEndsTextFieldEditing:(id)arg1 ;
-(void)subjectCell:(id)arg1 requestsSetSelectedSubject:(id)arg2 ;
-(void)categoryCellTapped:(id)arg1 ;
-(void)categoryCellBeginsTextFieldEditing:(id)arg1 ;
-(void)categoryCellEndsTextFieldEditing:(id)arg1 ;
-(char)categoryCellRequestsDeleteSelf:(id)arg1 ;
-(void)reloadSelectedSubjectCell;
-(char)deleteSelectedSubject;
-(UIColor *)selectedSubjectColor;
-(int)noteCountForSubjectAtDisplayedIndexPath:(id)arg1 ;
-(id)subjectsForCategoryAtDisplayedIndexPath:(id)arg1 ;
-(id)indexPathsForSubjectsInCategory:(id)arg1 fromOrganizerList:(id)arg2 ;
-(id)indexPathsToReloadForOpenCategory:(id)arg1 ;
-(id)indexPathsToReloadForCloseCategory:(id)arg1 withPreviousMax:(int)arg2 ;
-(char)openStateForIndexPath:(id)arg1 ;
-(char)isLockedForIndexPath:(id)arg1 ;
-(id)organizerForIndexPath:(id)arg1 ;
-(CGRect)subjectTableViewFrameForSubject:(id)arg1 ;
-(id)subjectForTouchPoint:(CGPoint)arg1 ;
-(void)scrollDraggingNoteGestureRecognizerIntoViewWhileActive:(id)arg1 ;
-(void)scrollDraggingNoteTouchIntoViewWhileActive:(id)arg1 ;
-(void)bulgeCellAtPoint:(CGPoint)arg1 ;
-(CGRect)stopBulging;
-(void)presentNewSubjectTitleEntryView;
-(void)presentNewCategoryTitleEntryViewAtBottomOfList;
-(void)setAllowSwipeToDelete:(char)arg1 ;
-(void)setSubjectTableView:(UITableView *)arg1 ;
-(void)setPersonalityBackgroundView:(UIImageView *)arg1 ;
-(UIView *)keyboardLayoutGuide;
-(void)setKeyboardLayoutGuide:(UIView *)arg1 ;
-(void)setKeyboardLayoutVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSubjectListBottomSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(id)dragItemsForIndexPath:(id)arg1 ;
-(id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4 ;
-(id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2 ;
-(void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2 ;
-(char)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2 ;
-(char)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(char)tableView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(void)tableView:(id)arg1 dropSessionDidEnter:(id)arg2 ;
-(id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 dropSessionDidExit:(id)arg2 ;
-(void)tableView:(id)arg1 dropSessionDidEnd:(id)arg2 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SubjectListViewDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<SubjectListViewDelegate>)delegate;
-(void)setScrollEnabled:(char)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(char)visible;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(char)isEditing;
-(void)setEditing:(char)arg1 ;
-(void)setVisible:(char)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(id<LibraryControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<LibraryControllerDelegate>)arg1 ;
-(void)startObserving;
-(void)scrollToBottom;
-(void)stopObserving;
@end

