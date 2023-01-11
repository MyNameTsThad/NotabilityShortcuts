/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:07 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol NBThemePickerThemeGroupPreviewDelegate;
@class NSArray, UIImage;

@interface NBThemePickerThemeGroupPreview : UIView {

	char _previewable;
	id<NBThemePickerThemeGroupPreviewDelegate> _themeGroupPreviewDelegate;
	NSArray* _previewContainers;
	NSArray* _topBarPreviewImageViews;
	NSArray* _bottomAreaPreviewImageViews;
	NSArray* _verticalSeparators;
	unsigned _count;
	UIImage* _checkmarkImage;

}

@property (nonatomic,retain) NSArray * previewContainers;                                                              //@synthesize previewContainers=_previewContainers - In the implementation block
@property (nonatomic,retain) NSArray * topBarPreviewImageViews;                                                        //@synthesize topBarPreviewImageViews=_topBarPreviewImageViews - In the implementation block
@property (nonatomic,retain) NSArray * bottomAreaPreviewImageViews;                                                    //@synthesize bottomAreaPreviewImageViews=_bottomAreaPreviewImageViews - In the implementation block
@property (nonatomic,retain) NSArray * verticalSeparators;                                                             //@synthesize verticalSeparators=_verticalSeparators - In the implementation block
@property (assign,nonatomic) unsigned count;                                                                           //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) char previewable;                                                                         //@synthesize previewable=_previewable - In the implementation block
@property (nonatomic,retain) UIImage * checkmarkImage;                                                                 //@synthesize checkmarkImage=_checkmarkImage - In the implementation block
@property (assign,nonatomic,__weak) id<NBThemePickerThemeGroupPreviewDelegate> themeGroupPreviewDelegate;              //@synthesize themeGroupPreviewDelegate=_themeGroupPreviewDelegate - In the implementation block
-(char)previewable;
-(void)themeTapAction:(id)arg1 ;
-(void)setPreviewContainers:(NSArray *)arg1 ;
-(void)setBottomAreaPreviewImageViews:(NSArray *)arg1 ;
-(void)setTopBarPreviewImageViews:(NSArray *)arg1 ;
-(void)setVerticalSeparators:(NSArray *)arg1 ;
-(NSArray *)topBarPreviewImageViews;
-(NSArray *)bottomAreaPreviewImageViews;
-(id<NBThemePickerThemeGroupPreviewDelegate>)themeGroupPreviewDelegate;
-(id)initWithPersonalityCount:(unsigned)arg1 previewable:(char)arg2 ;
-(void)setPersonalityGroup:(id)arg1 indexTag:(unsigned)arg2 ;
-(void)setThemeGroupPreviewDelegate:(id<NBThemePickerThemeGroupPreviewDelegate>)arg1 ;
-(NSArray *)previewContainers;
-(NSArray *)verticalSeparators;
-(void)setPreviewable:(char)arg1 ;
-(void)setCheckmarkImage:(UIImage *)arg1 ;
-(unsigned)count;
-(void)didMoveToSuperview;
-(void)setCount:(unsigned)arg1 ;
-(UIImage *)checkmarkImage;
@end

