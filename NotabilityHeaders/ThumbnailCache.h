/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ThumbnailCacheDataSource, ThumbnailCacheOperationsManager;
#import <Notability/Notability-Structs.h>
@class NSMutableDictionary;

@interface ThumbnailCache : NSObject {

	char discardsPriorContentsOnRefetch;
	NSMutableDictionary* cache;
	NSMutableDictionary* users;
	id<ThumbnailCacheDataSource> dataSource;
	NSMutableDictionary* pagePriorities;
	float _thumbnailScale;
	id<ThumbnailCacheOperationsManager> _operationsManager;
	CGSize _thumbnailSize;

}

@property (readonly) unsigned thumbnailCount; 
@property (assign) CGSize thumbnailSize;                                               //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign,nonatomic) float thumbnailScale; 
@property (__weak) id<ThumbnailCacheDataSource><NSObject> dataSource; 
@property (__weak) id<ThumbnailCacheOperationsManager> operationsManager;              //@synthesize operationsManager=_operationsManager - In the implementation block
@property (assign) char discardsPriorContentsOnRefetch; 
+(int)queuePriorityForCacheEntryUsagePriority:(int)arg1 ;
+(int)qualityOfServiceForCacheEntryUsagePriority:(int)arg1 ;
-(id)thumbForPage:(int)arg1 ;
-(void)pagePrioritiesDidChangeForUser:(int)arg1 ;
-(void)unregisterUserWithIdentifier:(int)arg1 ;
-(void)registerUserWithIdentifier:(int)arg1 delegate:(id)arg2 ;
-(void)movePage:(int)arg1 toIndex:(int)arg2 ;
-(void)insertPage:(int)arg1 ;
-(void)deletePage:(int)arg1 ;
-(void)setAllThumbsNeedRefetch;
-(void)setThumbNeedsRefetch:(int)arg1 ;
-(id)thumbForPage:(int)arg1 waitUntilCompleted:(char)arg2 ;
-(void)evaluateAndSetPriorityForPage:(int)arg1 allowFetch:(char)arg2 ;
-(int)thumbnailPagePriorityForUser:(int)arg1 page:(int)arg2 ;
-(id<ThumbnailCacheOperationsManager>)operationsManager;
-(void)fetchForEntry:(id)arg1 pageNumber:(int)arg2 ;
-(void)checkForChangesBetween:(id)arg1 and:(id)arg2 withDictionary:(id)arg3 ;
-(void)refetch:(id)arg1 ;
-(unsigned)thumbnailCount;
-(id)cacheEntryForPage:(int)arg1 ;
-(char)discardsPriorContentsOnRefetch;
-(void)setDiscardsPriorContentsOnRefetch:(char)arg1 ;
-(void)setOperationsManager:(id<ThumbnailCacheOperationsManager>)arg1 ;
-(id)init;
-(void)setDataSource:(id<ThumbnailCacheDataSource><NSObject>)arg1 ;
-(void)dealloc;
-(id<ThumbnailCacheDataSource><NSObject>)dataSource;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)flushCache;
-(float)thumbnailScale;
-(void)setThumbnailScale:(float)arg1 ;
@end

