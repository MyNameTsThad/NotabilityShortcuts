/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@interface GLDevice : NSObject
+(double)totalMemoryMB;
+(char)hasLowMemory;
+(unsigned)iOSFamily;
+(unsigned)iOSModelNumber;
+(id)_sysInfoWithName:(char*)arg1 ;
+(NSRange)_iOSInfo;
+(unsigned long long)totalDiskSpaceBytes;
+(double)mbFromBytes:(unsigned long long)arg1 ;
+(unsigned long long)freeDiskSpaceBytes;
+(unsigned long)usedMemoryBytes;
+(unsigned long)freeMemoryBytes;
+(unsigned long long)totalMemoryBytes;
+(double)freeMemoryMB;
+(double)totalDiskSpaceMB;
+(double)freeDiskSpaceMB;
+(double)usedMemoryMB;
+(id)name;
+(id)systemVersion;
+(id)model;
+(id)localizedModel;
+(char)is32Bit;
@end

