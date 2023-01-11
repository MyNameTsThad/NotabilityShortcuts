/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GTLRServiceTicket, GTMSessionFetcher, NSString, NSURLSessionTask, NSURLConnection;

@interface GLGoogleDriveTask : NSObject {

	char _cancelled;
	char _executing;
	char _finished;
	GTLRServiceTicket* _ticket;
	GTMSessionFetcher* _fetcher;
	NSString* _identifier;
	int _concurrencyKind;
	int _decayLevel;
	float _decayStep;
	NSURLSessionTask* _downloadTask;
	NSURLConnection* _downloadConnection;
	NSString* _downloadFilePath;
	/*^block*/id _downloadProgress;
	/*^block*/id _downloadCompletion;
	/*^block*/id _executeBlock;
	/*^block*/id _completionBlock;
	long long _downloadContentLength;
	long long _downloadBytesWritten;

}

@property (retain) GTLRServiceTicket * ticket;                        //@synthesize ticket=_ticket - In the implementation block
@property (retain) GTMSessionFetcher * fetcher;                       //@synthesize fetcher=_fetcher - In the implementation block
@property (retain) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (readonly) char cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
@property (assign) char executing;                                    //@synthesize executing=_executing - In the implementation block
@property (assign) char finished;                                     //@synthesize finished=_finished - In the implementation block
@property (readonly) char concurrent; 
@property (assign) int concurrencyKind;                               //@synthesize concurrencyKind=_concurrencyKind - In the implementation block
@property (assign) int decayLevel;                                    //@synthesize decayLevel=_decayLevel - In the implementation block
@property (assign) float decayStep;                                   //@synthesize decayStep=_decayStep - In the implementation block
@property (retain) NSURLSessionTask * downloadTask;                   //@synthesize downloadTask=_downloadTask - In the implementation block
@property (retain) NSURLConnection * downloadConnection;              //@synthesize downloadConnection=_downloadConnection - In the implementation block
@property (retain) NSString * downloadFilePath;                       //@synthesize downloadFilePath=_downloadFilePath - In the implementation block
@property (assign) long long downloadContentLength;                   //@synthesize downloadContentLength=_downloadContentLength - In the implementation block
@property (assign) long long downloadBytesWritten;                    //@synthesize downloadBytesWritten=_downloadBytesWritten - In the implementation block
@property (copy) id downloadProgress;                                 //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (copy) id downloadCompletion;                               //@synthesize downloadCompletion=_downloadCompletion - In the implementation block
@property (copy) id executeBlock;                                     //@synthesize executeBlock=_executeBlock - In the implementation block
@property (copy) id completionBlock;                                  //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)newWithCompletionCallback:(/*^block*/id)arg1 ;
-(void)setDecayStep:(float)arg1 ;
-(int)concurrencyKind;
-(GTMSessionFetcher *)fetcher;
-(void)setFetcher:(GTMSessionFetcher *)arg1 ;
-(void)setConcurrencyKind:(int)arg1 ;
-(int)decayLevel;
-(void)setDecayLevel:(int)arg1 ;
-(float)decayStep;
-(NSURLConnection *)downloadConnection;
-(void)setDownloadConnection:(NSURLConnection *)arg1 ;
-(long long)downloadContentLength;
-(void)setDownloadContentLength:(long long)arg1 ;
-(long long)downloadBytesWritten;
-(void)setDownloadBytesWritten:(long long)arg1 ;
-(id)downloadCompletion;
-(void)setDownloadCompletion:(id)arg1 ;
-(void)setExecuteBlock:(id)arg1 ;
-(id)executeBlock;
-(id)init;
-(void)cancel;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(char)cancelled;
-(void)setCancelled:(char)arg1 ;
-(void)setFinished:(char)arg1 ;
-(NSString *)downloadFilePath;
-(void)setDownloadFilePath:(NSString *)arg1 ;
-(id)downloadProgress;
-(void)setDownloadProgress:(id)arg1 ;
-(char)finished;
-(char)executing;
-(void)setExecuting:(char)arg1 ;
-(char)concurrent;
-(void)setTicket:(GTLRServiceTicket *)arg1 ;
-(GTLRServiceTicket *)ticket;
-(NSURLSessionTask *)downloadTask;
-(void)setDownloadTask:(NSURLSessionTask *)arg1 ;
@end

