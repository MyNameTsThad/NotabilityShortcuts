/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, NSString;

@interface NBRecordButton : UIButton {

	char _isRecording;
	float _decibelLevel;
	UIImageView* _levelMeter;
	float _percentageLevel;
	NSString* _recordImageKey;
	NSString* _stopImageKey;

}

@property (nonatomic,retain) UIImageView * levelMeter;               //@synthesize levelMeter=_levelMeter - In the implementation block
@property (assign,nonatomic) float percentageLevel;                  //@synthesize percentageLevel=_percentageLevel - In the implementation block
@property (nonatomic,retain) NSString * recordImageKey;              //@synthesize recordImageKey=_recordImageKey - In the implementation block
@property (nonatomic,retain) NSString * stopImageKey;                //@synthesize stopImageKey=_stopImageKey - In the implementation block
@property (assign,nonatomic) char isRecording;                       //@synthesize isRecording=_isRecording - In the implementation block
@property (assign,nonatomic) float decibelLevel;                     //@synthesize decibelLevel=_decibelLevel - In the implementation block
+(id)recordButton;
-(void)setDecibelLevel:(float)arg1 ;
-(void)setIsRecording:(char)arg1 ;
-(void)setRecordImageKey:(NSString *)arg1 ;
-(void)setStopImageKey:(NSString *)arg1 ;
-(NSString *)recordImageKey;
-(void)setPercentageLevel:(float)arg1 ;
-(void)setLevelMeter:(UIImageView *)arg1 ;
-(UIImageView *)levelMeter;
-(NSString *)stopImageKey;
-(float)percentageLevel;
-(float)percentageLevelFromDecibelLevel:(float)arg1 ;
-(float)decibelLevel;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(char)isRecording;
@end

