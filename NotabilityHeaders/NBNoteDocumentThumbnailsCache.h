/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NBNoteDocumentThumbnailCacheDataSource;
#import <Notability/Notability-Structs.h>
@class NSDictionary;

@interface NBNoteDocumentThumbnailsCache : NSObject {

	id<NBNoteDocumentThumbnailCacheDataSource> _dataSource;
	NSDictionary* _backingThumbnailsDictionary;

}

@property (nonatomic,retain) NSDictionary * backingThumbnailsDictionary;                                //@synthesize backingThumbnailsDictionary=_backingThumbnailsDictionary - In the implementation block
@property (assign,nonatomic,__weak) id<NBNoteDocumentThumbnailCacheDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)createThumbnailsCacheFrom:(id)arg1 ;
+(id)loadThumbnailsFromFileWrapper:(id)arg1 ;
+(id)createAndPersistIfNeededThumbnailsCacheWithDataSource:(id)arg1 ;
+(id)desiredAbsoluteScales;
+(id)expectedThumbnailMetadatasLegacy:(char)arg1 ;
+(id)filenameFromAbsoluteScale:(float)arg1 legacy:(char)arg2 ;
+(int)expectedNumberOfThumbnailsLegacy:(char)arg1 ;
-(char)writeThumbnailsToFileWrapper:(id)arg1 ;
-(CGSize)rankOneThumbnailPointSize;
-(id)thumbnailWithRank:(float)arg1 scale:(float)arg2 ;
-(char)populateFromDataSourcePreferDiskButPersistIfNeeded;
-(char)generateAndPopulateFromSource:(id)arg1 ;
-(char)populateFromFileWrapper:(id)arg1 ;
-(id)populateThumbnailsWithImagePopulator:(/*^block*/id)arg1 ;
-(void)setBackingThumbnailsDictionary:(NSDictionary *)arg1 ;
-(id)populateThumbnailsWithDataPopulator:(/*^block*/id)arg1 ;
-(char)populateFromDiskSource;
-(void)asynchronouslyWriteThumbnailsToDisk;
-(NSDictionary *)backingThumbnailsDictionary;
-(id)_dataFromThumbnail:(id)arg1 legacy:(char)arg2 ;
-(void)enumerateThumbnailsLegacy:(char)arg1 accessBlock:(/*^block*/id)arg2 ;
-(void)_synchronouslyUncoordinatedWriteThumbnailsToURL:(id)arg1 ;
-(id)_populateThumbnailsLegacy:(char)arg1 populator:(/*^block*/id)arg2 ;
-(id)_imageFromData:(id)arg1 scale:(float)arg2 legacy:(char)arg3 ;
-(void)setDataSource:(id<NBNoteDocumentThumbnailCacheDataSource>)arg1 ;
-(id<NBNoteDocumentThumbnailCacheDataSource>)dataSource;
@end

