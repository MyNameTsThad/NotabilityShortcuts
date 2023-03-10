/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NIPalmRejectionPromptController : NSObject
+(char)shouldPresentControlCenterPromptWhenDetected;
+(void)presentControlCenterPromptFromViewController:(id)arg1 ;
+(char)shouldPresentMultitaskingGesturesPromptWhenDetected;
+(void)presentMultitaskingGesturesPromptFromViewController:(id)arg1 ;
+(void)neverShowControlCenterPromptAgainAction;
+(void)neverShowMultitaskingGesturesPromptAgainAction;
+(char)shouldNeverShowControlCenterPromptAgain;
+(char)shouldNeverShowMultitaskingGesturesPromptAgain;
+(void)setLastPresentedMultitaskingGesturesPromptDate:(id)arg1 ;
+(void)setLastPresentedControlCenterPromptDate:(id)arg1 ;
+(void)setNeedsShowPalmRejectionFeaturePromo:(char)arg1 ;
+(char)needsShowPalmRejectionFeaturePromo;
+(id)lastPresentedControlCenterPromptDate;
+(id)lastPresentedMultitaskingGesturesPromptDate;
+(void)presentFeaturePromoFromViewController:(id)arg1 ;
+(char)shouldPresentFeaturePromoUponNoteOpen;
+(void)disableShowFeaturePromoForiPadPro;
+(void)disableShowFeaturePromoForNewUsers;
@end

