/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/CLSURLSessionDataTask.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSOutputStream, NSURL, NSString;

@interface CLSURLSessionDownloadTask : CLSURLSessionDataTask <NSStreamDelegate> {

	/*^block*/id _downloadCompletionHandler;
	NSOutputStream* _outputStream;
	NSURL* _targetURL;

}

@property (nonatomic,copy) id downloadCompletionHandler;              //@synthesize downloadCompletionHandler=_downloadCompletionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)writeDataToStream:(id)arg1 ;
-(void)completeForError;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)complete;
-(void)cleanup;
-(id)downloadCompletionHandler;
-(void)setDownloadCompletionHandler:(id)arg1 ;
-(id)temporaryFileURL;
@end
