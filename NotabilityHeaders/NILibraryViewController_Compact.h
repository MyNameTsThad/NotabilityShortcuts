/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/NILibraryViewController.h>
#import <Notability/GLModalTrayGridViewDelegate.h>
#import <Notability/GLModalTrayViewDelegate.h>
#import <Notability/GLSlidingPanelViewControllerDelegate.h>
#import <Notability/GLTouchCatcherViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class GLIPhonePopoverView, GLModalTrayGridView, UIView, NBBarButtonItem, GLSlidingPanelViewController, UIImageView, GLKVOToken, GLTouchCatcherView, NSString;

@interface NILibraryViewController_Compact : NILibraryViewController <GLModalTrayGridViewDelegate, GLModalTrayViewDelegate, GLSlidingPanelViewControllerDelegate, GLTouchCatcherViewDelegate, UISearchBarDelegate> {

	GLIPhonePopoverView* _addSubjectPopoverView;
	GLModalTrayGridView* _importGridView;
	int _searchTransitionsInProgress;
	UIView* _snapshottedStatusBarView;
	NBBarButtonItem* _showSubjectsBarButtonItem;
	GLSlidingPanelViewController* _noteListSlidingPanelViewController;
	UIImageView* _shadowView;
	GLKVOToken* _rightLayoutGuideObservationToken;
	GLTouchCatcherView* _exitSearchTouchCatcher;
	UIView* _toolbarAlignmentProxyView;
	UIView* _subjectContainerView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int searchTransitionsInProgress;                                                  //@synthesize searchTransitionsInProgress=_searchTransitionsInProgress - In the implementation block
@property (nonatomic,retain) UIView * snapshottedStatusBarView;                                                //@synthesize snapshottedStatusBarView=_snapshottedStatusBarView - In the implementation block
@property (nonatomic,readonly) NBBarButtonItem * showSubjectsBarButtonItem;                                    //@synthesize showSubjectsBarButtonItem=_showSubjectsBarButtonItem - In the implementation block
@property (nonatomic,readonly) GLSlidingPanelViewController * noteListSlidingPanelViewController;              //@synthesize noteListSlidingPanelViewController=_noteListSlidingPanelViewController - In the implementation block
@property (nonatomic,readonly) UIImageView * shadowView;                                                       //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) GLKVOToken * rightLayoutGuideObservationToken;                                    //@synthesize rightLayoutGuideObservationToken=_rightLayoutGuideObservationToken - In the implementation block
@property (nonatomic,retain) GLTouchCatcherView * exitSearchTouchCatcher;                                      //@synthesize exitSearchTouchCatcher=_exitSearchTouchCatcher - In the implementation block
@property (nonatomic,retain) UIView * toolbarAlignmentProxyView;                                               //@synthesize toolbarAlignmentProxyView=_toolbarAlignmentProxyView - In the implementation block
@property (nonatomic,retain) UIView * subjectContainerView;                                                    //@synthesize subjectContainerView=_subjectContainerView - In the implementation block
@property (nonatomic,retain) GLIPhonePopoverView * addSubjectPopoverView;                                      //@synthesize addSubjectPopoverView=_addSubjectPopoverView - In the implementation block
@property (nonatomic,retain) GLModalTrayGridView * importGridView;                                             //@synthesize importGridView=_importGridView - In the implementation block
-(void)slidingPanelViewControllerDidMove:(id)arg1 ;
-(void)slidingPanelViewControllerDidEndOpening:(id)arg1 ;
-(void)slidingPanelViewControllerDidEndClosing:(id)arg1 ;
-(void)slidingPanelViewControllerWillBeginClosing:(id)arg1 ;
-(void)slidingPanelViewControllerWillEndOpening:(id)arg1 ;
-(char)slidingPanelViewControllerPanGestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchCatcher:(id)arg1 touchesEnded:(id)arg2 ;
-(void)touchCatcher:(id)arg1 touchesMoved:(id)arg2 ;
-(void)importAction;
-(char)searchBarIsFirstResponder;
-(void)dismissPopovers;
-(id)currentSearchTerm;
-(void)organizerTapped:(id)arg1 ;
-(void)configureConstraints;
-(GLTouchCatcherView *)exitSearchTouchCatcher;
-(char)notesView:(id)arg1 didSelectNote:(id)arg2 searchQuery:(id)arg3 ;
-(void)notesViewDidDrag:(id)arg1 ;
-(void)notesViewSortAction:(id)arg1 fromButton:(id)arg2 ;
-(void)notesView:(id)arg1 handleThumbnailMoveGesture:(id)arg2 draggingCell:(id)arg3 draggingThumbnail:(id)arg4 otherVisibleSelectedCells:(id)arg5 ;
-(void)willBeginDraggingSearchViewController:(id)arg1 ;
-(void)setExitSearchTouchCatcher:(GLTouchCatcherView *)arg1 ;
-(void)setSelectedSubject:(id)arg1 ;
-(char)shouldAllowComposeKeystrokeShortcut;
-(id)mainTopToolbarItems;
-(void)addSubjectAction;
-(void)showNewThemesBadge;
-(void)noteMoveCompleted:(char)arg1 ;
-(char)pointInSubjectFrame:(CGPoint)arg1 ;
-(void)modalTray:(id)arg1 tappedItemAtIndex:(int)arg2 ;
-(GLIPhonePopoverView *)addSubjectPopoverView;
-(void)setAddSubjectPopoverView:(GLIPhonePopoverView *)arg1 ;
-(GLModalTrayGridView *)importGridView;
-(void)setImportGridView:(GLModalTrayGridView *)arg1 ;
-(void)showSubjectView;
-(NBBarButtonItem *)showSubjectsBarButtonItem;
-(void)setSubjectContainerView:(UIView *)arg1 ;
-(GLSlidingPanelViewController *)noteListSlidingPanelViewController;
-(UIView *)subjectContainerView;
-(GLKVOToken *)rightLayoutGuideObservationToken;
-(void)setRightLayoutGuideObservationToken:(GLKVOToken *)arg1 ;
-(void)showSubjectViewWithRebuildStatusBarSnapshot:(char)arg1 ;
-(void)buildAndDisplayStatusBarSnapshot;
-(void)addSubjectVCRequestsAddSubject:(id)arg1 ;
-(void)addSubjectVCRequestsAddCategory:(id)arg1 ;
-(void)hideSubjectView;
-(void)setSnapshottedStatusBarView:(UIView *)arg1 ;
-(int)searchTransitionsInProgress;
-(void)slidingPanelViewControllerWillEndClosing:(id)arg1 ;
-(void)setSearchTransitionsInProgress:(int)arg1 ;
-(UIView *)snapshottedStatusBarView;
-(UIView *)toolbarAlignmentProxyView;
-(void)setToolbarAlignmentProxyView:(UIView *)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(int)positionForBar:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(UIImageView *)shadowView;
-(void)setSearching:(char)arg1 ;
@end

