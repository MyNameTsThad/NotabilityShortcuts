/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GLSearcherDelegate, GLSearcherDataSource, OS_dispatch_queue;
@class NSString, NSMutableArray, NSOperationQueue, _TtC6GLCore29ThrottledActionDispatchSource, NSObject;

@interface GLSearcher : NSObject {

	char _isSearching;
	char _isFinished;
	char _isCancelled;
	char _initialDelayPeriodPassed;
	NSString* _displayName;
	id<GLSearcherDelegate> _delegate;
	id<GLSearcherDataSource> _dataSource;
	NSString* _query;
	NSMutableArray* _matchedItemsMutable;
	NSMutableArray* _searchResultsMutable;
	NSOperationQueue* _searchOperationQueue;
	_TtC6GLCore29ThrottledActionDispatchSource* _throttledResultsAction;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _operationsCount;
	unsigned _completedOperationsCount;
	float _updatePeriod;
	unsigned long long _firstThrottledDispatchTime;

}

@property (retain) NSString * query;                                                                             //@synthesize query=_query - In the implementation block
@property (retain) NSString * displayName;                                                                       //@synthesize displayName=_displayName - In the implementation block
@property (assign) char isSearching;                                                                             //@synthesize isSearching=_isSearching - In the implementation block
@property (assign) char isFinished;                                                                              //@synthesize isFinished=_isFinished - In the implementation block
@property (assign) char isCancelled;                                                                             //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,retain) NSMutableArray * matchedItemsMutable;                                               //@synthesize matchedItemsMutable=_matchedItemsMutable - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchResultsMutable;                                              //@synthesize searchResultsMutable=_searchResultsMutable - In the implementation block
@property (nonatomic,retain) NSOperationQueue * searchOperationQueue;                                            //@synthesize searchOperationQueue=_searchOperationQueue - In the implementation block
@property (nonatomic,readonly) _TtC6GLCore29ThrottledActionDispatchSource * throttledResultsAction;              //@synthesize throttledResultsAction=_throttledResultsAction - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                         //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) unsigned operationsCount;                                                           //@synthesize operationsCount=_operationsCount - In the implementation block
@property (assign,nonatomic) unsigned completedOperationsCount;                                                  //@synthesize completedOperationsCount=_completedOperationsCount - In the implementation block
@property (assign,nonatomic) float updatePeriod;                                                                 //@synthesize updatePeriod=_updatePeriod - In the implementation block
@property (assign,nonatomic) unsigned long long firstThrottledDispatchTime;                                      //@synthesize firstThrottledDispatchTime=_firstThrottledDispatchTime - In the implementation block
@property (assign,nonatomic) char initialDelayPeriodPassed;                                                      //@synthesize initialDelayPeriodPassed=_initialDelayPeriodPassed - In the implementation block
@property (assign,nonatomic,__weak) id<GLSearcherDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<GLSearcherDataSource> dataSource;                                         //@synthesize dataSource=_dataSource - In the implementation block
+(id)searcherWithUpdatePeriod:(double)arg1 displayName:(id)arg2 ;
-(void)setMaxConcurrentSearches:(int)arg1 ;
-(void)startWithQuery:(id)arg1 ;
-(id)initWithUpdatePeriod:(double)arg1 displayName:(id)arg2 ;
-(void)_unsafe_dispatchSearcherResultsDidUpdate;
-(NSOperationQueue *)searchOperationQueue;
-(void)setIsSearching:(char)arg1 ;
-(_TtC6GLCore29ThrottledActionDispatchSource *)throttledResultsAction;
-(void)_unsafe_runSearchWithQuery:(id)arg1 ;
-(void)setOperationsCount:(unsigned)arg1 ;
-(void)setCompletedOperationsCount:(unsigned)arg1 ;
-(float)updatePeriod;
-(void)setFirstThrottledDispatchTime:(unsigned long long)arg1 ;
-(void)_unsafe_operationsDidComplete;
-(void)_unsafe_aggregateResultFromOperation:(id)arg1 ;
-(unsigned)operationsCount;
-(NSMutableArray *)searchResultsMutable;
-(NSMutableArray *)matchedItemsMutable;
-(unsigned)completedOperationsCount;
-(void)_unsafe_operationsDidUpdate;
-(char)initialDelayPeriodPassed;
-(unsigned long long)firstThrottledDispatchTime;
-(void)setInitialDelayPeriodPassed:(char)arg1 ;
-(void)_unsafe_dispatchSearchDidFinish;
-(void)setMatchedItemsMutable:(NSMutableArray *)arg1 ;
-(void)setSearchResultsMutable:(NSMutableArray *)arg1 ;
-(void)setSearchOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setUpdatePeriod:(float)arg1 ;
-(id)init;
-(void)cancel;
-(void)setDataSource:(id<GLSearcherDataSource>)arg1 ;
-(void)setDelegate:(id<GLSearcherDelegate>)arg1 ;
-(void)dealloc;
-(id<GLSearcherDataSource>)dataSource;
-(id<GLSearcherDelegate>)delegate;
-(NSString *)query;
-(char)isCancelled;
-(NSString *)displayName;
-(char)isFinished;
-(void)setQuery:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(char)isSearching;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setIsFinished:(char)arg1 ;
-(void)setIsCancelled:(char)arg1 ;
@end

