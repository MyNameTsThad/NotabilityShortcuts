/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class PDFKittenCharacterWidthStorage, NSMutableString, PDFKittenRenderingState, NSString;

@interface PDFKittenRow : NSObject {

	PDFKittenCharacterWidthStorage* _characterWidths;
	char _isFootnote;
	NSMutableString* _stringStorage;
	PDFKittenRenderingState* _state;
	CGRect _frame;
	CGAffineTransform _transform;

}

@property (nonatomic,retain) NSMutableString * stringStorage;                                       //@synthesize stringStorage=_stringStorage - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                          //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) PDFKittenRenderingState * state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                                           //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) char isFootnote;                                                       //@synthesize isFootnote=_isFootnote - In the implementation block
@property (readonly) NSString * stringValue; 
@property (nonatomic,readonly) PDFKittenCharacterWidthStorage * characterWidths; 
@property (nonatomic,readonly) PDFKittenCharacterWidthStorage * characterWidthsNoCopy; 
@property (nonatomic,readonly) char isEndOfParagraph; 
+(id)finalizedRealContentRowsForRows:(id)arg1 ;
-(CGRect)frameForCharacterRange:(NSRange)arg1 ;
-(char)isFootnote;
-(void)_pdfFinalize;
-(void)appendNoWidthReturn;
-(void)appendNoWidthSpace;
-(id)initWithState:(id)arg1 pdfString:(id)arg2 ;
-(char)didCombineWithSubsequentRow:(id)arg1 ;
-(PDFKittenCharacterWidthStorage *)characterWidthsNoCopy;
-(id)initWithString:(id)arg1 location:(CGPoint)arg2 height:(float)arg3 characterWidthStorage:(id)arg4 ;
-(NSMutableString *)stringStorage;
-(void)setIsFootnote:(char)arg1 ;
-(PDFKittenCharacterWidthStorage *)characterWidths;
-(char)_hasRealContent;
-(void)setStringStorage:(NSMutableString *)arg1 ;
-(char)_hasLastCharacter:(unsigned short)arg1 replaceWithNoWidthCharacter:(unsigned short)arg2 ;
-(void)_removeSecondToLastWhitespace;
-(char)isEndOfParagraph;
-(NSRange)charactersIntersectingRect:(CGRect)arg1 ;
-(unsigned)indexOfCharacterIntersectingPoint:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGRect)frame;
-(id)description;
-(PDFKittenRenderingState *)state;
-(void)setState:(PDFKittenRenderingState *)arg1 ;
-(CGAffineTransform)transform;
-(NSString *)stringValue;
@end
