/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSThread;

@interface GLThreadInfo : NSObject {

	int stack[1024];
	int index;
	int firstWriteIndex;
	NSThread* thread;

}

@property (assign,nonatomic,__weak) NSThread * thread; 
-(char)isReaderOrWriter;
-(void)dealloc;
-(void)pop;
-(NSThread *)thread;
-(void)setThread:(NSThread *)arg1 ;
-(void)push:(int)arg1 ;
-(id)initWithThread:(id)arg1 ;
-(char)isWriter;
@end

