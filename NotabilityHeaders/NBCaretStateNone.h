/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/NBCaretState.h>

@interface NBCaretStateNone : NBCaretState
-(id)transformForReplacementOfRange:(NSRange)arg1 withStringOfLength:(unsigned)arg2 whileUndoing:(char)arg3 ;
-(id)transformForInsertionAtLocation:(unsigned)arg1 withStringOfLength:(unsigned)arg2 ;
-(id)transformForDeletingRange:(NSRange)arg1 ;
-(void)mapBeginningAndEnd:(/*^block*/id)arg1 ;
-(void)mapBeginning:(/*^block*/id)arg1 ;
-(void)mapEnd:(/*^block*/id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

