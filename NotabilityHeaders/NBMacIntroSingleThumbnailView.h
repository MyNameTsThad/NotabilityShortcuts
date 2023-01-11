/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface NBMacIntroSingleThumbnailView : UIView {

	UIImageView* _backingImageView;
	float _thumbnailScale;

}
-(id)initThumbnailViewWithNumber:(int)arg1 ;
-(void)resetThumbnailScale;
-(CGSize)intrinsicContentSize;
-(void)setThumbnailScale:(float)arg1 ;
@end

