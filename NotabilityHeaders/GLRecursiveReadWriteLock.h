/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class NSMutableDictionary;

@interface GLRecursiveReadWriteLock : NSObject {

	opaque_pthread_mutex_t statusMutex;
	opaque_pthread_cond_t allowReadersInCondition;
	opaque_pthread_cond_t allowAWriterCondition;
	int numReaders;
	char writerHasLock;
	int writersWaiting;
	NSMutableDictionary* threadInfoDictionary;

}
-(void)lockReadLock;
-(void)lockWriteLock;
-(char)isConsistentWithTestEnd;
-(char)lockReadLock:(char)arg1 ;
-(char)lockWriteLock:(char)arg1 ;
-(id)threadInfoForThread:(id)arg1 ;
-(void)wakeupWriter;
-(void)wakeupAllReaders;
-(char)tryLockReadLock;
-(char)tryLockWriteLock;
-(id)init;
-(void)dealloc;
-(void)unlock;
-(char)isConsistent;
-(int)writersWaiting;
@end

