/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray;

@interface CLSThreadArrayOperation : NSOperation {

	NSArray* _threadArray;

}

@property (nonatomic,retain) NSArray * threadArray;              //@synthesize threadArray=_threadArray - In the implementation block
-(void)setThreadArray:(NSArray *)arg1 ;
-(NSArray *)threadArray;
-(void)enumerateFramesWithBlock:(/*^block*/id)arg1 ;
@end
