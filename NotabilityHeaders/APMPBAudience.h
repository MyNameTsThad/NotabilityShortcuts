/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/NANOMessageBase.h>

@class NSString;

@interface APMPBAudience : NSObject <NANOMessageBase> {

	SCD_Struct_CL61* _messageInfo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) const char* messageID; 
@property (nonatomic,readonly) SCD_Struct_CL61* messageInfo;                                 //@synthesize messageInfo=_messageInfo - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* initMessageInfoFn; 
@property (nonatomic,readonly) /*function pointer*/void* deallocMessageFieldFn; 
@property (nonatomic,readonly) /*function pointer*/void* copyMessageInfoFn; 
-(id)protoBuffer;
-(id)initWithMessageInfo:(SCD_Struct_CL61*)arg1 ;
-(id)initWithBuffer:(id)arg1 ;
-(SCD_Struct_CL61*)messageInfo;
-(/*function pointer*/void*)initMessageInfoFn;
-(/*function pointer*/void*)deallocMessageFieldFn;
-(/*function pointer*/void*)copyMessageInfoFn;
-(void)dealloc;
-(const char*)messageID;
@end

