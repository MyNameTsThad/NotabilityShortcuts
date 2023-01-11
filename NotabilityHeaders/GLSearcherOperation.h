/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:07 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol GLSearcherDataSource;
@class GLSearchResult, GLSearcher;

@interface GLSearcherOperation : NSOperation {

	id _query;
	id _item;
	id<GLSearcherDataSource> _dataSource;
	GLSearchResult* _result;
	GLSearcher* _searcher;
	/*^block*/id _aggregator;

}

@property (assign,nonatomic,__weak) id item;                                          //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) id query;                                                //@synthesize query=_query - In the implementation block
@property (assign,nonatomic,__weak) id<GLSearcherDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) GLSearcher * searcher;                            //@synthesize searcher=_searcher - In the implementation block
@property (nonatomic,retain) GLSearchResult * result;                                 //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id aggregator;                                             //@synthesize aggregator=_aggregator - In the implementation block
+(id)searcherOperationWithItem:(id)arg1 query:(id)arg2 dataSource:(id)arg3 searcher:(id)arg4 resultAggregation:(/*^block*/id)arg5 ;
-(void)setSearcher:(GLSearcher *)arg1 ;
-(GLSearcher *)searcher;
-(void)setDataSource:(id<GLSearcherDataSource>)arg1 ;
-(id<GLSearcherDataSource>)dataSource;
-(id)item;
-(id)query;
-(void)setItem:(id)arg1 ;
-(void)main;
-(GLSearchResult *)result;
-(void)setQuery:(id)arg1 ;
-(void)setResult:(GLSearchResult *)arg1 ;
-(void)setAggregator:(id)arg1 ;
-(id)aggregator;
@end

