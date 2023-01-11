/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSCrashReportingControllerDelegate <NSObject>
@required
-(char)reportingControllerMustInformDelegateOfReports:(id)arg1;
-(char)shouldInstallCrashCallback;
-(void)detectedCrash;
-(char)reportingControllerCanUseBackgroundSessions:(id)arg1;
-(void)reportingController:(id)arg1 didDetectReportForLastExecution:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)reportingController:(id)arg1 internalDidDetectReportForLastExecution:(id)arg2;
-(char)reportingController:(id)arg1 ensureDeliveryOfUnixSignal:(int)arg2;
-(id)APIKeyForCrashReportingController:(id)arg1;
-(id)installIDForCrashReportingController:(id)arg1;
-(char)isFirstInstallForCrashReportingController:(id)arg1;
-(id)settingsForCrashReportingController:(id)arg1;

@end
