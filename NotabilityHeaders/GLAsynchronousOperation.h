/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface GLAsynchronousOperation : NSOperation {

	char asyncExecuting;
	char asyncFinished;
	/*^block*/id _executionBlock;

}

@property (nonatomic,copy) id executionBlock;              //@synthesize executionBlock=_executionBlock - In the implementation block
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(id)initWithAsynchronousBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)start;
-(char)isFinished;
-(char)isExecuting;
-(char)isConcurrent;
-(void)setExecutionBlock:(id)arg1 ;
-(id)executionBlock;
@end

