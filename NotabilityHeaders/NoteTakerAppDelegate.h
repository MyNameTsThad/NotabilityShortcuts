/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, GLNavigationController, LoadingViewController, NSOperationQueue, NBNoteStore, NSMutableSet, NIShareExtensionHandler, AppActivityView, NSString;

@interface NoteTakerAppDelegate : NSObject <UIApplicationDelegate> {

	UIWindow* window;
	GLNavigationController* navController;
	LoadingViewController* viewController;
	char _completedLoad;
	NSOperationQueue* _finishedLoadingQueue;
	NBNoteStore* _store;
	NSMutableSet* _pendingExternalImports;
	NIShareExtensionHandler* _shareExtensionHandler;
	AppActivityView* _activityView;

}

@property (nonatomic,retain) NSOperationQueue * finishedLoadingQueue;                      //@synthesize finishedLoadingQueue=_finishedLoadingQueue - In the implementation block
@property (assign) char completedLoad;                                                     //@synthesize completedLoad=_completedLoad - In the implementation block
@property (nonatomic,retain) NBNoteStore * store;                                          //@synthesize store=_store - In the implementation block
@property (retain) NSMutableSet * pendingExternalImports;                                  //@synthesize pendingExternalImports=_pendingExternalImports - In the implementation block
@property (nonatomic,retain) NIShareExtensionHandler * shareExtensionHandler;              //@synthesize shareExtensionHandler=_shareExtensionHandler - In the implementation block
@property (nonatomic,retain) AppActivityView * activityView;                               //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,readonly) GLNavigationController * navController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(NSMutableSet *)pendingExternalImports;
-(char)handleNotabilityURL:(id)arg1 ;
-(NSOperationQueue *)finishedLoadingQueue;
-(char)completedLoad;
-(char)hasPendingExternalImportAtURL:(id)arg1 ;
-(void)_enqueueImportOperationOfFileAtURL:(id)arg1 isExternal:(char)arg2 ;
-(void)setPendingExternalImports:(NSMutableSet *)arg1 ;
-(void)setCompletedLoad:(char)arg1 ;
-(void)setShareExtensionHandler:(NIShareExtensionHandler *)arg1 ;
-(NIShareExtensionHandler *)shareExtensionHandler;
-(void)registerDefaultPreferences;
-(void)upgradeUserDefaultsIfNeeded;
-(void)addPendingExternalImportAtURL:(id)arg1 ;
-(void)removePendingExternalImportAtURLOnMainThreadIfNeeded:(id)arg1 ;
-(void)setFinishedLoadingQueue:(NSOperationQueue *)arg1 ;
-(UIWindow *)window;
-(char)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(char)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(GLNavigationController *)navController;
-(AppActivityView *)activityView;
-(void)setActivityView:(AppActivityView *)arg1 ;
-(void)setStore:(NBNoteStore *)arg1 ;
-(NBNoteStore *)store;
@end
