/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface Notability.AudioRecorder : NSObject {

	 lock;
	 _state;
	 _error;
	 _microphoneAveragePower;
	 _currentTime;
	 outputUrl;
	 outputFile;
	 recordQueue;
	 engine;
	 currentChunk;
	 currentChunkIndex;
	 currentChunkWrittenFrames;
	 inputFormat;
	 converter;
	 convertBuffer;
	 cache;
	 recordingIdentifier;
	 observers;

}

@property (assign,nonatomic) int state; 
@property (assign,nonatomic) int _state;                                 //@synthesize state=_state - In the implementation block
@property (readonly,nonatomic) char isRecording; 
@property (copy,nonatomic) NSError * error; 
@property (copy,nonatomic) NSError * _error;                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) float _microphoneAveragePower;              //@synthesize microphoneAveragePower=_microphoneAveragePower - In the implementation block
@property (assign,nonatomic) float microphoneAveragePower; 
@property (assign,nonatomic) double currentTime; 
-(float)microphoneAveragePower;
-(id)startRecordingToFileUrl:(id)arg1 error:(id*)arg2 ;
-(float)_microphoneAveragePower;
-(void)set_state:(int)arg1 ;
-(void)set_error:(NSError *)arg1 ;
-(void)set_microphoneAveragePower:(float)arg1 ;
-(void)setMicrophoneAveragePower:(float)arg1 ;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)_state;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSError *)_error;
-(char)isRecording;
-(void)stopRecording;
@end

