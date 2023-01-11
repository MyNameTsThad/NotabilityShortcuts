/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, GLGoogleDriveBridgeImpl, GLGoogleDriveModel;

@interface GLGoogleDriveBridge : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	GLGoogleDriveBridgeImpl* _impl;

}

@property (retain) GLGoogleDriveBridgeImpl * impl;                          //@synthesize impl=_impl - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) GLGoogleDriveModel * model; 
@property (readonly) char hadRateLimitError; 
+(id)sharedInstance;
-(void)setImpl:(GLGoogleDriveBridgeImpl *)arg1 ;
-(char)hadRateLimitError;
-(char)isAuthorizationError:(id)arg1 ;
-(void)dispatchOnCallbackQueue:(id)arg1 error:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)aboutGet:(/*^block*/id)arg1 ;
-(id)filesGetMetaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)filesList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)downloadFile:(id)arg1 convertToPDF:(char)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)moveFileAtPath:(id)arg1 toPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)createDirectoryAtPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)updateOrCreateFileAtPath:(id)arg1 uploadPath:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)filesUpdateMetaData:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)deletePath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(GLGoogleDriveModel *)model;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(GLGoogleDriveBridgeImpl *)impl;
-(void)cancelAll;
@end
