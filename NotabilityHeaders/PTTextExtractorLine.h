/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTTextExtractorLine : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(char)IsValid;
-(id)GetBBox;
-(int)GetNumWords;
-(char)IsSimpleLine;
-(id)GetQuad;
-(id)GetFirstWord;
-(id)GetWord:(int)arg1 ;
-(id)GetNextLine;
-(int)GetCurrentNum;
-(id)GetStyle;
-(int)GetParagraphID;
-(int)GetFlowID;
-(char)EndsWithHyphen;
-(id)init;
-(void)dealloc;
-(char)isEqualTo:(id)arg1 ;
@end

