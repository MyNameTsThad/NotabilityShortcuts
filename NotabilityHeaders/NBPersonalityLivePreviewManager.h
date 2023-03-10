/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, UIView, NILabel;

@interface NBPersonalityLivePreviewManager : NSObject {

	char _revertToIntrusiveOnComplete;
	NSTimer* _previewTimer;
	UIView* _overlayView;
	NILabel* _overlayLabel;
	unsigned _counter;

}

@property (nonatomic,retain) NSTimer * previewTimer;                             //@synthesize previewTimer=_previewTimer - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) NILabel * overlayLabel;                             //@synthesize overlayLabel=_overlayLabel - In the implementation block
@property (assign,nonatomic) unsigned counter;                                   //@synthesize counter=_counter - In the implementation block
@property (assign,nonatomic) char revertToIntrusiveOnComplete;                   //@synthesize revertToIntrusiveOnComplete=_revertToIntrusiveOnComplete - In the implementation block
@property (getter=isPreviewing,nonatomic,readonly) char previewing; 
+(id)sharedManager;
-(void)previewPersonality:(id)arg1 ;
-(NSTimer *)previewTimer;
-(void)setPreviewTimer:(NSTimer *)arg1 ;
-(void)addOverlay;
-(void)setRevertToIntrusiveOnComplete:(char)arg1 ;
-(void)timerFired;
-(void)cancelPreview;
-(NILabel *)overlayLabel;
-(void)setOverlayLabel:(NILabel *)arg1 ;
-(char)revertToIntrusiveOnComplete;
-(char)isPreviewing;
-(void)updateLabel;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(void)removeOverlay;
-(unsigned)counter;
-(void)setCounter:(unsigned)arg1 ;
@end

