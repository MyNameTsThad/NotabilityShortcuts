/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/NIToolbar.h>

@class NSString, NILabel;

@interface NILibraryTopToolbar : NIToolbar {

	char _clouding;
	char _editing;
	char _searching;
	NSString* _title;
	NILabel* _titleLabel;

}

@property (nonatomic,readonly) NILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char clouding;                       //@synthesize clouding=_clouding - In the implementation block
@property (assign,nonatomic) char editing;                        //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) char searching;                      //@synthesize searching=_searching - In the implementation block
@property (nonatomic,copy) NSString * title;                      //@synthesize title=_title - In the implementation block
+(id)newPersonalityToolbar;
+(id)newPersonalityToolbarWithCompactLayout:(char)arg1 ;
-(void)dealloc;
-(void)adoptCustomColoringByEditingCloudingSearchingState;
-(id)initWithRegularLayout;
-(char)clouding;
-(void)setClouding:(char)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)textAttributesForState:(unsigned)arg1 ;
-(void)setItems:(id)arg1 animated:(char)arg2 ;
-(NILabel *)titleLabel;
-(char)editing;
-(void)setEditing:(char)arg1 ;
-(void)setSearching:(char)arg1 ;
-(char)searching;
-(void)updateUI;
@end

