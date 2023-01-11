/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class APMSqliteStore, APMPersistedConfig;

@interface APMDatabase : NSObject {

	APMSqliteStore* _sqliteStore;
	APMPersistedConfig* _persistedConfig;

}
-(id)mainEventAndChildCountPairWithEventID:(long long)arg1 error:(id*)arg2 ;
-(char)updateComplexEventForAudienceEvaluationWithEventID:(long long)arg1 childEventCount:(long long)arg2 mainEvent:(id)arg3 error:(id*)arg4 ;
-(char)deleteComplexEventForAudienceEvaluationWithEventID:(long long)arg1 error:(id*)arg2 ;
-(id)eventAggregatesWithName:(id)arg1 error:(id*)arg2 ;
-(id)eventFiltersForEventName:(id)arg1 error:(id*)arg2 ;
-(id)filterResultForAudienceID:(int)arg1 error:(id*)arg2 ;
-(char)updateFilterResults:(id)arg1 error:(id*)arg2 ;
-(id)propertyFiltersForPropertyName:(id)arg1 error:(id*)arg2 ;
-(char)deleteAllEventFilters:(id*)arg1 ;
-(char)deleteAllPropertyFilters:(id*)arg1 ;
-(char)updateEventFilters:(id)arg1 error:(id*)arg2 ;
-(char)updatePropertyFilters:(id)arg1 error:(id*)arg2 ;
-(id)userAttributesIncludingInternal:(char)arg1 error:(id*)arg2 ;
-(id)allFilterResults:(id*)arg1 ;
-(id)allAudienceIDs:(id*)arg1 ;
-(char)deleteFilterResults:(id)arg1 error:(id*)arg2 ;
-(char)initializeDatabaseResourcesWithContext:(id)arg1 databasePath:(id)arg2 ;
-(char)upsertDataType:(id)arg1 inTableWithName:(id)arg2 columnName:(id)arg3 columnValue:(id)arg4 tableLimit:(int)arg5 error:(id*)arg6 createDictionaryBlock:(/*^block*/id)arg7 ;
-(id)dataTypesFromTableWithName:(id)arg1 columnName:(id)arg2 columnValue:(id)arg3 error:(id*)arg4 createDataTypeBlock:(/*^block*/id)arg5 ;
-(char)updateDataType:(id)arg1 inTableWithName:(id)arg2 columnName:(id)arg3 columnValue:(id)arg4 error:(id*)arg5 createDictionaryBlock:(/*^block*/id)arg6 ;
-(char)insertDataType:(id)arg1 inTableWithName:(id)arg2 error:(id*)arg3 createDictionaryBlock:(/*^block*/id)arg4 ;
-(char)deleteUnusedRawEventsMetadata:(id*)arg1 ;
-(char)deleteStaleRawEventsDataOlderThanMaxAge:(double)arg1 error:(id*)arg2 ;
-(char)deleteStaleBundlesOlderThanMaxAge:(double)arg1 error:(id*)arg2 ;
-(id)allDataTypesFromTableWithName:(id)arg1 tableLimit:(int)arg2 error:(id*)arg3 createDataTypeBlock:(/*^block*/id)arg4 ;
-(id)conditionalUserPropertiesWithCondition:(id)arg1 parameterValues:(id)arg2 error:(id*)arg3 ;
-(char)ensureAllTables;
-(char)initializeAppMetadata;
-(id)queryBundlesWithRowIDs:(id)arg1 error:(id*)arg2 ;
-(id)allLifetimeValueUserAttributes:(id*)arg1 ;
-(char)deleteEventFilters:(id)arg1 error:(id*)arg2 ;
-(char)deletePropertyFilters:(id)arg1 error:(id*)arg2 ;
-(id)timedOutConditionalUserPropertiesWithError:(id*)arg1 ;
-(id)expiredConditionalUserPropertiesWithError:(id*)arg1 ;
-(id)triggeredConditionalUserPropertiesWithEventName:(id)arg1 error:(id*)arg2 ;
-(id)initWithDatabaseName:(id)arg1 persistedConfig:(id)arg2 ;
-(id)maybeDeleteStaleData:(id*)arg1 ;
-(char)deleteUserAttributeWithName:(id)arg1 error:(id*)arg2 ;
-(id)containsUserAttributeWithName:(id)arg1 error:(id*)arg2 ;
-(id)queryLatestRawEventTime:(id*)arg1 ;
-(id)queryLatestBundleTime:(id*)arg1 ;
-(id)containsRealtimeBundlesWithError:(id*)arg1 ;
-(id)containsRealtimeRawEventsWithError:(id*)arg1 ;
-(id)queryBundlesWithCountLimit:(long long)arg1 sizeLimit:(long long)arg2 error:(id*)arg3 ;
-(char)incrementRetryCounterForBundlesWithIDs:(id)arg1 error:(id*)arg2 ;
-(id)dailyCounts:(id*)arg1 ;
-(char)updateDailyCounts:(id)arg1 error:(id*)arg2 ;
-(id)publicEventCount:(id*)arg1 ;
-(char)updateEventAggregates:(id)arg1 error:(id*)arg2 ;
-(char)insertIfNotExistsRawEventMetadata:(id)arg1 error:(id*)arg2 ;
-(id)deleteRawEventsOverAbsoluteLimit:(id*)arg1 ;
-(char)insertRawEvent:(id)arg1 metadataFingerprint:(long long)arg2 isRealtime:(char)arg3 error:(id*)arg4 ;
-(char)updateUserAttribute:(id)arg1 error:(id*)arg2 ;
-(id)userAttributeWithName:(id)arg1 error:(id*)arg2 ;
-(id)nextMetadataFingerprintToProcess:(id*)arg1 ;
-(id)rawEventDataFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)rawEventsWithMetadataFingerprint:(long long)arg1 error:(id*)arg2 eventFilter:(/*^block*/id)arg3 ;
-(id)queryRawEventsMetadataWithFingerprint:(long long)arg1 error:(id*)arg2 ;
-(id)queryAppMetadata:(id*)arg1 ;
-(char)updateAppMetadata:(id)arg1 error:(id*)arg2 ;
-(char)insertBundle:(id)arg1 isRealtime:(char)arg2 error:(id*)arg3 ;
-(id)isQueuedBundleTableEmpty:(id*)arg1 ;
-(id)isRawEventsTableEmpty:(id*)arg1 ;
-(char)deleteBundlesWithRowIDs:(id)arg1 error:(id*)arg2 ;
-(char)updateRemoteConfigSuccessfulTimestamp:(double)arg1 error:(id*)arg2 ;
-(id)insertIfNotDuplicatePurchaseFingerprint:(id)arg1 error:(id*)arg2 ;
-(id)allEventAggregates:(id*)arg1 ;
-(id)publicUserAttributeCount:(id*)arg1 ;
-(id)userAttributeCountForOrigin:(id)arg1 error:(id*)arg2 ;
-(char)deleteRawEventsWithMaxRowID:(long long)arg1 error:(id*)arg2 ;
-(id)containsRawEventWithMetadataFingerprint:(long long)arg1 error:(id*)arg2 ;
-(char)deleteRawEventMetadataWithMetadataFingerprint:(long long)arg1 error:(id*)arg2 ;
-(char)updateRemoteConfig:(id)arg1 error:(id*)arg2 ;
-(id)lastRemoteConfigUpdateTimestamp:(id*)arg1 ;
-(id)queryMeasurementConfigWithError:(id*)arg1 ;
-(id)conditionalUserPropertiesWithPrefix:(id)arg1 filterByOrigin:(id)arg2 error:(id*)arg3 ;
-(id)conditionalUserPropertyWithName:(id)arg1 error:(id*)arg2 ;
-(char)updateConditionalUserProperty:(id)arg1 error:(id*)arg2 ;
-(char)deleteConditionalUserPropertyWithName:(id)arg1 error:(id*)arg2 ;
-(void)reset;
-(char)performTransaction:(/*^block*/id)arg1 ;
@end

