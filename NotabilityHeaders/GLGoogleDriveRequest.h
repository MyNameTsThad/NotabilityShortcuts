/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLCloudRequest.h>

@class NSArray, GLGoogleDriveBridge;

@interface GLGoogleDriveRequest : GLCloudRequest {

	NSArray* _tasks;

}

@property (readonly) GLGoogleDriveBridge * bridge; 
@property (retain) NSArray * tasks;                             //@synthesize tasks=_tasks - In the implementation block
+(Class)metadataClass;
+(char)fileImportable:(id)arg1 ;
+(void)loggedIn:(char)arg1 withRequest:(id)arg2 ;
+(void)setupService;
+(char)authorizeWithPresentationController:(id)arg1 window:(id)arg2 completion:(/*^block*/id)arg3 ;
+(int)pathStyle;
+(void)mdmDidChange;
+(void)setIsUpgrading:(char)arg1 ;
+(id)pendingTasks;
+(void)setPendingTasks:(id)arg1 ;
+(id)exportPathObserver;
+(void)setExportPathObserver:(id)arg1 ;
+(char)isUpgrading;
+(char)isLinked;
+(id)url;
+(id)displayName;
+(id)plistName;
+(id)username;
+(id)password;
-(id)cloudPath;
-(void)requestCompletedByAnotherRequest:(id)arg1 ;
-(void)requestFinished;
-(void)requestFailedWithError:(id)arg1 ;
-(void)requestMadeProgress:(float)arg1 ;
-(void)importFile;
-(void)exportFile;
-(void)listFiles;
-(void)moveFile;
-(void)makeDirectory;
-(void)executeTask:(/*^block*/id)arg1 ;
-(void)cancelGoogleTasks;
-(id)cloudFileMetadata;
-(void)deleteFile;
-(void)getFileMetadata;
-(id)init;
-(void)cancel;
-(GLGoogleDriveBridge *)bridge;
-(NSArray *)tasks;
-(void)setTasks:(NSArray *)arg1 ;
@end
