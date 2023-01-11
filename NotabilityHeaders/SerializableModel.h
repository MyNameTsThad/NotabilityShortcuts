/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/SerializableObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SerializableModel : SerializableObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(void)internalApplyBlock:(/*^block*/id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)readAsync:(/*^block*/id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)writeAsync:(/*^block*/id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)readAsync:(/*^block*/id)arg1 ;
-(void)writeAsync:(/*^block*/id)arg1 ;
-(id)init;
-(void)synchronize;
-(void)clear;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)save;
@end
