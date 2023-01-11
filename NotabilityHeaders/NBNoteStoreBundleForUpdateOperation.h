/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NBNoteStoreUpdateBundle, NBNoteStore;

@interface NBNoteStoreBundleForUpdateOperation : NSOperation {

	/*^block*/id _successBlock;
	NBNoteStoreUpdateBundle* _updateBundle;
	int _sortStyle;
	NBNoteStore* _store;

}

@property (nonatomic,retain) NBNoteStoreUpdateBundle * updateBundle;              //@synthesize updateBundle=_updateBundle - In the implementation block
@property (assign,nonatomic) int sortStyle;                                       //@synthesize sortStyle=_sortStyle - In the implementation block
@property (nonatomic,retain) NBNoteStore * store;                                 //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id successBlock;                                       //@synthesize successBlock=_successBlock - In the implementation block
+(id)newOperationWithStore:(id)arg1 sortStyle:(int)arg2 ;
-(void)setSuccessBlock:(id)arg1 ;
-(int)sortStyle;
-(void)setSortStyle:(int)arg1 ;
-(id)successBlock;
-(void)setUpdateBundle:(NBNoteStoreUpdateBundle *)arg1 ;
-(NBNoteStoreUpdateBundle *)updateBundle;
-(void)cancel;
-(void)main;
-(void)setStore:(NBNoteStore *)arg1 ;
-(NBNoteStore *)store;
@end
