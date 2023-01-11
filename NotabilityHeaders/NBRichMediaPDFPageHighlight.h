/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class UIColor;

@interface NBRichMediaPDFPageHighlight : NSObject {

	CGPathRef _pagePath;
	UIColor* _highlightColor;

}

@property (nonatomic,readonly) CGPathRef pagePath;                    //@synthesize pagePath=_pagePath - In the implementation block
@property (nonatomic,readonly) UIColor * highlightColor;              //@synthesize highlightColor=_highlightColor - In the implementation block
-(id)initWithPagePath:(CGPathRef)arg1 highlightColor:(id)arg2 ;
-(CGPathRef)pagePath;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(UIColor *)highlightColor;
@end

