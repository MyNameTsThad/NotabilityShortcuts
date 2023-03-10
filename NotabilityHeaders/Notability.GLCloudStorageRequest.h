/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLCloudRequest.h>

@interface Notability.GLCloudStorageRequest : GLCloudRequest {

	 tasks;

}
+(Class)metadataClass;
+(void)loggedIn:(char)arg1 withRequest:(id)arg2 ;
+(void)setupService;
+(char)authorizeWithPresentationController:(id)arg1 window:(id)arg2 completion:(/*^block*/id)arg3 ;
+(int)pathStyle;
+(char)isLinked;
+(id)url;
+(id)displayName;
+(id)plistName;
+(id)username;
+(id)password;
-(void)requestFinished;
-(void)importFile;
-(void)exportFile;
-(void)listFiles;
-(void)moveFile;
-(void)makeDirectory;
-(id)init;
-(void)cancel;
@end

