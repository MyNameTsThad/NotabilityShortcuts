/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/FIRInstanceIDKeyPairStoreDelegate.h>

@class NSString, NSData, FIRInstanceIDTokenManager, FIRInstanceIDKeyPairStore;

@interface FIRInstanceID : NSObject <FIRInstanceIDKeyPairStoreDelegate> {

	char _isFetchingDefaultToken;
	char _isDefaultTokenFetchScheduled;
	NSString* _fcmSenderID;
	NSString* _firebaseAppID;
	NSData* _apnsTokenData;
	int _apnsTokenType;
	NSString* _APNSTupleString;
	NSString* _defaultFCMToken;
	FIRInstanceIDTokenManager* _tokenManager;
	FIRInstanceIDKeyPairStore* _keyPairStore;
	int _retryCountForDefaultToken;
	int _retryCountForCheckinRefresh;

}

@property (nonatomic,copy) NSString * fcmSenderID;                                  //@synthesize fcmSenderID=_fcmSenderID - In the implementation block
@property (nonatomic,copy) NSString * firebaseAppID;                                //@synthesize firebaseAppID=_firebaseAppID - In the implementation block
@property (nonatomic,retain) NSData * apnsTokenData;                                //@synthesize apnsTokenData=_apnsTokenData - In the implementation block
@property (assign,nonatomic) int apnsTokenType;                                     //@synthesize apnsTokenType=_apnsTokenType - In the implementation block
@property (nonatomic,copy) NSString * APNSTupleString;                              //@synthesize APNSTupleString=_APNSTupleString - In the implementation block
@property (nonatomic,copy) NSString * defaultFCMToken;                              //@synthesize defaultFCMToken=_defaultFCMToken - In the implementation block
@property (nonatomic,retain) FIRInstanceIDTokenManager * tokenManager;              //@synthesize tokenManager=_tokenManager - In the implementation block
@property (nonatomic,retain) FIRInstanceIDKeyPairStore * keyPairStore;              //@synthesize keyPairStore=_keyPairStore - In the implementation block
@property (assign) char isFetchingDefaultToken;                                     //@synthesize isFetchingDefaultToken=_isFetchingDefaultToken - In the implementation block
@property (assign) char isDefaultTokenFetchScheduled;                               //@synthesize isDefaultTokenFetchScheduled=_isDefaultTokenFetchScheduled - In the implementation block
@property (assign,nonatomic) int retryCountForDefaultToken;                         //@synthesize retryCountForDefaultToken=_retryCountForDefaultToken - In the implementation block
@property (assign,nonatomic) int retryCountForCheckinRefresh;                       //@synthesize retryCountForCheckinRefresh=_retryCountForCheckinRefresh - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)didReceiveConfigureSDKNotification:(id)arg1 ;
+(void)exitWithReason:(id)arg1 forFirebaseApp:(id)arg2 ;
+(id)configureErrorWithReason:(id)arg1 ;
+(long long)maxRetryCountForDefaultToken;
+(long long)maxRetryIntervalForDefaultTokenInSeconds;
+(long long)minIntervalForDefaultTokenRetry;
+(void)load;
+(id)instanceID;
-(id)appInstanceID:(id*)arg1 ;
-(id)initPrivately;
-(FIRInstanceIDTokenManager *)tokenManager;
-(NSString *)fcmSenderID;
-(id)cachedTokenIfAvailable;
-(void)fetchDefaultToken;
-(int)retryCountForDefaultToken;
-(NSString *)defaultFCMToken;
-(void)setDefaultFCMToken:(NSString *)arg1 ;
-(void)defaultTokenWithHandler:(/*^block*/id)arg1 ;
-(void)getIDWithHandler:(/*^block*/id)arg1 ;
-(char)isSandboxApp;
-(FIRInstanceIDKeyPairStore *)keyPairStore;
-(NSString *)firebaseAppID;
-(void)asyncLoadKeyPairWithHandler:(/*^block*/id)arg1 ;
-(void)fetchCheckinInfoWithHandler:(/*^block*/id)arg1 ;
-(void)deleteIdentity:(id*)arg1 ;
-(char)isFCMAutoInitEnabled;
-(void)configureInstanceIDWithOptions:(id)arg1 app:(id)arg2 ;
-(void)setFcmSenderID:(NSString *)arg1 ;
-(void)setFirebaseAppID:(NSString *)arg1 ;
-(void)didCompleteConfigure;
-(void)setupTokenManager;
-(void)setupKeyPairManager;
-(void)setupNotificationListeners;
-(void)setTokenManager:(FIRInstanceIDTokenManager *)arg1 ;
-(void)setKeyPairStore:(FIRInstanceIDKeyPairStore *)arg1 ;
-(void)notifyIdentityReset;
-(void)notifyAPNSTokenIsSet:(id)arg1 ;
-(char)isFetchingDefaultToken;
-(char)isDefaultTokenFetchScheduled;
-(NSData *)apnsTokenData;
-(int)apnsTokenType;
-(void)setIsFetchingDefaultToken:(char)arg1 ;
-(void)setRetryCountForDefaultToken:(int)arg1 ;
-(int)retryIntervalToFetchDefaultToken;
-(void)setIsDefaultTokenFetchScheduled:(char)arg1 ;
-(NSString *)APNSTupleString;
-(void)tokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 options:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setApnsTokenType:(int)arg1 ;
-(void)setApnsTokenData:(NSData *)arg1 ;
-(void)setAPNSTupleString:(NSString *)arg1 ;
-(char)isProductionApp;
-(void)logAPNSConfigurationError:(id)arg1 ;
-(void)keyPairStoreDidDeleteKeyPair:(id)arg1 ;
-(void)instanceIDWithHandler:(/*^block*/id)arg1 ;
-(void)deleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)deleteIDWithHandler:(/*^block*/id)arg1 ;
-(int)retryCountForCheckinRefresh;
-(void)setRetryCountForCheckinRefresh:(int)arg1 ;
-(id)cachedCheckinPreferences;
-(void)dealloc;
-(void)start;
-(id)token;
-(void)stopAllRequests;
@end

