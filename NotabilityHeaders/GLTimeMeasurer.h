/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface GLTimeMeasurer : NSObject {

	NSMutableArray* eventStack;
	double threshold;
	NSString* _domain;
	NSMutableArray* _summary;

}

@property (nonatomic,retain) NSString * domain;                     //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableArray * summary;              //@synthesize summary=_summary - In the implementation block
+(id)timeMeasurerForDomain:(id)arg1 ;
+(id)timeMeasurer;
+(id)enabledTimeMeasurerDomains;
+(id)timeMeasurerForDomain:(id)arg1 threshold:(double)arg2 ;
-(void)pushEvent:(id)arg1 ;
-(double)popEvent;
-(void)printSummary;
-(id)init;
-(void)dealloc;
-(NSString *)domain;
-(NSMutableArray *)summary;
-(void)setSummary:(NSMutableArray *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
@end
