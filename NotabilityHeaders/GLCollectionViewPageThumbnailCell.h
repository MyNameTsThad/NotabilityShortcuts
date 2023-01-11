/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLCollectionViewCell.h>

@class GLCollectionViewPageThumbnailCellState, UIImage, UILabel, NIBorderedPagedImageView;

@interface GLCollectionViewPageThumbnailCell : GLCollectionViewCell {

	GLCollectionViewPageThumbnailCellState* _state;
	UIImage* _thumbnail;
	UILabel* _pageNumberLabel;
	NIBorderedPagedImageView* _thumbnailView;

}

@property (nonatomic,retain) GLCollectionViewPageThumbnailCellState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                                         //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) UILabel * pageNumberLabel;                                 //@synthesize pageNumberLabel=_pageNumberLabel - In the implementation block
@property (nonatomic,readonly) NIBorderedPagedImageView * thumbnailView;                  //@synthesize thumbnailView=_thumbnailView - In the implementation block
-(char)shouldShowBorder;
-(void)_renderPageWithProvider:(id)arg1 ;
-(float)contentViewCornerRadius;
-(UILabel *)pageNumberLabel;
-(void)layoutSubviews;
-(GLCollectionViewPageThumbnailCellState *)state;
-(void)setState:(GLCollectionViewPageThumbnailCellState *)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setContentProvider:(id)arg1 ;
-(NIBorderedPagedImageView *)thumbnailView;
-(void)setup;
@end

