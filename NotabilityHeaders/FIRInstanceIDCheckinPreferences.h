/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface FIRInstanceIDCheckinPreferences : NSObject {

	char _hasPreCachedAuthCredentials;
	NSString* _deviceID;
	NSString* _secretToken;
	NSString* _deviceDataVersion;
	NSString* _digest;
	NSString* _versionInfo;
	NSMutableDictionary* _gServicesData;
	long long _lastCheckinTimestampMillis;

}

@property (nonatomic,copy) NSString * deviceID;                                 //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) NSString * secretToken;                              //@synthesize secretToken=_secretToken - In the implementation block
@property (nonatomic,copy) NSString * digest;                                   //@synthesize digest=_digest - In the implementation block
@property (nonatomic,copy) NSString * versionInfo;                              //@synthesize versionInfo=_versionInfo - In the implementation block
@property (nonatomic,copy) NSString * deviceDataVersion;                        //@synthesize deviceDataVersion=_deviceDataVersion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * gServicesData;               //@synthesize gServicesData=_gServicesData - In the implementation block
@property (assign,nonatomic) long long lastCheckinTimestampMillis;              //@synthesize lastCheckinTimestampMillis=_lastCheckinTimestampMillis - In the implementation block
@property (assign,nonatomic) char hasPreCachedAuthCredentials;                  //@synthesize hasPreCachedAuthCredentials=_hasPreCachedAuthCredentials - In the implementation block
+(id)checkinDeviceIDFromKeychainContent:(id)arg1 ;
+(id)checkinSecretFromKeychainContent:(id)arg1 ;
+(id)checkinKeychainContent:(id)arg1 forIndex:(int)arg2 ;
+(id)preferencesFromKeychainContents:(id)arg1 ;
-(NSString *)deviceDataVersion;
-(NSMutableDictionary *)gServicesData;
-(char)hasCheckinInfo;
-(char)hasValidCheckinInfo;
-(void)setHasPreCachedAuthCredentials:(char)arg1 ;
-(void)setSecretToken:(NSString *)arg1 ;
-(void)setDeviceDataVersion:(NSString *)arg1 ;
-(void)setVersionInfo:(NSString *)arg1 ;
-(void)setGServicesData:(NSMutableDictionary *)arg1 ;
-(void)setLastCheckinTimestampMillis:(long long)arg1 ;
-(id)initWithDeviceID:(id)arg1 secretToken:(id)arg2 ;
-(void)updateWithCheckinPlistContents:(id)arg1 ;
-(long long)lastCheckinTimestampMillis;
-(id)checkinPlistContents;
-(id)checkinKeychainContent;
-(char)hasPreCachedAuthCredentials;
-(NSString *)secretToken;
-(NSString *)versionInfo;
-(void)reset;
-(void)setDigest:(NSString *)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(NSString *)digest;
@end

