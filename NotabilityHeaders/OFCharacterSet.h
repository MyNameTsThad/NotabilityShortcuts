/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@interface OFCharacterSet : NSObject {

	unsigned char bitmapRep[8192];

}
+(id)characterSetWithString:(id)arg1 ;
+(id)whitespaceOFCharacterSet;
-(void)addAllCharacters;
-(void)removeAllCharacters;
-(void)addCharactersFromCharacterSet:(id)arg1 ;
-(void)addCharactersFromOFCharacterSet:(id)arg1 ;
-(id)initWithCharacterSet:(id)arg1 ;
-(id)initWithOFCharacterSet:(id)arg1 ;
-(void)addCharacter:(unsigned short)arg1 ;
-(void)removeCharacter:(unsigned short)arg1 ;
-(void)removeCharactersFromOFCharacterSet:(id)arg1 ;
-(void)removeCharactersFromCharacterSet:(id)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(id)init;
-(id)copy;
-(id)initWithString:(id)arg1 ;
-(char)characterIsMember:(unsigned short)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(void)invert;
@end

