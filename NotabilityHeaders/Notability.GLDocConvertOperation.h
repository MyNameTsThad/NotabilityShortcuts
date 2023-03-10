/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <Notability/Notability.GLPDFConverterDelegate.h>

@class NSURL, NSProgress, NSError;

@interface Notability.GLDocConvertOperation : NSOperation <Notability.GLPDFConverterDelegate> {

	 converter;
	 semaphore;
	 fileUrl;
	 progress;
	 outputUrl;
	 error;

}

@property (readonly,nonatomic) NSURL * fileUrl; 
@property (readonly,nonatomic) NSProgress * progress; 
@property (copy,nonatomic) NSURL * outputUrl; 
@property (copy,nonatomic) NSError * error; 
-(id)initWithFileUrl:(id)arg1 ;
-(NSURL *)outputUrl;
-(NSURL *)fileUrl;
-(void)setOutputUrl:(NSURL *)arg1 ;
-(void)conversionDidStartForPDFConverter:(id)arg1 ;
-(void)conversionDidProgressForPDFConverter:(id)arg1 progressValue:(double)arg2 ;
-(void)conversionDidCompleteForPDFConverter:(id)arg1 url:(id)arg2 error:(id)arg3 ;
-(void)trackConversionResult;
-(id)init;
-(void)cancel;
-(NSProgress *)progress;
-(void)main;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

