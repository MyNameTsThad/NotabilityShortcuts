/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSDictionary;

@interface GLUpdatingViewContext : NSObject {

	NSMutableDictionary* _attributes;
	NSArray* _displayedItems;

}

@property (nonatomic,retain) NSArray * displayedItems;               //@synthesize displayedItems=_displayedItems - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)contextWithDisplayedItems:(id)arg1 ;
-(void)addAttribute:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)displayedItems;
-(void)setDisplayedItems:(NSArray *)arg1 ;
-(id)init;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end

