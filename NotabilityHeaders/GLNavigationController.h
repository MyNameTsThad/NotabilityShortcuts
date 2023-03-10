/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UITraitEnvironment.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UITraitCollection, UIViewController, NSOperationQueue, NSTimer, NILibraryViewController, NSString, _TtC10Notability20SearchViewController;

@interface GLNavigationController : UINavigationController <UITraitEnvironment, UINavigationControllerDelegate> {

	UIViewController* targetVC;
	char _librarySearchFieldShouldBecomeFirstResponder;
	char _verticalTransition;
	NSOperationQueue* _launchProtectionQueue;
	NSTimer* _viewAppearanceTimer;
	NILibraryViewController* _libraryViewController;
	int _universalSizeClass;
	NSString* _restorableSearchTerm;
	_TtC10Notability20SearchViewController* _searchViewController;
	NILibraryViewController* _previousLibraryViewController;

}

@property (nonatomic,retain) NSOperationQueue * launchProtectionQueue;                                   //@synthesize launchProtectionQueue=_launchProtectionQueue - In the implementation block
@property (nonatomic,retain) NSTimer * viewAppearanceTimer;                                              //@synthesize viewAppearanceTimer=_viewAppearanceTimer - In the implementation block
@property (nonatomic,retain) NILibraryViewController * libraryViewController;                            //@synthesize libraryViewController=_libraryViewController - In the implementation block
@property (assign,nonatomic) int universalSizeClass;                                                     //@synthesize universalSizeClass=_universalSizeClass - In the implementation block
@property (nonatomic,retain) NSString * restorableSearchTerm;                                            //@synthesize restorableSearchTerm=_restorableSearchTerm - In the implementation block
@property (assign,nonatomic) char librarySearchFieldShouldBecomeFirstResponder;                          //@synthesize librarySearchFieldShouldBecomeFirstResponder=_librarySearchFieldShouldBecomeFirstResponder - In the implementation block
@property (nonatomic,retain) _TtC10Notability20SearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (nonatomic,retain) NILibraryViewController * previousLibraryViewController;                    //@synthesize previousLibraryViewController=_previousLibraryViewController - In the implementation block
@property (assign,nonatomic) char verticalTransition;                                                    //@synthesize verticalTransition=_verticalTransition - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
+(void)displayLibraryAnimated:(char)arg1 ;
+(void)launchOperationQueueMayProceed;
+(char)shouldShowPromoView;
+(void)displayNoteDocument:(id)arg1 ;
+(void)displayNoteViewAnimated:(char)arg1 ;
+(void)displayMacIntroViewAndResumeLaunchProtectionQueueOnCompletion;
+(void)displayiOSOnboardingAndResumeLaunchProtectionQueueOnCompletion;
+(void)displayLibraryAnimated:(char)arg1 verticalTransition:(char)arg2 ;
+(void)showFullScreenActivityIndicatorWithName:(id)arg1 ;
+(void)hideFullScreenActivityIndicatorWithName:(id)arg1 ;
+(void)displayLibrary;
+(char)openAndDisplayNoteStoreDocument:(id)arg1 searchQuery:(id)arg2 completion:(/*^block*/id)arg3 ;
+(char)openAndDisplayNoteStoreLeftDocument:(id)arg1 leftSearchQuery:(id)arg2 rightDocument:(id)arg3 rightSearchQuery:(id)arg4 multiNoteViewState:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)createNewNote;
+(void)hideModalViewControllers;
+(void)loadViews;
+(id)libraryViewController;
+(id)noteViewController;
+(void)displayNoteViewAnimated:(char)arg1 verticalTransition:(char)arg2 ;
+(void)createNewPhotoNote;
+(char)shouldHidePromoViewWithSize:(CGSize)arg1 ;
+(char)redisplaySettingsIfPossible;
+(/*^block*/id)showFullScreenActivityIndicatorWithCloud:(char)arg1 ;
+(void)displayNoteView;
+(void)showFullScreenActivityIndicatorWithName:(id)arg1 showCloud:(char)arg2 ;
+(id)sharedNavController;
+(void)displayNoteLeftDocument:(id)arg1 leftViewState:(id)arg2 leftSearchQuery:(id)arg3 rightDocument:(id)arg4 rightViewState:(id)arg5 rightSearchQuery:(id)arg6 multiNoteViewState:(id)arg7 completion:(/*^block*/id)arg8 ;
+(void)displayNoteLeftDocument:(id)arg1 leftViewState:(id)arg2 leftSearchQuery:(id)arg3 rightDocument:(id)arg4 rightViewState:(id)arg5 rightSearchQuery:(id)arg6 multiNoteViewState:(id)arg7 ;
+(void)displayNoteDocument:(id)arg1 searchQuery:(id)arg2 viewState:(id)arg3 ;
+(void)createNewNoteWithPhoto:(char)arg1 ;
+(void)_openAndDisplayNoteStoreLeftDocument:(id)arg1 leftViewState:(id)arg2 leftSearchQuery:(id)arg3 rightDocument:(id)arg4 rightViewState:(id)arg5 rightSearchQuery:(id)arg6 multiNoteViewState:(id)arg7 completion:(/*^block*/id)arg8 ;
+(void)openNoteDocumentForEditing:(id)arg1 completion:(/*^block*/id)arg2 ;
+(char)presentingDocument:(id)arg1 ;
+(char)autosyncAllowedToStart;
+(void)addOperationToLaunchProtectionQueue:(/*^block*/id)arg1 ;
+(id)visibleNoteViewController;
+(id)currentlyVisibleFullScreenActivityIndicators;
+(void)hideAllFullScreenActivityIndicators;
+(void)adjustVisibleVCForiOS6ViewController;
+(id)visibleViewController;
-(void)setUniversalSizeClass:(int)arg1 ;
-(void)willEnterBackground:(id)arg1 ;
-(int)universalSizeClass;
-(NILibraryViewController *)libraryViewController;
-(id)noteViewController;
-(NSString *)restorableSearchTerm;
-(void)setRestorableSearchTerm:(NSString *)arg1 ;
-(void)setLibrarySearchFieldShouldBecomeFirstResponder:(char)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 verticalTransition:(char)arg3 ;
-(void)setVerticalTransition:(char)arg1 ;
-(id)popViewControllerAnimated:(char)arg1 verticalTransition:(char)arg2 ;
-(id)popToRootViewControllerAnimated:(char)arg1 verticalTransition:(char)arg2 ;
-(id)popToViewController:(id)arg1 animated:(char)arg2 verticalTransition:(char)arg3 ;
-(id)newLibraryViewController;
-(void)updateForUniversalSizeClassChange;
-(void)setPreviousLibraryViewController:(NILibraryViewController *)arg1 ;
-(NILibraryViewController *)previousLibraryViewController;
-(void)setLibraryViewController:(NILibraryViewController *)arg1 ;
-(char)librarySearchFieldShouldBecomeFirstResponder;
-(NSOperationQueue *)launchProtectionQueue;
-(char)verticalTransition;
-(void)setLaunchProtectionQueue:(NSOperationQueue *)arg1 ;
-(NSTimer *)viewAppearanceTimer;
-(void)setViewAppearanceTimer:(NSTimer *)arg1 ;
-(void)dealloc;
-(id)popViewControllerAnimated:(char)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)popToViewController:(id)arg1 animated:(char)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
-(_TtC10Notability20SearchViewController *)searchViewController;
-(void)setSearchViewController:(_TtC10Notability20SearchViewController *)arg1 ;
@end

