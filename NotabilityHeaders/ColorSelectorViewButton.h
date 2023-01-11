/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIButton.h>

@class ColorDisplayView, OutlineView;

@interface ColorSelectorViewButton : UIButton {

	ColorDisplayView* displayView;
	OutlineView* outlineView;
	char mySelected;
	char ignoreAlpha;

}

@property (nonatomic,retain) OutlineView * outlineView; 
@property (nonatomic,retain) ColorDisplayView * displayView; 
@property (assign,nonatomic) char mySelected; 
@property (assign,nonatomic) char ignoreAlpha; 
-(void)setIgnoreAlpha:(char)arg1 ;
-(char)mySelected;
-(void)setMySelected:(char)arg1 ;
-(char)ignoreAlpha;
-(void)setDisplayView:(ColorDisplayView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(ColorDisplayView *)displayView;
-(void)setOutlineView:(OutlineView *)arg1 ;
-(OutlineView *)outlineView;
@end
