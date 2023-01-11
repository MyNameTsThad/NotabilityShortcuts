/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface GLDropboxOAuth1Migrator : NSObject {

	char _isMigrating;
	NSDictionary* _oauth1Data;

}

@property (readonly) NSString * uid; 
@property (readonly) NSString * oauth1Key; 
@property (readonly) NSString * oauth1KeySecret; 
@property (nonatomic,retain) NSDictionary * oauth1Data;              //@synthesize oauth1Data=_oauth1Data - In the implementation block
@property (assign,nonatomic) char isMigrating;                       //@synthesize isMigrating=_isMigrating - In the implementation block
+(id)sharedInstance;
-(void)migrate:(id)arg1 appSecret:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)oauth1Data;
-(void)setIsMigrating:(char)arg1 ;
-(void)setupClientWithTransport:(id)arg1 appKey:(id)arg2 ;
-(NSString *)oauth1Key;
-(NSString *)oauth1KeySecret;
-(void)setOauth1Data:(NSDictionary *)arg1 ;
-(NSString *)uid;
-(char)needsMigration;
-(char)isMigrating;
@end

