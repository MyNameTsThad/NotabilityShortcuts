/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/NBColorCollectionViewControllerColorSource.h>

@class NSArray, NSString;

@interface NBOrganizerColorManager : NSObject <NBColorCollectionViewControllerColorSource> {

	NSArray* _libraryColorArray;
	NSArray* _libraryAltColorArray;
	NSArray* _organizerColors;

}

@property (nonatomic,retain) NSArray * libraryColorArray;                 //@synthesize libraryColorArray=_libraryColorArray - In the implementation block
@property (nonatomic,retain) NSArray * libraryAltColorArray;              //@synthesize libraryAltColorArray=_libraryAltColorArray - In the implementation block
@property (nonatomic,retain) NSArray * organizerColors;                   //@synthesize organizerColors=_organizerColors - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(int)mappedColorNumber:(int)arg1 ;
-(NSArray *)libraryColorArray;
-(int)mappedAltColorNumber:(int)arg1 ;
-(NSArray *)libraryAltColorArray;
-(int)numberOfLibraryColors;
-(int)mappedColorNumber:(int)arg1 withTotalColorCount:(int)arg2 ;
-(int)numberOfAltLibraryColors;
-(NSArray *)organizerColors;
-(NSRange)customColorIndexRange;
-(id)colorForColorNumber:(int)arg1 ;
-(id)altColorForColorNumber:(int)arg1 ;
-(void)setLibraryColorArray:(NSArray *)arg1 ;
-(void)setLibraryAltColorArray:(NSArray *)arg1 ;
-(void)setOrganizerColors:(NSArray *)arg1 ;
-(id)init;
-(id)colors;
@end
