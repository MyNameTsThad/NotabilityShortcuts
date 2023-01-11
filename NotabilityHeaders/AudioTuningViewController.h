/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:07 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIViewController.h>

@protocol AudioTuningViewControllerDelegate;
@class AudioTuningView;

@interface AudioTuningViewController : UIViewController {

	id<AudioTuningViewControllerDelegate> _delegate;
	AudioTuningView* _audioTuningView;

}

@property (nonatomic,retain) AudioTuningView * audioTuningView;                                  //@synthesize audioTuningView=_audioTuningView - In the implementation block
@property (assign,nonatomic,__weak) id<AudioTuningViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setAudioTuningView:(AudioTuningView *)arg1 ;
-(void)backButtonAction;
-(AudioTuningView *)audioTuningView;
-(void)setDelegate:(id<AudioTuningViewControllerDelegate>)arg1 ;
-(id<AudioTuningViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
@end

