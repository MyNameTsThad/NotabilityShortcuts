/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:07 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLCollectionViewCircleCell.h>

@class UIButton, UIImageView;

@interface GLCollectionViewColorCell : GLCollectionViewCircleCell {

	/*^block*/id _editColorAction;
	/*^block*/id _deleteColorAction;
	UIButton* _directionButton;
	UIImageView* _customizeImageView;

}

@property (nonatomic,retain) UIButton * directionButton;                    //@synthesize directionButton=_directionButton - In the implementation block
@property (nonatomic,retain) UIImageView * customizeImageView;              //@synthesize customizeImageView=_customizeImageView - In the implementation block
@property (nonatomic,copy) id editColorAction;                              //@synthesize editColorAction=_editColorAction - In the implementation block
@property (nonatomic,copy) id deleteColorAction;                            //@synthesize deleteColorAction=_deleteColorAction - In the implementation block
-(void)hideControl;
-(void)setHiddenForCommonViews:(char)arg1 directionButton:(char)arg2 customizeButton:(char)arg3 ;
-(UIImageView *)customizeImageView;
-(void)setCustomizeImageView:(UIImageView *)arg1 ;
-(UIButton *)directionButton;
-(void)setDirectionButton:(UIButton *)arg1 ;
-(void)directionButtonAction:(id)arg1 ;
-(char)directionEnabled:(int)arg1 ;
-(void)editColorAction:(id)arg1 ;
-(id)editColorAction;
-(void)deleteColorAction:(id)arg1 ;
-(id)deleteColorAction;
-(void)setEditColorAction:(id)arg1 ;
-(void)setDeleteColorAction:(id)arg1 ;
-(void)dealloc;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setContentProvider:(id)arg1 ;
-(void)setup;
@end

