/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Notability.HandwritingLanguageSettings : NSObject {

	 installationStatus;
	 notificationBlocks;
	 lock;
	 internetConnection;
	 assetsBaseUrl;
	 assetsCurrentVersionUrl;

}

@property (assign,nonatomic) int recognitionLanguage; 
+(id)languageRawStringRepresentation:(int)arg1 ;
+(void)languageForRawStringRepresentation:(id)arg1 language:(int*)arg2 success:(BOOL*)arg3 ;
+(id)shared;
-(id)urlOfLanguagePackForRegion:(id)arg1 ;
-(char)downloadLanguageIfNeededSynchronously:(int)arg1 ;
-(void)onStartup;
-(id)urlOfLanguagePackForLanguage:(int)arg1 ;
-(void)removeInstalledLanguages;
-(void)downloadLanguageIfNeeded:(int)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRecognitionLanguage:(int)arg1 ;
-(id)init;
-(int)recognitionLanguage;
@end

