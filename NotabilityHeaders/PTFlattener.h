/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTFlattener : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(void)Destroy;
-(void)SetPreferJPG:(char)arg1 ;
-(void)SetJPGQuality:(unsigned)arg1 ;
-(void)SetDPI:(unsigned)arg1 ;
-(void)SetMaximumImagePixels:(unsigned)arg1 ;
-(void)SetThreshold:(int)arg1 ;
-(void)SetPathHinting:(char)arg1 ;
-(void)Process:(id)arg1 mode:(int)arg2 ;
-(id)init;
-(void)dealloc;
@end

