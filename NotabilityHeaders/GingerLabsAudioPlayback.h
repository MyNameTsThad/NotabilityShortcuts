/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/GingerLabsAudioQueueDataSource.h>
#import <Notability/GingerLabsAudioNotificationSenderObserver.h>

@protocol GingerLabsAudioPlaybackSeekingDelegate;
@class GingerLabsAudioQueue, NSLock, GingerLabsRecordingInfo, GingerLabsRecordingsLibrary, NSString;

@interface GingerLabsAudioPlayback : NSObject <GingerLabsAudioQueueDataSource, GingerLabsAudioNotificationSenderObserver> {

	GingerLabsAudioQueue* queue;
	AudioStreamBasicDescription fileFormat;
	AudioStreamBasicDescription clientFormat;
	OpaqueExtAudioFileRef extAudioFile;
	char isPaused;
	char isEOF;
	long long currentReadFrame;
	long long durationFrames;
	NSLock* playStateLock;
	char _isPlaying;
	GingerLabsRecordingInfo* _recordingInfo;
	id<GingerLabsAudioPlaybackSeekingDelegate> _seekingDelegate;
	GingerLabsRecordingsLibrary* _recordingLibrary;

}

@property (assign) char isEOF; 
@property (assign) char isPlaying;                                                                           //@synthesize isPlaying=_isPlaying - In the implementation block
@property (readonly) char isPaused; 
@property (readonly) AudioStreamBasicDescription fileFormat; 
@property (readonly) AudioStreamBasicDescription clientFormat; 
@property (nonatomic,readonly) long long durationFrames; 
@property (nonatomic,readonly) GingerLabsRecordingInfo * recordingInfo;                                      //@synthesize recordingInfo=_recordingInfo - In the implementation block
@property (assign,nonatomic,__weak) id<GingerLabsAudioPlaybackSeekingDelegate> seekingDelegate;              //@synthesize seekingDelegate=_seekingDelegate - In the implementation block
@property (assign,nonatomic,__weak) GingerLabsRecordingsLibrary * recordingLibrary;                          //@synthesize recordingLibrary=_recordingLibrary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentPlaybackInstance;
+(void)setCurrentPlaybackInstance:(id)arg1 ;
-(GingerLabsRecordingsLibrary *)recordingLibrary;
-(void)setRecordingLibrary:(GingerLabsRecordingsLibrary *)arg1 ;
-(void)seekSeconds:(double)arg1 ceilOfFramesCalculation:(char)arg2 ;
-(void)seekSeconds:(double)arg1 ;
-(void)setSeekingDelegate:(id<GingerLabsAudioPlaybackSeekingDelegate>)arg1 ;
-(char)isEOF;
-(id)OSStatusToString:(long)arg1 ;
-(void)setIsEOF:(char)arg1 ;
-(void)cleanupFailedInit;
-(id)initWithRecordingURL:(id)arg1 recordingInfo:(id)arg2 audioQueue:(id)arg3 ;
-(void)seekSeconds:(double)arg1 ceilOfFramesCalculation:(char)arg2 shouldNotify:(char)arg3 ;
-(long long)durationFrames;
-(void)copyFramesToBufferList:(AudioBufferList*)arg1 numFrames:(unsigned*)arg2 ;
-(id<GingerLabsAudioPlaybackSeekingDelegate>)seekingDelegate;
-(void)readFramesToBufferList:(AudioBufferList*)arg1 numFrames:(unsigned*)arg2 frameOffset:(long long*)arg3 ;
-(id)initWithRecordingURL:(id)arg1 recordingInfo:(id)arg2 ;
-(double)durationSeconds;
-(AudioStreamBasicDescription)clientFormat;
-(void)dealloc;
-(NSString *)description;
-(void)stop;
-(void)postNotification:(id)arg1 ;
-(void)teardown;
-(double)currentTime;
-(char)isPlaying;
-(void)play;
-(void)pause;
-(char)isPaused;
-(void)setIsPlaying:(char)arg1 ;
-(GingerLabsRecordingInfo *)recordingInfo;
-(AudioStreamBasicDescription)fileFormat;
@end

