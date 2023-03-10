/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/AVAudioRecorderDelegate.h>
#import <Notability/NBCPEventManagerRecordingDelegate.h>
#import <Notability/GingerLabsAudioNotificationSenderObserver.h>

@class GingerLabsRecordingInfo, NBNoteDocument, NSString, NSUndoManager, NBCPPlayer, NSArray, NSMutableArray, NSMutableDictionary, _TtC10Notability13AudioRecorder, NSTimer, GingerLabsAudioPlaybackController;

@interface GingerLabsRecordingsLibrary : NSObject <AVAudioRecorderDelegate, NBCPEventManagerRecordingDelegate, GingerLabsAudioNotificationSenderObserver> {

	long lastRecordingIdentifier;
	GingerLabsRecordingInfo* activeRecordingInfo;
	char _isRecording;
	NBNoteDocument* _noteDocument;
	NSString* _recordingLibraryPath;
	NSUndoManager* _undoManager;
	NBCPPlayer* _contentPlaybackPlayer;
	NSArray* _allRecordings;
	NSMutableArray* _recordingsFlaggedForDeletion;
	NSMutableDictionary* _recordingsDictionary;
	_TtC10Notability13AudioRecorder* _recorder;
	NSTimer* _chunksTimer;
	GingerLabsAudioPlaybackController* _playbackController;

}

@property (nonatomic,retain) NSArray * allRecordings;                                             //@synthesize allRecordings=_allRecordings - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordingsFlaggedForDeletion;                       //@synthesize recordingsFlaggedForDeletion=_recordingsFlaggedForDeletion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordingsDictionary;                          //@synthesize recordingsDictionary=_recordingsDictionary - In the implementation block
@property (nonatomic,retain) _TtC10Notability13AudioRecorder * recorder;                          //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,retain) NSTimer * chunksTimer;                                               //@synthesize chunksTimer=_chunksTimer - In the implementation block
@property (assign,nonatomic) char isRecording;                                                    //@synthesize isRecording=_isRecording - In the implementation block
@property (nonatomic,retain) GingerLabsAudioPlaybackController * playbackController;              //@synthesize playbackController=_playbackController - In the implementation block
@property (assign,nonatomic,__weak) NBNoteDocument * noteDocument;                                //@synthesize noteDocument=_noteDocument - In the implementation block
@property (nonatomic,retain) NSString * recordingLibraryPath;                                     //@synthesize recordingLibraryPath=_recordingLibraryPath - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                                         //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,readonly) char hasRecordings; 
@property (nonatomic,retain) NBCPPlayer * contentPlaybackPlayer;                                  //@synthesize contentPlaybackPlayer=_contentPlaybackPlayer - In the implementation block
@property (nonatomic,readonly) NSArray * recordingsDisplayList; 
@property (nonatomic,readonly) char isPlaying; 
@property (assign,nonatomic) float playbackSpeed; 
@property (nonatomic,readonly) float outputVolume; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activeRecordingLibrary;
+(void)setActiveRecordingLibrary:(id)arg1 ;
+(id)keyPathsForValuesAffectingHasRecordings;
+(id)prettyFormattedSize:(unsigned long long)arg1 ;
+(id)keyPathsForValuesAffectingPlaybackSpeed;
+(id)keyPathsForValuesAffectingOutputVolume;
+(id)keyPathsForValuesAffectingIsPlaying;
-(void)setContentPlaybackPlayer:(NBCPPlayer *)arg1 ;
-(NBNoteDocument *)noteDocument;
-(id)recordingLibrary;
-(char)hasRecordings;
-(void)commitRecording;
-(void)recoverLastRecordingIfNecessary;
-(void)cleanPendingRecordingDeletions;
-(void)refreshCurrentRecordings;
-(void)setNoteDocument:(NBNoteDocument *)arg1 ;
-(NBCPPlayer *)contentPlaybackPlayer;
-(NSArray *)recordingsDisplayList;
-(double)cumulativeDuration;
-(float)recorderInputPower;
-(void)togglePlay;
-(void)toggleRecording;
-(void)setIsRecording:(char)arg1 ;
-(double)currentRecordingTime;
-(void)doBriefRewind;
-(void)beginSeeking;
-(double)cumulativePlaybackTime;
-(void)seekToCumulativeTime:(double)arg1 ;
-(void)seekToNextRecording;
-(void)seekToPreviousRecording;
-(void)prepForPlayback;
-(char)deleteRecordingOfIdentifier:(unsigned)arg1 ;
-(void)loadRecordingAtIndex:(int)arg1 ;
-(void)setRecordingsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setRecordingsFlaggedForDeletion:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)recordingsDictionary;
-(id)recordingsArray;
-(char)removeRecordingInfo:(id)arg1 fromRecordingFolderWrapper:(id)arg2 ;
-(id)pathForRecordingWithInfo:(id)arg1 ;
-(void)renameFromTempNameToPermanentName:(id)arg1 ;
-(id)generatePlistData;
-(void)_updateFileAttributesOfRecordingAtPath:(id)arg1 withInfo:(id)arg2 ;
-(NSMutableArray *)recordingsFlaggedForDeletion;
-(id)recordingInfoForIdentifier:(unsigned)arg1 ;
-(id)recordingInfoForRecentlyDeletedIdentifier:(unsigned)arg1 ;
-(unsigned)firstAvailableIdentifier;
-(char)addRecordingToLibraryWithInfo:(id)arg1 ;
-(void)undoDeleteRecording:(id)arg1 ;
-(void)clearCachedRecordingsList;
-(id)keyForRecordingInfo:(id)arg1 ;
-(NSArray *)allRecordings;
-(void)setAllRecordings:(NSArray *)arg1 ;
-(void)showRecoveryProgress:(id)arg1 recordingId:(id)arg2 afterDelay:(double)arg3 ;
-(void)showRecoveryCancelConfirmation:(id)arg1 recordingId:(id)arg2 ;
-(id)createNewRecording;
-(void)updateFileAttributesOfRecordingInfo:(id)arg1 ;
-(id)tempPathForRecordingWithInfo:(id)arg1 ;
-(id)documentPathForRecordingWithInfo:(id)arg1 ;
-(void)_startRecordingAfterStoppingActiveLibraryShowConfirmationAlert:(char)arg1 ;
-(void)handleDidStopRecording;
-(void)createNewChunk:(id)arg1 ;
-(void)setChunksTimer:(NSTimer *)arg1 ;
-(GingerLabsAudioPlaybackController *)playbackController;
-(NSTimer *)chunksTimer;
-(void)_playAfterStoppingActiveLibraryShowConfirmationAlert:(char)arg1 ;
-(void)seekToTime:(double)arg1 forRecordingWithID:(int)arg2 ceilOfFramesCalculation:(char)arg3 ;
-(double)recordingTimeToCumulativeTime:(double)arg1 forRecordingID:(int)arg2 ;
-(void)_startAfterStoppingActiveLibraryForPlayback:(char)arg1 showConfirmationAlert:(char)arg2 ;
-(void)cancelRecordingAndPlayback;
-(void)showCancelRecordingAndPlaybackConfirmationForPlayback:(char)arg1 document:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)eventManagerRequestsIsRecording;
-(char)eventManagerRequestsCurrentRecordingIdentifier:(id*)arg1 timestamp:(id*)arg2 ;
-(double)eventManagerRequestsCumulativeTime;
-(double)eventManagerRequestsCumulativePlaybackTime;
-(void)eventManagerRequestsSeekToCumulativeTime:(double)arg1 ;
-(id)initWithRecordingsLibraryData:(id)arg1 ;
-(void)updateRecordingsFileWrapper:(id)arg1 ;
-(void)renameToNextAvailableName:(id)arg1 ;
-(void)removeRecordingFromLibraryWithInfo:(id)arg1 ;
-(void)addRecordingInfoToLibraryManuallyWithNewRecordingURL:(id)arg1 ;
-(unsigned long long)diskSize;
-(unsigned long)lastRecordingIdentifier;
-(void)audioProcessorShutdown;
-(void)seekToTime:(double)arg1 forRecordingWithID:(int)arg2 ;
-(void)documentContentAccessWillBeDisabled;
-(void)documentContentAccessWasEnabled;
-(NSString *)recordingLibraryPath;
-(void)setRecordingLibraryPath:(NSString *)arg1 ;
-(void)setPlaybackController:(GingerLabsAudioPlaybackController *)arg1 ;
-(void)dealloc;
-(NSUndoManager *)undoManager;
-(void)stop;
-(char)isPlaying;
-(void)close;
-(void)play;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(unsigned long long)availableSpace;
-(id)recordingSettings;
-(unsigned long long)totalTime;
-(void)endSeeking;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(unsigned long long)totalSize;
-(void)setRecorder:(_TtC10Notability13AudioRecorder *)arg1 ;
-(_TtC10Notability13AudioRecorder *)recorder;
-(char)isRecording;
-(void)startRecording;
-(void)_play;
-(float)outputVolume;
-(void)_startRecording;
@end

