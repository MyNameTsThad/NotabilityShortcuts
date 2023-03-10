/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability.CloudKeyValueObserver.h>
#import <Notability/NBNotesListCacheDataSource.h>

@protocol NBNotesListCacheDelegate;
@class NSMutableArray;

@interface NBNotesList : NSObject <Notability.CloudKeyValueObserver, NBNotesListCacheDataSource> {

	id<NBNotesListCacheDelegate> _cacheDelegate;
	NSMutableArray* _observers;

}

@property (retain) NSMutableArray * observers;                                               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) id<NBNotesListCacheDelegate> cacheDelegate;              //@synthesize cacheDelegate=_cacheDelegate - In the implementation block
-(id)keysForObserving;
-(void)didReceiveICloudUpdateForKey:(id)arg1 cloudValue:(id)arg2 reason:(id)arg3 ;
-(void)addNoteAtPackagePath:(id)arg1 ;
-(void)handleWillDeleteDocumentNotification:(id)arg1 ;
-(void)handleDidUpdateDocumentPackagePathNotification:(id)arg1 ;
-(char)shouldSyncWithCloud;
-(id<NBNotesListCacheDelegate>)cacheDelegate;
-(id)notesDict;
-(id)notesDictFromNoteAtPackagePath:(id)arg1 ;
-(id)mergedNotesDict:(id)arg1 withNotesDict:(id)arg2 ;
-(void)setNotesDict:(id)arg1 ;
-(id)validatedNotesDict:(id)arg1 ;
-(id)mergeValidNotesDict1:(id)arg1 validNotesDict2:(id)arg2 ;
-(id)notesDict:(id)arg1 withLimit:(unsigned)arg2 ;
-(void)removeNoteAtPackagePath:(id)arg1 ;
-(void)noteMovedFromPackagePath:(id)arg1 toPackagePath:(id)arg2 ;
-(id)notesDictWithLimit:(unsigned)arg1 ;
-(id)notePackagePaths;
-(id)notePackagePathsWithLimit:(unsigned)arg1 ;
-(void)setCacheDelegate:(id<NBNotesListCacheDelegate>)arg1 ;
-(id)init;
-(id)key;
-(void)dealloc;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(int)limit;
@end

