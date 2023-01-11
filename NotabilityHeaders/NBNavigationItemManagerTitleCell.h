/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/NBPageManagerTableViewCell.h>

@protocol NBNavigationItemManagerTitleCellDataSource;
@class UILabel;

@interface NBNavigationItemManagerTitleCell : NBPageManagerTableViewCell {

	id<NBNavigationItemManagerTitleCellDataSource> _dataSource;
	UILabel* _titleLabel;

}

@property (assign,nonatomic,__weak) id<NBNavigationItemManagerTitleCellDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                          //@synthesize titleLabel=_titleLabel - In the implementation block
-(float)heightToFitText;
-(void)setDataSource:(id<NBNavigationItemManagerTitleCellDataSource>)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<NBNavigationItemManagerTitleCellDataSource>)dataSource;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

