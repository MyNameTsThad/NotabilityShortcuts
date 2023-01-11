/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/NIBorderedImageView.h>

@class NSNumber, UILabel;

@interface NIBorderedPagedImageView : NIBorderedImageView {

	NSNumber* _pageNumber;
	UILabel* _pageNumberLabel;

}

@property (nonatomic,readonly) UILabel * pageNumberLabel;              //@synthesize pageNumberLabel=_pageNumberLabel - In the implementation block
@property (nonatomic,retain) NSNumber * pageNumber;                    //@synthesize pageNumber=_pageNumber - In the implementation block
-(UILabel *)pageNumberLabel;
-(void)_sharedPagedInit;
-(void)_updatePageNumberLabel;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSNumber *)pageNumber;
-(void)setPageNumber:(NSNumber *)arg1 ;
@end
