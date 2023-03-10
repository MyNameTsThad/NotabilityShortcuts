/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSMetadataItem, NSMutableArray, NSArray, NSString, NSSet;

@interface GLiCloudRecoveryItem : NSObject <NSFilePresenter> {

	char _foundRemoteVersions;
	char _fetching;
	NSMetadataItem* _item;
	NSURL* _url;
	NSMutableArray* _versions;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) NSMetadataItem * item;                                      //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSMutableArray * versions;                                  //@synthesize versions=_versions - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                   //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char foundRemoteVersions;                                   //@synthesize foundRemoteVersions=_foundRemoteVersions - In the implementation block
@property (assign,nonatomic) char fetching;                                              //@synthesize fetching=_fetching - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (readonly) NSArray * sortedVersions; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(NSArray *)sortedVersions;
-(void)setFoundRemoteVersions:(char)arg1 ;
-(void)fetchVersions;
-(char)foundRemoteVersions;
-(NSMetadataItem *)item;
-(NSURL *)url;
-(void)setItem:(NSMetadataItem *)arg1 ;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(NSMutableArray *)versions;
-(void)setVersions:(NSMutableArray *)arg1 ;
-(char)fetching;
-(void)setFetching:(char)arg1 ;
@end

