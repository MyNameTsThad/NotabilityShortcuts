/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/GLCollectionViewContentProvider.h>

@class UIColor;

@interface GLCollectionViewPenStyleContentProvider : GLCollectionViewContentProvider {

	char _variableWidth;
	float _width;
	UIColor* _color;

}

@property (assign,nonatomic) char variableWidth;              //@synthesize variableWidth=_variableWidth - In the implementation block
@property (assign,nonatomic) float width;                     //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) UIColor * color;                 //@synthesize color=_color - In the implementation block
+(id)reuseIdentifier;
+(Class)cellClass;
-(char)variableWidth;
-(void)setVariableWidth:(char)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(float)width;
-(void)setWidth:(float)arg1 ;
@end
