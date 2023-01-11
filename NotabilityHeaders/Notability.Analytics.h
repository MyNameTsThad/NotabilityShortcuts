/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Notability.Analytics : NSObject {

	 queue;
	 configured;

}

@property (assign,nonatomic) char configured; 
+(void)trackEvent:(id)arg1 boolParameter:(char)arg2 ;
+(void)trackEvent:(id)arg1 params:(id)arg2 ;
+(void)trackEvent:(id)arg1 stringParameter:(id)arg2 ;
+(void)trackError:(id)arg1 ;
+(void)trackError:(id)arg1 description:(id)arg2 ;
+(void)trackError:(id)arg1 error:(id)arg2 ;
+(void)trackEvent:(id)arg1 value:(float)arg2 ;
+(void)trackEvent:(id)arg1 value:(float)arg2 stringParameter:(id)arg3 ;
+(void)trackICloudErrorWithName:(id)arg1 description:(id)arg2 ;
+(void)trackEvent:(id)arg1 value:(float)arg2 floatParameter:(float)arg3 ;
+(void)trackEvent:(id)arg1 intParameter:(int)arg2 ;
+(void)trackEvent:(id)arg1 floatParameter:(float)arg2 ;
+(void)trackEvent:(id)arg1 value:(float)arg2 intParameter:(int)arg3 ;
+(void)trackEvent:(id)arg1 value:(float)arg2 boolParameter:(char)arg3 ;
+(void)trackFileConversionErrorWithName:(id)arg1 description:(id)arg2 ;
+(void)configure;
+(id)shared;
+(void)trackEvent:(id)arg1 ;
-(void)setUserProperties:(id)arg1 ;
-(char)assertAnalyticsWithName:(id)arg1 ;
-(char)assertAnalyticsWithValue:(id)arg1 ;
-(id)init;
-(void)configure;
-(char)configured;
-(void)setConfigured:(char)arg1 ;
@end
