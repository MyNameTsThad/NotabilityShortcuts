/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, APMUserDefaults, NSObject, NSNumber;

@interface APMPersistedConfig : NSObject {

	NSString* _name;
	APMUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (assign,nonatomic) double lastDeleteStaleBundlesTimestamp; 
@property (nonatomic,copy) NSNumber * searchAdCampaignValue; 
@property (assign,nonatomic) double lastSearchAdLookUpTimestamp; 
@property (assign,nonatomic) long long searchAdRetryCount; 
@property (nonatomic,copy) NSString * appInstanceID; 
@property (nonatomic,copy) NSString * appIDFromGMP; 
@property (nonatomic,copy) NSString * appIDFromAdMob; 
@property (nonatomic,copy) NSString * hashedIDFA; 
@property (nonatomic,copy) NSString * configServerLastModifiedString; 
@property (nonatomic,readonly) long long measurementEnabledState; 
@property (assign,nonatomic) double lastBackoffTimestamp; 
@property (assign,nonatomic) double lastSuccessfulUploadTimestamp; 
@property (assign,nonatomic) double lastFailedUploadTimestamp; 
@property (nonatomic,copy) NSString * appVersion; 
@property (setter=setOSVersion:,nonatomic,copy) NSString * osVersion; 
@property (nonatomic,readonly) double midnightOffset; 
@property (assign,nonatomic) double lastMonitorDataSampledTimestamp; 
@property (assign,nonatomic) long long firstOpenTimestampMilliseconds; 
@property (nonatomic,copy) NSNumber * deferredAnalyticsCollection; 
@property (nonatomic,copy) NSNumber * loadTimestampValue; 
@property (assign,nonatomic) char startNewSession; 
@property (assign,nonatomic) double lastSessionActivityClockTime; 
@property (assign,nonatomic) double engagementTimeBeforeSessionStart; 
@property (assign,nonatomic) long long sessionNumber; 
+(id)sharedInstance;
-(NSString *)appInstanceID;
-(NSString *)appIDFromAdMob;
-(NSString *)appIDFromGMP;
-(void)setAppIDFromGMP:(NSString *)arg1 ;
-(void)setAppIDFromAdMob:(NSString *)arg1 ;
-(double)lastDeleteStaleBundlesTimestamp;
-(void)setLastDeleteStaleBundlesTimestamp:(double)arg1 ;
-(long long)firstOpenTimestampMilliseconds;
-(NSNumber *)loadTimestampValue;
-(void)setLoadTimestampValue:(NSNumber *)arg1 ;
-(long long)measurementEnabledState;
-(NSNumber *)deferredAnalyticsCollection;
-(void)setDeferredAnalyticsCollection:(NSNumber *)arg1 ;
-(void)setFirstOpenTimestampMilliseconds:(long long)arg1 ;
-(double)lastBackoffTimestamp;
-(double)lastSuccessfulUploadTimestamp;
-(double)lastFailedUploadTimestamp;
-(void)setLastFailedUploadTimestamp:(double)arg1 ;
-(void)setLastBackoffTimestamp:(double)arg1 ;
-(void)setLastSuccessfulUploadTimestamp:(double)arg1 ;
-(double)midnightOffset;
-(double)lastMonitorDataSampledTimestamp;
-(void)setLastMonitorDataSampledTimestamp:(double)arg1 ;
-(NSString *)configServerLastModifiedString;
-(void)setConfigServerLastModifiedString:(NSString *)arg1 ;
-(void)synchronizeToDisk;
-(long long)int64ForKey:(id)arg1 userDefault:(id)arg2 ;
-(void)scheduleSynchronizeToDisk;
-(void)setAppInstanceID:(NSString *)arg1 ;
-(NSString *)hashedIDFA;
-(void)setHashedIDFA:(NSString *)arg1 ;
-(void)setStartNewSession:(char)arg1 ;
-(void)setEngagementTimeBeforeSessionStart:(double)arg1 ;
-(double)lastSessionActivityClockTime;
-(void)setLastSessionActivityClockTime:(double)arg1 ;
-(double)engagementTimeBeforeSessionStart;
-(long long)searchAdRetryCount;
-(NSNumber *)searchAdCampaignValue;
-(void)setLastSearchAdLookUpTimestamp:(double)arg1 ;
-(double)lastSearchAdLookUpTimestamp;
-(void)setSearchAdCampaignValue:(NSNumber *)arg1 ;
-(void)setSearchAdRetryCount:(long long)arg1 ;
-(id)initWithSuiteName:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)clearValues;
-(void)setOSVersion:(id)arg1 ;
-(NSString *)osVersion;
-(char)startNewSession;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(long long)sessionNumber;
-(void)setSessionNumber:(long long)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(long long)int64ForKey:(id)arg1 ;
-(void)setInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appVersion;
@end

