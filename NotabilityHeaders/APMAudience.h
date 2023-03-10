/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class APMDatabase;

@interface APMAudience : NSObject {

	APMDatabase* _database;

}
+(char)isFilterResult:(id)arg1 trueForFilterID:(int)arg2 ;
+(id)updatedFilterResultWithFilterID:(int)arg1 audienceID:(int)arg2 currentFilterResult:(id)arg3 newEvaluationResult:(id)arg4 dynamicFilterTimestamps:(id)arg5 sequenceFilterTimestamps:(id)arg6 ;
+(char)isValidAudienceProto:(id)arg1 usedAudienceIDs:(id)arg2 error:(id*)arg3 ;
-(char)evaluateFiltersForEventName:(id)arg1 eventParameters:(id)arg2 eventAggregates:(id)arg3 eventTimestamp:(double)arg4 cachedSequenceEvaluationTimestamps:(id)arg5 ;
-(char)maybeDeleteStaleFilterResults:(id)arg1 ;
-(char)evaluateFiltersForUserProperty:(id)arg1 ;
-(char)evaluateFiltersForEvent:(id)arg1 eventAggregates:(id)arg2 cachedSequenceEvaluationTimestamps:(id)arg3 ;
-(char)updateAudiences:(id)arg1 ;
-(char)resultsForBundling:(id*)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
@end

