/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface GLCustomTableViewCell : UITableViewCell {

	char _useDefaultAccessories;
	float _horizontalInset;
	UIColor* _textColor;
	UIColor* _selectedTextColor;

}

@property (assign,nonatomic) float horizontalInset;                    //@synthesize horizontalInset=_horizontalInset - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedTextColor;              //@synthesize selectedTextColor=_selectedTextColor - In the implementation block
@property (assign) char useDefaultAccessories;                         //@synthesize useDefaultAccessories=_useDefaultAccessories - In the implementation block
-(void)setHorizontalInset:(float)arg1 ;
-(void)setUseDefaultAccessories:(char)arg1 ;
-(char)useDefaultAccessories;
-(void)insetView:(id)arg1 ;
-(void)shiftViewLeft:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setAccessoryType:(int)arg1 ;
-(void)setSelectedTextColor:(UIColor *)arg1 ;
-(UIColor *)selectedTextColor;
-(float)horizontalInset;
@end

