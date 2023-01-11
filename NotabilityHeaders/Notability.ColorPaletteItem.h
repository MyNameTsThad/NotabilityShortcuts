/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, NSString;

@interface Notability.ColorPaletteItem : NSObject {

	 name;
	 highlighterAlpha;
	 rgba;
	 uniqueID;

}

@property (readonly,nonatomic) UIColor * penColor; 
@property (readonly,nonatomic) UIColor * highlighterColor; 
@property (copy,nonatomic) NSString * name; 
@property (assign,nonatomic) float highlighterAlpha; 
@property (copy,nonatomic) NSString * uniqueID; 
-(id)initFromPlist:(id)arg1 ;
-(id)plist;
-(UIColor *)penColor;
-(id)initWithName:(id)arg1 color:(id)arg2 ;
-(UIColor *)highlighterColor;
-(id)initWithName:(id)arg1 color:(id)arg2 uniqueID:(id)arg3 ;
-(float)highlighterAlpha;
-(void)setHighlighterAlpha:(float)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
@end

