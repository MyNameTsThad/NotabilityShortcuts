/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:17 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTFilterWriter : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(unsigned long)WriteBuffer:(id)arg1 ;
-(void)WriteString:(id)arg1 ;
-(void)AttachFilter:(id)arg1 ;
-(id)GetAttachedFilter;
-(unsigned long)Count;
-(void)Flush;
-(void)FlushAll;
-(void)Seek:(unsigned long long)arg1 origin:(int)arg2 ;
-(unsigned long long)Tell;
-(void)WriteUChar:(unsigned char)arg1 ;
-(void)WriteInt16:(short)arg1 ;
-(void)WriteUInt16:(unsigned short)arg1 ;
-(void)WriteInt32:(int)arg1 ;
-(void)WriteUInt32:(unsigned)arg1 ;
-(void)WriteInt64:(long long)arg1 ;
-(void)WriteUInt64:(unsigned long long)arg1 ;
-(void)WriteFilter:(id)arg1 ;
-(void)WriteLine:(id)arg1 eol:(char)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithFilter:(id)arg1 ;
@end

