/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class NSMutableDictionary;

@interface PDFKittenFontCollection : NSObject {

	NSMutableDictionary* _fonts;

}

@property (nonatomic,retain) NSMutableDictionary * fonts;              //@synthesize fonts=_fonts - In the implementation block
-(id)initWithFontDictionary:(CGPDFDictionaryRef)arg1 ;
-(id)fontNamed:(id)arg1 ;
-(NSMutableDictionary *)fonts;
-(void)setFonts:(NSMutableDictionary *)arg1 ;
@end
