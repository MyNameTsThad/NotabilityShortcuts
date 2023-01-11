/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSString;

@interface ANSPackageLogOperation : NSOperation {

	NSURL* _compressedLogURL;
	NSString* _multipartMimeBoundary;
	NSURL* _packagedLogURL;

}

@property (nonatomic,retain) NSURL * packagedLogURL;                        //@synthesize packagedLogURL=_packagedLogURL - In the implementation block
@property (nonatomic,retain) NSURL * compressedLogURL;                      //@synthesize compressedLogURL=_compressedLogURL - In the implementation block
@property (nonatomic,retain) NSString * multipartMimeBoundary;              //@synthesize multipartMimeBoundary=_multipartMimeBoundary - In the implementation block
-(NSURL *)compressedLogURL;
-(NSURL *)packagedLogURL;
-(NSString *)multipartMimeBoundary;
-(id)initWithCompressedLogURL:(id)arg1 packagedLogURL:(id)arg2 multipartMimeBoundary:(id)arg3 ;
-(id)multipartURLForCompressedURL:(id)arg1 withBoundary:(id)arg2 ;
-(void)setCompressedLogURL:(NSURL *)arg1 ;
-(void)setMultipartMimeBoundary:(NSString *)arg1 ;
-(void)setPackagedLogURL:(NSURL *)arg1 ;
-(void)main;
@end
