/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor;

@interface PenStylePreviewButton : UIButton {

	float width;
	UIColor* color;
	char variableWidth;

}

@property (assign,nonatomic) float width; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,getter=isVariableWidth,nonatomic) char variableWidth; 
-(void)setVariableWidth:(char)arg1 ;
-(char)isVariableWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(float)width;
-(void)setWidth:(float)arg1 ;
@end
