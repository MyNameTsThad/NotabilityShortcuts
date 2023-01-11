/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface NBOrganizersBundle : NSObject {

	NSArray* _allOrganizers;
	NSArray* _visibleOrganizers;
	NSArray* _topLevelOrganizers;
	NSArray* _allCategories;
	NSDictionary* _childrenByCategory;

}

@property (nonatomic,retain) NSArray * allOrganizers;                        //@synthesize allOrganizers=_allOrganizers - In the implementation block
@property (nonatomic,retain) NSArray * visibleOrganizers;                    //@synthesize visibleOrganizers=_visibleOrganizers - In the implementation block
@property (nonatomic,retain) NSArray * topLevelOrganizers;                   //@synthesize topLevelOrganizers=_topLevelOrganizers - In the implementation block
@property (nonatomic,retain) NSArray * allCategories;                        //@synthesize allCategories=_allCategories - In the implementation block
@property (nonatomic,retain) NSDictionary * childrenByCategory;              //@synthesize childrenByCategory=_childrenByCategory - In the implementation block
-(NSArray *)allOrganizers;
-(NSArray *)visibleOrganizers;
-(unsigned)numberOfSpecialOrganizers;
-(id)initWithOrganizers:(id)arg1 ;
-(id)bundleByAddingOrganizer:(id)arg1 atIndex:(int)arg2 ;
-(unsigned)visibleOrganizersCount;
-(id)visibleOrganizerAtIndex:(int)arg1 ;
-(id)childrenOfCategory:(id)arg1 ;
-(NSArray *)allCategories;
-(id)organizerAtIndex:(int)arg1 ;
-(void)setVisibleOrganizers:(NSArray *)arg1 ;
-(id)initWithAllOrganizers:(id)arg1 ;
-(NSArray *)topLevelOrganizers;
-(NSDictionary *)childrenByCategory;
-(id)bundleByRemovingOrganizer:(id)arg1 ;
-(id)bundleByMovingOrganizer:(id)arg1 toIndex:(int)arg2 ;
-(id)topLevelOrganizerAtIndex:(int)arg1 ;
-(unsigned)allOrganizersCount;
-(unsigned)topLevelOrganizersCount;
-(id)childOfCategory:(id)arg1 atIndex:(int)arg2 ;
-(void)setAllOrganizers:(NSArray *)arg1 ;
-(void)setTopLevelOrganizers:(NSArray *)arg1 ;
-(void)setAllCategories:(NSArray *)arg1 ;
-(void)setChildrenByCategory:(NSDictionary *)arg1 ;
@end
