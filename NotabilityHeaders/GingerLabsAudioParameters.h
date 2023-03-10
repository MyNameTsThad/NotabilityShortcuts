/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GingerLabsAudioParameters : NSObject {

	float compensationGain[2][5];
	float attackTime;
	float releaseTime;
	float compressionThreshold;
	float compressionRatio;
	float expanderThreshold;
	float expanderRatio;

}

@property (assign,nonatomic) float attackTime; 
@property (assign,nonatomic) float releaseTime; 
@property (assign) float compressionThreshold; 
@property (assign) float compressionRatio; 
@property (assign) float expanderThreshold; 
@property (assign) float expanderRatio; 
+(void)saveCurrentParametersAsLiveListeningInDefaults;
+(id)loadLiveListeningParametersFromDefaults;
+(id)currentAudioParameters;
+(id)defaultParameters;
-(void)setCompressionThreshold:(float)arg1 ;
-(void)setExpanderThreshold:(float)arg1 ;
-(void)setCompensationGain:(float)arg1 forBand:(unsigned long)arg2 channel:(unsigned long)arg3 ;
-(float)compensationGainForBand:(unsigned long)arg1 channel:(unsigned long)arg2 ;
-(float)compressionThreshold;
-(float)compressionRatio;
-(float)expanderThreshold;
-(float)expanderRatio;
-(void)setCompressionRatio:(float)arg1 ;
-(void)setExpanderRatio:(float)arg1 ;
-(id)compensationGainArray;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAttackTime:(float)arg1 ;
-(void)setReleaseTime:(float)arg1 ;
-(float)attackTime;
-(float)releaseTime;
@end

