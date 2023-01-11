/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow;

@interface Notability.ScreenRecorder : NSObject {

	 isRecording;
	 assetWriter;
	 videoInput;
	 outputFolderUrl.storage;
	 outputUrl.storage;
	 overlayWindow;
	 shareItem;
	 recordItem;
	 clearItem;
	 forwardEventsSwitch;
	 forwardEventsItem;

}

@property (assign,nonatomic) char isRecording; 
@property (retain,nonatomic) UIWindow * overlayWindow; 
+(char)enabled;
+(id)shared;
-(void)setIsRecording:(char)arg1 ;
-(void)didTapShare;
-(void)didTapClear;
-(void)didTapRecord;
-(void)didTapSwitch;
-(UIWindow *)overlayWindow;
-(void)setOverlayWindow:(UIWindow *)arg1 ;
-(void)startRecordingWithStartHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopRecordingWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(char)isRecording;
-(void)setup;
@end

