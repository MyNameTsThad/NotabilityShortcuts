/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTWord : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(char)IsValid;
-(id)GetBBox;
-(id)GetQuad;
-(int)GetCurrentNum;
-(id)GetStyle;
-(int)GetNumGlyphs;
-(id)GetGlyphQuad:(int)arg1 ;
-(id)GetCharStyle:(int)arg1 ;
-(int)GetStringLen;
-(id)GetString;
-(id)GetNextWord;
-(id)init;
-(void)dealloc;
-(char)isEqualTo:(id)arg1 ;
@end

