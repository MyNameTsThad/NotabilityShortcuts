/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NBSpatialDictionaryKey : NSObject <NSCopying> {

	int x;
	int y;
	int z;
	unsigned hash;

}

@property (readonly) int x; 
@property (readonly) int y; 
@property (readonly) int z; 
+(id)keyWithX:(int)arg1 y:(int)arg2 z:(int)arg3 ;
+(id)keyWithX:(int)arg1 y:(int)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)x;
-(int)y;
-(int)z;
-(id)initWithX:(int)arg1 y:(int)arg2 z:(int)arg3 ;
-(id)initWithX:(int)arg1 y:(int)arg2 ;
@end

