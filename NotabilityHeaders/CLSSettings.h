/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface CLSSettings : NSObject {

	NSDictionary* _settingsDictionary;

}

@property (nonatomic,readonly) NSDictionary * settingsDictionary;                             //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * reportsEndpoint; 
@property (nonatomic,copy,readonly) NSString * betaEndpoint; 
@property (nonatomic,copy,readonly) NSNumber * betaSuspendDuration; 
@property (nonatomic,readonly) char shouldPackageReports; 
@property (nonatomic,readonly) char shouldSubmitReports; 
@property (nonatomic,readonly) char canProcessUrgentReports; 
@property (nonatomic,readonly) char errorReportingEnabled; 
@property (nonatomic,readonly) char customExceptionsEnabled; 
@property (nonatomic,readonly) char crashReportingEnabled; 
@property (nonatomic,readonly) char userPromptEnabled; 
@property (nonatomic,readonly) char firebaseCrashlyticsEnabled; 
@property (nonatomic,readonly) unsigned errorLogBufferSize; 
@property (nonatomic,readonly) unsigned logBufferSize; 
@property (nonatomic,readonly) unsigned maxCustomExceptions; 
@property (nonatomic,readonly) unsigned maxCustomKeys; 
@property (nonatomic,copy,readonly) NSString * interactivePromptTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptMessage; 
@property (nonatomic,copy,readonly) NSString * interactivePromptCancelTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptSendTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptAlwaysSendTitle; 
-(NSDictionary *)settingsDictionary;
-(id)promptValueForSettingsKey:(id)arg1 withLocalizedKey:(id)arg2 defaultValue:(id)arg3 ;
-(NSNumber *)betaSuspendDuration;
-(NSString *)betaEndpoint;
-(char)crashReportingEnabled;
-(char)errorReportingEnabled;
-(char)customExceptionsEnabled;
-(unsigned)maxCustomExceptions;
-(unsigned)errorLogBufferSize;
-(unsigned)logBufferSize;
-(unsigned)maxCustomKeys;
-(char)firebaseCrashlyticsEnabled;
-(char)canProcessUrgentReports;
-(char)userPromptEnabled;
-(char)shouldPackageReports;
-(NSString *)interactivePromptTitle;
-(NSString *)interactivePromptMessage;
-(NSString *)interactivePromptCancelTitle;
-(NSString *)interactivePromptSendTitle;
-(NSString *)interactivePromptAlwaysSendTitle;
-(NSString *)reportsEndpoint;
-(char)shouldSubmitReports;
-(id)initWithDictionary:(id)arg1 ;
-(id)defaultConfiguration;
-(id)configuration;
-(id)valueForConfigurationKey:(id)arg1 ;
@end

