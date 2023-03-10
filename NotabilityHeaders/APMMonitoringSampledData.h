/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface APMMonitoringSampledData : NSObject {

	NSMutableArray* _sampledData;

}
+(char)isValidUserDefaultsArrayEntry:(id)arg1 ;
+(id)sampledDataEntryWithKey:(id)arg1 timestamp:(id)arg2 context:(id)arg3 population:(id)arg4 ;
+(id)monitoringURLParamWithKey:(id)arg1 population:(id)arg2 context:(id)arg3 ;
-(id)monitoringDataForDispatchWithSamplePeriod:(double)arg1 lastSampledTimestamp:(double)arg2 ;
-(void)insertOrUpdateSampledDataWithKey:(id)arg1 encodedContext:(id)arg2 ;
-(id)sampledData;
-(id)initWithArray:(id)arg1 ;
@end

