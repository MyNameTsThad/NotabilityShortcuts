/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLDocument.h>
#import <libobjc.A.dylib/NSUserActivityDelegate.h>

@class NBNoteDocument, NSUserActivity, NSString;

@interface NBNoteDocumentPresenter : GLDocument <NSUserActivityDelegate> {

	NBNoteDocument* _proxy;
	NSUserActivity* _gl_userActivity;

}

@property (readonly) NSUserActivity * userActivity; 
@property (retain) NSUserActivity * gl_userActivity;                     //@synthesize gl_userActivity=_gl_userActivity - In the implementation block
@property (assign,nonatomic,__weak) NBNoteDocument * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)saveToURL:(id)arg1 saveOperation:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)superOpenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)superCloseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)superSaveToURL:(id)arg1 saveOperation:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)documentStateChanged:(id)arg1 ;
-(void)teardownUserActivityForClosing;
-(void)setupUserActivityForOpening;
-(void)superAccommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSUserActivity *)gl_userActivity;
-(void)setGl_userActivity:(NSUserActivity *)arg1 ;
-(id)_superActivity;
-(id)requiredUserInfoKeysForUserActivity;
-(void)proxyUpdateUserActivityContentAttributeSet:(id)arg1 ;
-(void)_updateActivityWithContentsOfSelf:(id)arg1 ;
-(void)dealloc;
-(void)updateUserActivityState:(id)arg1 ;
-(NSUserActivity *)userActivity;
-(void)userActivityWillSave:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(NBNoteDocument *)proxy;
-(void)handleError:(id)arg1 userInteractionPermitted:(char)arg2 ;
-(void)updateChangeCount:(int)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)contentsForType:(id)arg1 error:(id*)arg2 ;
-(char)hasUnsavedChanges;
-(void)revertToContentsOfURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2 ;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2 ;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prepareForSave;
-(void)setProxy:(NBNoteDocument *)arg1 ;
@end

