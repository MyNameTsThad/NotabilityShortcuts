/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL;

@interface ANSCompressLogOperation : NSOperation {

	NSURL* _uncompressedLogURL;
	NSURL* _compressedLogURL;

}

@property (nonatomic,retain) NSURL * compressedLogURL;                //@synthesize compressedLogURL=_compressedLogURL - In the implementation block
@property (nonatomic,retain) NSURL * uncompressedLogURL;              //@synthesize uncompressedLogURL=_uncompressedLogURL - In the implementation block
-(NSURL *)compressedLogURL;
-(void)setCompressedLogURL:(NSURL *)arg1 ;
-(NSURL *)uncompressedLogURL;
-(id)initWithUncompressedLogURL:(id)arg1 compressedLogURL:(id)arg2 ;
-(id)compressedURLForUncompressedURL:(id)arg1 ;
-(void)setUncompressedLogURL:(NSURL *)arg1 ;
-(void)main;
@end

