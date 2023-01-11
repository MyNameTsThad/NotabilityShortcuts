/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface Notability.AnalyticsUser : NSObject {

	 lastUpdate;
	 queue;
	 uuid;
	 blacklist.storage;
	 recordingProperties.storage;

}

@property (readonly,nonatomic) NSString * uuid; 
@property (readonly,nonatomic) NSString * autoSyncStatus; 
@property (readonly,nonatomic) NSString * iCloudStatus; 
@property (readonly,nonatomic) NSString * handwritingLanguage; 
@property (readonly,nonatomic) NSDictionary * userProperties; 
+(id)blacklistName;
+(id)incidentIdentifierKey;
+(id)keychainGroup;
+(id)uuidKey;
+(id)rangeFromValue:(int)arg1 ranges:(id)arg2 ;
+(id)rangeFromLargeValue:(int)arg1 ;
+(id)rangeFromSmallValue:(int)arg1 ;
+(id)rangeFromPercent:(double)arg1 ;
+(id)shared;
-(NSString *)autoSyncStatus;
-(NSString *)iCloudStatus;
-(NSString *)handwritingLanguage;
-(NSDictionary *)userProperties;
-(void)updateUserAnalytics;
-(id)init;
-(NSString *)uuid;
@end

