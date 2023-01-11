/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>
#import <Notability/GLVariableSpeedSliderDelegate.h>
#import <Notability/NBVolumeSliderDelegate.h>
#import <Notability/NBPlaybackManagerTableViewControllerDelegate.h>
#import <Notability/RecordingManagerTableViewControllerDelegate.h>
#import <Notability/AudioTuningViewControllerDelegate.h>
#import <Notability/GingerLabsAudioNotificationSenderObserver.h>

@protocol NBTimelineViewTabCenteringProtocol, NBTimelineViewDelegate;
@class GLVariableSpeedSlider, NBButton, NSTimer, UIImageView, UITapGestureRecognizer, NBRecordingTimelineLabel, NSLayoutConstraint, NSArray, GingerLabsRecordingsLibrary, RecordingManagerTableViewController, UINavigationController, NBPlaybackManagerTableViewController, GLIPhonePopoverView, NBVolumeSliderViewController, UIView, NSString;

@interface TimelineView : UIView <GLVariableSpeedSliderDelegate, NBVolumeSliderDelegate, NBPlaybackManagerTableViewControllerDelegate, RecordingManagerTableViewControllerDelegate, AudioTuningViewControllerDelegate, GingerLabsAudioNotificationSenderObserver> {

	GLVariableSpeedSlider* timelineSlider;
	NBButton* briefRewindButton;
	NSTimer* playbackTimer;
	double totalDuration;
	NBButton* playButton;
	UIImageView* openTimelineTabView;
	UITapGestureRecognizer* openTimelineGestureReco;
	NBRecordingTimelineLabel* timerLabel;
	NSTimer* recordingUpdateTimer;
	double cumulativeExistingDuration;
	NSLayoutConstraint* openTimelineTabCenterConstraint;
	NSArray* constraintsInPlace;
	char isRecording;
	char shouldSwitchToReadOnlyOnPlay;
	char playbackPreppedButTimeHasNotChanged;
	char _allowsEditing;
	char _multinoteMode;
	char _toolbarIsOpen;
	char _isSuperCompact;
	float iphoneTabHeight;
	GingerLabsRecordingsLibrary* _recordingLibrary;
	int _universalSizeClass;
	id<NBTimelineViewTabCenteringProtocol> _tabCenteringDelegate;
	id<NBTimelineViewDelegate> _inputToolDelegate;
	RecordingManagerTableViewController* _recordingManagerVC;
	UINavigationController* _recordingManagerNavVC;
	NBPlaybackManagerTableViewController* _playbackManagerVC;
	UINavigationController* _playbackManagerNavVC;
	GLIPhonePopoverView* _playbackManagerIPhonePopoverView;
	NBButton* _playbackAndRecordingSettingsButton;
	NBButton* _playbackSpeedToggle;
	float _playbackSpeed;
	float _playbackSpeedToggleWidth;
	NBButton* _volumeButton;
	NBRecordingTimelineLabel* _timelineSliderTimeLabel;
	NBVolumeSliderViewController* _volumeViewController;
	NBButton* _disclosureButton;
	UIView* _bottomSeparator;
	NSLayoutConstraint* _timerLabelHorizontalConstraint;

}

@property (nonatomic,retain) RecordingManagerTableViewController * recordingManagerVC;                        //@synthesize recordingManagerVC=_recordingManagerVC - In the implementation block
@property (nonatomic,retain) UINavigationController * recordingManagerNavVC;                                  //@synthesize recordingManagerNavVC=_recordingManagerNavVC - In the implementation block
@property (nonatomic,retain) NBPlaybackManagerTableViewController * playbackManagerVC;                        //@synthesize playbackManagerVC=_playbackManagerVC - In the implementation block
@property (nonatomic,retain) UINavigationController * playbackManagerNavVC;                                   //@synthesize playbackManagerNavVC=_playbackManagerNavVC - In the implementation block
@property (nonatomic,retain) GLIPhonePopoverView * playbackManagerIPhonePopoverView;                          //@synthesize playbackManagerIPhonePopoverView=_playbackManagerIPhonePopoverView - In the implementation block
@property (nonatomic,retain) NBButton * playbackAndRecordingSettingsButton;                                   //@synthesize playbackAndRecordingSettingsButton=_playbackAndRecordingSettingsButton - In the implementation block
@property (nonatomic,retain) NBButton * playbackSpeedToggle;                                                  //@synthesize playbackSpeedToggle=_playbackSpeedToggle - In the implementation block
@property (assign,nonatomic) float playbackSpeed;                                                             //@synthesize playbackSpeed=_playbackSpeed - In the implementation block
@property (assign,nonatomic) float playbackSpeedToggleWidth;                                                  //@synthesize playbackSpeedToggleWidth=_playbackSpeedToggleWidth - In the implementation block
@property (nonatomic,retain) NBButton * volumeButton;                                                         //@synthesize volumeButton=_volumeButton - In the implementation block
@property (nonatomic,retain) NBRecordingTimelineLabel * timelineSliderTimeLabel;                              //@synthesize timelineSliderTimeLabel=_timelineSliderTimeLabel - In the implementation block
@property (nonatomic,retain) NBVolumeSliderViewController * volumeViewController;                             //@synthesize volumeViewController=_volumeViewController - In the implementation block
@property (nonatomic,retain) NBButton * disclosureButton;                                                     //@synthesize disclosureButton=_disclosureButton - In the implementation block
@property (assign,nonatomic) char toolbarIsOpen;                                                              //@synthesize toolbarIsOpen=_toolbarIsOpen - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparator;                                                      //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * timerLabelHorizontalConstraint;                             //@synthesize timerLabelHorizontalConstraint=_timerLabelHorizontalConstraint - In the implementation block
@property (assign,nonatomic) char isSuperCompact;                                                             //@synthesize isSuperCompact=_isSuperCompact - In the implementation block
@property (nonatomic,retain) GingerLabsRecordingsLibrary * recordingLibrary;                                  //@synthesize recordingLibrary=_recordingLibrary - In the implementation block
@property (nonatomic,readonly) float iphoneTabHeight; 
@property (nonatomic,readonly) char isOpen; 
@property (assign,nonatomic) int universalSizeClass;                                                          //@synthesize universalSizeClass=_universalSizeClass - In the implementation block
@property (assign,nonatomic,__weak) id<NBTimelineViewTabCenteringProtocol> tabCenteringDelegate;              //@synthesize tabCenteringDelegate=_tabCenteringDelegate - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                                              //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char multinoteMode;                                                              //@synthesize multinoteMode=_multinoteMode - In the implementation block
@property (assign,nonatomic,__weak) id<NBTimelineViewDelegate> inputToolDelegate;                             //@synthesize inputToolDelegate=_inputToolDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInputToolDelegate:(id<NBTimelineViewDelegate>)arg1 ;
-(void)setUniversalSizeClass:(int)arg1 ;
-(GingerLabsRecordingsLibrary *)recordingLibrary;
-(void)setRecordingLibrary:(GingerLabsRecordingsLibrary *)arg1 ;
-(int)universalSizeClass;
-(void)setTabCenteringDelegate:(id<NBTimelineViewTabCenteringProtocol>)arg1 ;
-(void)showDeleteRecordingTip;
-(void)audioTuningViewControllerRequestsDismissal:(id)arg1 ;
-(void)togglePlay;
-(void)showHidePlaybackManagerAnimated:(char)arg1 ;
-(void)togglePlaybackSpeed;
-(void)setPlaybackSpeedToggleWidth:(float)arg1 ;
-(NBButton *)playbackSpeedToggle;
-(void)showHideVolumeViewControllerAnimated:(char)arg1 ;
-(void)setTimerLabelHorizontalConstraint:(NSLayoutConstraint *)arg1 ;
-(char)toolbarIsOpen;
-(void)initContentPlaybackPopover;
-(NBRecordingTimelineLabel *)timelineSliderTimeLabel;
-(void)didRotateToOrientation:(id)arg1 ;
-(char)isSuperCompact;
-(char)multinoteMode;
-(NBButton *)volumeButton;
-(void)updateVolumeButton:(float)arg1 ;
-(void)setPlaybackManagerVC:(NBPlaybackManagerTableViewController *)arg1 ;
-(NBPlaybackManagerTableViewController *)playbackManagerVC;
-(void)setPlaybackManagerNavVC:(UINavigationController *)arg1 ;
-(UINavigationController *)playbackManagerNavVC;
-(void)setPlaybackManagerIPhonePopoverView:(GLIPhonePopoverView *)arg1 ;
-(GLIPhonePopoverView *)playbackManagerIPhonePopoverView;
-(RecordingManagerTableViewController *)recordingManagerVC;
-(void)refreshRecordingsDisplay;
-(void)setLabelToRecordingLength;
-(void)updatePlayButtonState;
-(void)updatePlayheadLocation;
-(void)updatePlaybackSpeedToggle;
-(void)startPlaybackTimer;
-(void)setIsSuperCompact:(char)arg1 ;
-(id<NBTimelineViewTabCenteringProtocol>)tabCenteringDelegate;
-(NBButton *)playbackAndRecordingSettingsButton;
-(float)playbackSpeedToggleWidth;
-(void)prepForPlayback;
-(void)stopPlaybackTimer;
-(void)recordingUpdate;
-(id<NBTimelineViewDelegate>)inputToolDelegate;
-(void)recordingListChanged;
-(void)setToolbarIsOpen:(char)arg1 ;
-(void)recordingDidBegin;
-(void)recordingDidEnd;
-(void)_didRotate;
-(void)showHidePopupController:(id)arg1 fromView:(id)arg2 animated:(char)arg3 ;
-(void)setVolumeViewController:(NBVolumeSliderViewController *)arg1 ;
-(void)setRecordingManagerVC:(RecordingManagerTableViewController *)arg1 ;
-(void)setRecordingManagerNavVC:(UINavigationController *)arg1 ;
-(UINavigationController *)recordingManagerNavVC;
-(void)sliderWillBeginSliding:(id)arg1 ;
-(void)slider:(id)arg1 didChangeValue:(float)arg2 ;
-(void)sliderDidEndSliding:(id)arg1 ;
-(void)volumeSliderDidTapAudioTuning:(id)arg1 ;
-(void)playbackManagerViewControllerShouldShowRecordingManager:(id)arg1 ;
-(void)recordingManagerViewControllerSwitchingToPlaybackManager:(id)arg1 ;
-(float)iphoneTabHeight;
-(void)volumeButtonAction;
-(void)timelineSliderAction;
-(void)nextButtonAction;
-(void)prevButtonAction;
-(void)closeButtonAction;
-(void)setMultinoteMode:(char)arg1 ;
-(void)setPlaybackAndRecordingSettingsButton:(NBButton *)arg1 ;
-(void)setPlaybackSpeedToggle:(NBButton *)arg1 ;
-(void)setVolumeButton:(NBButton *)arg1 ;
-(void)setTimelineSliderTimeLabel:(NBRecordingTimelineLabel *)arg1 ;
-(NSLayoutConstraint *)timerLabelHorizontalConstraint;
-(void)handleNotification:(id)arg1 ;
-(void)setHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(NBVolumeSliderViewController *)volumeViewController;
-(char)isOpen;
-(UIView *)bottomSeparator;
-(void)setDisclosureButton:(NBButton *)arg1 ;
-(NBButton *)disclosureButton;
@end
