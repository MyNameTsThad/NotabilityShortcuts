/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTAnnot : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
+(id)Create:(id)arg1 type:(int)arg2 pos:(id)arg3 ;
+(id)CreateInternal:(unsigned long long)arg1 ;
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(id)initWithD:(id)arg1 ;
-(char)IsValid;
-(int)GetType;
-(id)GetSDFObj;
-(int)GetRotation;
-(id)GetRect;
-(id)GetVisibleContentBox;
-(char)IsMarkup;
-(void)SetRect:(id)arg1 ;
-(id)GetPage;
-(void)SetPage:(id)arg1 ;
-(id)GetUniqueID;
-(void)SetUniqueID:(id)arg1 id_buf_sz:(int)arg2 ;
-(id)GetDate;
-(void)SetDate:(id)arg1 ;
-(char)GetFlag:(int)arg1 ;
-(void)SetFlag:(int)arg1 value:(char)arg2 ;
-(id)GetTriggerAction:(int)arg1 ;
-(id)GetBorderStyle;
-(void)SetBorderStyle:(id)arg1 oldStyleOnly:(char)arg2 ;
-(id)GetAppearance:(int)arg1 app_state:(id)arg2 ;
-(void)SetAppearance:(id)arg1 annot_state:(int)arg2 app_state:(id)arg3 ;
-(void)RemoveAppearance:(int)arg1 app_state:(id)arg2 ;
-(void)Flatten:(id)arg1 ;
-(id)GetActiveAppearanceState;
-(void)SetActiveAppearanceState:(id)arg1 ;
-(id)GetColorAsRGB;
-(id)GetColorAsCMYK;
-(id)GetColorAsGray;
-(int)GetColorCompNum;
-(void)SetColor:(id)arg1 numcomp:(int)arg2 ;
-(int)GetStructParent;
-(void)SetStructParent:(int)arg1 ;
-(id)GetOptionalContent;
-(void)SetOptionalContent:(id)arg1 ;
-(void)SetContents:(id)arg1 ;
-(id)GetContents;
-(void)SetRotation:(int)arg1 ;
-(void)RefreshAppearance;
-(void)Resize:(id)arg1 ;
-(unsigned long long)GetHandleInternal;
-(void)dealloc;
-(char)isEqualTo:(id)arg1 ;
@end

