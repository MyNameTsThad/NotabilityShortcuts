/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTDestination : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
+(id)CreateXYZ:(id)arg1 left:(double)arg2 top:(double)arg3 zoom:(double)arg4 ;
+(id)CreateFit:(id)arg1 ;
+(id)CreateFitH:(id)arg1 top:(double)arg2 ;
+(id)CreateFitV:(id)arg1 left:(double)arg2 ;
+(id)CreateFitR:(id)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4 top:(double)arg5 ;
+(id)CreateFitB:(id)arg1 ;
+(id)CreateFitBH:(id)arg1 top:(double)arg2 ;
+(id)CreateFitBV:(id)arg1 left:(double)arg2 ;
-(id)initWithCptr:(void*)arg1 ;
-(int)GetFitType;
-(id)GetExplicitDestObj;
-(id)initWithDest:(id)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(char)IsValid;
-(id)GetSDFObj;
-(id)GetPage;
-(void)SetPage:(id)arg1 ;
-(void)dealloc;
@end

