/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/NIOrganizerContentView.h>

@class UIImageView, UIView, NSArray, NBCategory;

@interface NIDividerContentView : NIOrganizerContentView {

	UIImageView* _disclosureArrow;
	UIView* _disclosureContainerView;
	NSArray* _allConstraints;

}

@property (nonatomic,retain) UIImageView * disclosureArrow;                 //@synthesize disclosureArrow=_disclosureArrow - In the implementation block
@property (nonatomic,retain) UIView * disclosureContainerView;              //@synthesize disclosureContainerView=_disclosureContainerView - In the implementation block
@property (nonatomic,retain) NSArray * allConstraints;                      //@synthesize allConstraints=_allConstraints - In the implementation block
@property (nonatomic,readonly) NBCategory * category; 
+(id)keyPathsForValuesAffectingCategory;
-(void)dealloc;
-(UIView *)disclosureContainerView;
-(void)setDisclosureContainerView:(UIView *)arg1 ;
-(void)setDisclosureArrow:(UIImageView *)arg1 ;
-(void)updateArrowAndNumberLabel;
-(id)nameDecorator;
-(id)init;
-(void)setCategory:(NBCategory *)arg1 ;
-(NBCategory *)category;
-(void)updateConstraints;
-(UIImageView *)disclosureArrow;
-(NSArray *)allConstraints;
-(void)setAllConstraints:(NSArray *)arg1 ;
@end

