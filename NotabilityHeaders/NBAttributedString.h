/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSMutableAttributedString, NSString, NSAttributedString;

@interface NBAttributedString : NSObject <NSCoding> {

	NSDictionary* _attributesBeyondEndOfString;
	NSMutableAttributedString* _backingLayoutString;
	NSMutableAttributedString* _backingString;

}

@property (nonatomic,readonly) NSMutableAttributedString * backingLayoutString;              //@synthesize backingLayoutString=_backingLayoutString - In the implementation block
@property (nonatomic,readonly) NSMutableAttributedString * backingString;                    //@synthesize backingString=_backingString - In the implementation block
@property (nonatomic,retain) NSDictionary * attributesBeyondEndOfString; 
@property (nonatomic,readonly) NSString * unsafeMutableString; 
@property (nonatomic,readonly) NSAttributedString * layoutString; 
@property (nonatomic,copy,readonly) NSAttributedString * attributedString; 
@property (nonatomic,copy,readonly) NSString * string; 
@property (nonatomic,readonly) unsigned length; 
@property (nonatomic,readonly) NSRange spanningRange; 
+(id)nonLayoutAttributes;
+(id)attributesToIgnoreForEncoding;
+(id)layoutStringFromBackingString:(id)arg1 ;
+(id)attributesToIgnoreForAttributeContinuations;
+(id)_dedupeListRanges:(id)arg1 ;
+(unsigned)generateRandomListIdentifier;
-(id)attributedLayoutSubstringWithRange:(NSRange)arg1 ;
-(NSMutableAttributedString *)backingString;
-(id)rangeToAttributesMapFromRanges:(id)arg1 ;
-(void)eachAttribute:(id)arg1 inRange:(NSRange)arg2 block:(/*^block*/id)arg3 ;
-(id)listRangesAtCursor:(id)arg1 ;
-(NSAttributedString *)layoutString;
-(NSDictionary *)attributesBeyondEndOfString;
-(void)setAttributesBeyondEndOfString:(NSDictionary *)arg1 ;
-(id)legacy_printingString;
-(id)legacy_nonPrintingString;
-(id)legacy_attributesBeyondEndOfString;
-(void)legacy_setAttributesBeyondEndOfString:(id)arg1 ;
-(id)attributedSubstringWithRange:(NSRange)arg1 ;
-(NSMutableAttributedString *)backingLayoutString;
-(NSString *)unsafeMutableString;
-(NSRange)beyondEndOfStringRange;
-(void)postContentChangedNotificationForRange:(NSRange)arg1 changeType:(int)arg2 ;
-(void)mapAttributes:(NSRange)arg1 mutator:(/*^block*/id)arg2 ;
-(id)attributesAtLocation:(unsigned)arg1 ;
-(void)_iterateAttributesInRange:(NSRange)arg1 endOfStringWork:(/*^block*/id)arg2 inStringWork:(/*^block*/id)arg3 ;
-(void)_mutateAttributesInRange:(NSRange)arg1 withEndOfStringMutator:(/*^block*/id)arg2 inStringWork:(/*^block*/id)arg3 ;
-(id)attributesBeyondEndOfStringGuaranteedNonNil;
-(NSRange)spanningRange;
-(void)replaceRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)insertAttributedString:(id)arg1 atLocation:(unsigned)arg2 ;
-(void)insertText:(id)arg1 atLocation:(unsigned)arg2 ;
-(void)setAttributes:(id)arg1 inRange:(NSRange)arg2 ;
-(void)setAttribute:(id)arg1 value:(id)arg2 inRange:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 inRange:(NSRange)arg2 ;
-(void)rectifyBeyondEndOfStringListAttributesIfNeededWithPreviouslyRectifiedList:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)eachAttributes:(NSRange)arg1 block:(/*^block*/id)arg2 ;
-(void)mapAttribute:(id)arg1 inRange:(NSRange)arg2 mutator:(/*^block*/id)arg3 ;
-(NSRange)_expandToImplicitListContext:(id)arg1 ;
-(char)gl_listsDemandUsingNextListAttributesForInsertionAtLocation:(unsigned)arg1 ;
-(id)_listsInRange:(NSRange)arg1 ;
-(id)_validateListRanges:(id)arg1 ;
-(id)_listIdentifierAtLocation:(unsigned)arg1 longestEffectiveRange:(NSRange*)arg2 ;
-(id)rangesForListApplicationOnCursor:(id)arg1 ;
-(id)lineRangesAtCursor:(id)arg1 ;
-(char)_listRangeIsValid:(NSRange)arg1 ;
-(NSRange)_extendListRange:(NSRange)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)length;
-(id)substringWithRange:(NSRange)arg1 ;
-(NSString *)string;
-(void)replaceRange:(NSRange)arg1 withText:(id)arg2 ;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)deleteRange:(NSRange)arg1 ;
@end

