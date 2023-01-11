/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NIActiveStylusDetectorDataSource;
@class NSMutableArray;

@interface NIActiveStylusDetector : NSObject {

	float _currentWritingRadius;
	char _isUsingActiveStylus;
	id<NIActiveStylusDetectorDataSource> _dataSource;
	float _activeStylusRadius;
	NSMutableArray* _candidateStatsQueue;

}

@property (assign) float currentWritingRadius; 
@property (assign) char isUsingActiveStylus;                                     //@synthesize isUsingActiveStylus=_isUsingActiveStylus - In the implementation block
@property (assign) float activeStylusRadius;                                     //@synthesize activeStylusRadius=_activeStylusRadius - In the implementation block
@property (retain) NSMutableArray * candidateStatsQueue;                         //@synthesize candidateStatsQueue=_candidateStatsQueue - In the implementation block
@property (__weak) id<NIActiveStylusDetectorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)sharedInstance;
-(void)touchesDidEnd:(id)arg1 ;
-(void)setCandidateStatsQueue:(NSMutableArray *)arg1 ;
-(void)setCurrentWritingRadius:(float)arg1 ;
-(float)currentWritingRadius;
-(char)isUsingActiveStylus;
-(float)activeStylusRadius;
-(char)statsAreLikelyFromWriting:(id)arg1 ;
-(void)addCandidateStatsToQueue:(id)arg1 ;
-(void)updateStatusBasedOnList;
-(NSMutableArray *)candidateStatsQueue;
-(void)setIsUsingActiveStylus:(char)arg1 ;
-(void)setActiveStylusRadius:(float)arg1 ;
-(char)statsAreObviouslyFromWriting:(id)arg1 ;
-(char)touchIsCurrentStylus:(id)arg1 ;
-(char)touchIsActiveStylus:(id)arg1 ;
-(id)init;
-(void)setDataSource:(id<NIActiveStylusDetectorDataSource>)arg1 ;
-(id<NIActiveStylusDetectorDataSource>)dataSource;
@end
