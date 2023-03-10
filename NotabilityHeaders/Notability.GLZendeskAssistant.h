/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>

@class GLSupportAssistant, NSString;

@interface Notability.GLZendeskAssistant : NSObject <UINavigationControllerDelegate> {

	 supportInfo;

}

@property (readonly,nonatomic) GLSupportAssistant * supportInfo; 
@property (readonly,nonatomic) NSString * bestLanguage; 
+(id)shared;
-(void)presentHelpDesk:(id)arg1 ;
-(void)presentArticle:(id)arg1 articleId:(id)arg2 ;
-(NSString *)bestLanguage;
-(id)conversationsBarButtonImage;
-(id)init;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)configure;
-(GLSupportAssistant *)supportInfo;
@end

