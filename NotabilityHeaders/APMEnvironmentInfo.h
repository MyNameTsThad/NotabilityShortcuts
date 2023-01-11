/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface APMEnvironmentInfo : NSObject {

	NSString* _deviceModel;

}

@property (nonatomic,readonly) NSString * deviceModel; 
@property (nonatomic,readonly) NSString * deviceOSVersion; 
@property (nonatomic,readonly) NSString * userDefaultLanguage; 
@property (nonatomic,readonly) int timeZoneOffsetMinutes; 
+(id)sharedInstance;
-(NSString *)userDefaultLanguage;
-(int)timeZoneOffsetMinutes;
-(NSString *)deviceOSVersion;
-(NSString *)deviceModel;
@end

