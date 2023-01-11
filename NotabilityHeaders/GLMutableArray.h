/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface GLMutableArray : NSObject <NSFastEnumeration> {

	NSMutableArray* _backingArray;

}

@property (nonatomic,retain) NSMutableArray * backingArray;              //@synthesize backingArray=_backingArray - In the implementation block
-(void)each:(/*^block*/id)arg1 ;
-(id)immutableCopy;
-(id)unsafeBacking;
-(NSMutableArray *)backingArray;
-(void)setBackingArray:(NSMutableArray *)arg1 ;
-(id)init;
-(void)removeObject:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_GL42*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(void)addObject:(id)arg1 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

