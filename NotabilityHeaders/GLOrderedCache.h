/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GLOrderedCache : NSObject {

	NSMutableArray* _cache;

}
-(void)markAllUnused;
-(void)clearUnused;
-(void)markUnusedAtIndex:(int)arg1 ;
-(id)init;
-(id)objectAtIndex:(int)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)allObjects;
-(void)replaceObjectAtIndex:(int)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(int)arg2 ;
@end
