/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/NBCaretState.h>

@class NSDictionary;

@interface NBCaretStateLocation : NBCaretState {

	unsigned _caretLocation;
	NSDictionary* _editingAttributes;

}

@property (assign,nonatomic) unsigned caretLocation;                        //@synthesize caretLocation=_caretLocation - In the implementation block
@property (nonatomic,retain) NSDictionary * editingAttributes;              //@synthesize editingAttributes=_editingAttributes - In the implementation block
-(void)setCaretLocation:(unsigned)arg1 ;
-(unsigned)legacy_beginningOrFallback:(unsigned)arg1 ;
-(unsigned)legacy_endOrFallback:(unsigned)arg1 ;
-(id)transformForReplacementOfRange:(NSRange)arg1 withStringOfLength:(unsigned)arg2 whileUndoing:(char)arg3 ;
-(id)transformForInsertionAtLocation:(unsigned)arg1 withStringOfLength:(unsigned)arg2 ;
-(id)transformByReplacingEditingAttributes:(id)arg1 ;
-(id)transformEditingAttributes:(/*^block*/id)arg1 ;
-(void)mapLocation:(/*^block*/id)arg1 ;
-(unsigned)beginning;
-(NSRange)legacy_selectionRange;
-(NSDictionary *)editingAttributes;
-(void)setEditingAttributes:(NSDictionary *)arg1 ;
-(unsigned)caretLocation;
-(id)transformForward:(unsigned)arg1 ;
-(id)transformBackward:(unsigned)arg1 ;
-(id)storedAttributes;
-(char)isEqualToCaret:(id)arg1 ;
-(unsigned)legacy_locationOrFallback:(unsigned)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)end;
-(char)caretVisible;
-(char)none;
@end

