/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class NSString, NSArray;

@interface CLSMachOSlice : NSObject {

	CLSMachOSlice* _slice;
	NSString* _uuidString;
	NSArray* _linkedDylibs;
	SCD_Struct_FA58 _minimumOSVersion;
	SCD_Struct_FA58 _linkedSDKVersion;

}

@property (nonatomic,copy,readonly) NSString * uuid; 
@property (nonatomic,copy,readonly) NSString * architectureName; 
@property (nonatomic,readonly) NSArray * linkedDylibs; 
@property (nonatomic,readonly) SCD_Struct_FA58 minimumOSVersion;              //@synthesize minimumOSVersion=_minimumOSVersion - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FA58 linkedSDKVersion;              //@synthesize linkedSDKVersion=_linkedSDKVersion - In the implementation block
+(id)runningSlice;
-(id)initWithSlice:(CLSMachOSlice*)arg1 ;
-(NSString *)architectureName;
-(NSArray *)linkedDylibs;
-(SCD_Struct_FA58)minimumOSVersion;
-(SCD_Struct_FA58)linkedSDKVersion;
-(NSString *)uuid;
@end

