/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NBTextCursor;
@class UIColor;

@interface NBTextHighlight : NSObject {

	id<NBTextCursor> _cursor;
	UIColor* _color;

}

@property (nonatomic,retain) id<NBTextCursor> cursor;              //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,retain) UIColor * color;                      //@synthesize color=_color - In the implementation block
+(id)textHighlightWithCursor:(id)arg1 color:(id)arg2 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id<NBTextCursor>)cursor;
-(void)setCursor:(id<NBTextCursor>)arg1 ;
@end
