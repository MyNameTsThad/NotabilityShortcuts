/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZendeskSDK/FABKit.h>

@class ANSAnswersController, NSString;

@interface Answers : NSObject <FABKit> {

	ANSAnswersController* _answersController;

}

@property (nonatomic,retain) ANSAnswersController * answersController;              //@synthesize answersController=_answersController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startWithBetaToken:(id)arg1 ;
+(id)kitDisplayVersion;
+(void)logPreviousSessionCrashedOnDate:(id)arg1 ;
+(id)kitBuildVersion;
+(void)initializeIfNeeded;
+(void)printMethodUnavailableWithSelector:(id)arg1 ;
+(void)logInviteWithMethod:(id)arg1 customAttributes:(id)arg2 ;
+(void)logSignUpWithMethod:(id)arg1 success:(id)arg2 customAttributes:(id)arg3 ;
+(void)logLoginWithMethod:(id)arg1 success:(id)arg2 customAttributes:(id)arg3 ;
+(void)logShareWithMethod:(id)arg1 contentName:(id)arg2 contentType:(id)arg3 contentId:(id)arg4 customAttributes:(id)arg5 ;
+(void)logPurchaseWithPrice:(id)arg1 currency:(id)arg2 success:(id)arg3 itemName:(id)arg4 itemType:(id)arg5 itemId:(id)arg6 customAttributes:(id)arg7 ;
+(void)logLevelStart:(id)arg1 customAttributes:(id)arg2 ;
+(void)logLevelEnd:(id)arg1 score:(id)arg2 success:(id)arg3 customAttributes:(id)arg4 ;
+(void)logAddToCartWithPrice:(id)arg1 currency:(id)arg2 itemName:(id)arg3 itemType:(id)arg4 itemId:(id)arg5 customAttributes:(id)arg6 ;
+(void)logStartCheckoutWithPrice:(id)arg1 currency:(id)arg2 itemCount:(id)arg3 customAttributes:(id)arg4 ;
+(void)logRating:(id)arg1 contentName:(id)arg2 contentType:(id)arg3 contentId:(id)arg4 customAttributes:(id)arg5 ;
+(void)logContentViewWithName:(id)arg1 contentType:(id)arg2 contentId:(id)arg3 customAttributes:(id)arg4 ;
+(void)logSearchWithQuery:(id)arg1 customAttributes:(id)arg2 ;
+(void)logCustomEventWithName:(id)arg1 customAttributes:(id)arg2 ;
+(id)sharedInstance;
+(id)bundleIdentifier;
-(void)startWithBetaToken:(id)arg1 ;
-(ANSAnswersController *)answersController;
-(void)configureLogging;
-(void)setAnswersController:(ANSAnswersController *)arg1 ;
@end

