/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTField : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(void)Destroy;
-(char)IsValid;
-(int)GetType;
-(id)GetSDFObj;
-(id)GetName;
-(char)GetFlag:(int)arg1 ;
-(void)SetFlag:(int)arg1 value:(char)arg2 ;
-(id)GetTriggerAction:(int)arg1 ;
-(void)Flatten:(id)arg1 ;
-(void)RefreshAppearance;
-(id)GetValue;
-(id)GetValueAsString;
-(char)GetValueAsBool;
-(id)SetValueWithString:(id)arg1 ;
-(id)SetValueWithObj:(id)arg1 ;
-(id)SetValue:(id)arg1 ;
-(id)SetValueWithBool:(char)arg1 ;
-(void)EraseAppearance;
-(id)GetDefaultValue;
-(id)GetDefaultValueAsString;
-(id)GetPartialName;
-(void)Rename:(id)arg1 ;
-(char)IsAnnot;
-(int)GetJustification;
-(void)SetJustification:(int)arg1 ;
-(void)SetMaxLen:(int)arg1 ;
-(int)GetOptCount;
-(id)GetOpt:(int)arg1 ;
-(int)GetMaxLen;
-(id)GetDefaultAppearance;
-(id)GetUpdateRect;
-(id)FindInheritedAttribute:(id)arg1 ;
-(id)UseSignatureHandler:(unsigned long)arg1 ;
-(id)initWithField_dict:(id)arg1 ;
-(void)dealloc;
@end

