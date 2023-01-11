/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class PDFKittenFont, NSString, NSArray;

@interface PDFKittenString : NSObject {

	PDFKittenFont* _font;
	NSString* _unicodeString;
	CGPDFStringRef _glyphDataPDFString;
	unsigned _glyphSize;
	NSArray* _ranges;

}

@property (nonatomic,retain) PDFKittenFont * font;                           //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) NSString * unicodeString;                       //@synthesize unicodeString=_unicodeString - In the implementation block
@property (assign,nonatomic) CGPDFStringRef glyphDataPDFString;              //@synthesize glyphDataPDFString=_glyphDataPDFString - In the implementation block
@property (assign,nonatomic) unsigned glyphSize;                             //@synthesize glyphSize=_glyphSize - In the implementation block
@property (nonatomic,retain) NSArray * ranges;                               //@synthesize ranges=_ranges - In the implementation block
-(id)initWithFont:(id)arg1 unicodeString:(id)arg2 glyphDataPDFString:(CGPDFStringRef)arg3 glyphSize:(unsigned)arg4 ranges:(id)arg5 ;
-(unsigned)glyphsLength;
-(void)enumerateWidthsAndUnicodeCharactersUsingBlock:(/*^block*/id)arg1 ;
-(CGPDFStringRef)glyphDataPDFString;
-(unsigned)glyphSize;
-(NSString *)unicodeString;
-(void)setUnicodeString:(NSString *)arg1 ;
-(void)setGlyphDataPDFString:(CGPDFStringRef)arg1 ;
-(void)setGlyphSize:(unsigned)arg1 ;
-(id)description;
-(void)setFont:(PDFKittenFont *)arg1 ;
-(PDFKittenFont *)font;
-(NSArray *)ranges;
-(void)setRanges:(NSArray *)arg1 ;
@end
