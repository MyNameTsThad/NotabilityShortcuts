/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:07 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UITableViewController.h>

@class NSArray;

@interface GLUtilityTableViewController : UITableViewController {

	NSArray* _cellData;
	NSArray* _headers;
	char shouldResizeSelfForTableContentSize;
	int _cellSelectionStyle;

}

@property (nonatomic,retain) NSArray * cellData;                                    //@synthesize cellData=_cellData - In the implementation block
@property (nonatomic,retain) NSArray * headers;                                     //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) char shouldResizeSelfForTableContentSize; 
@property (assign,nonatomic) int cellSelectionStyle;                                //@synthesize cellSelectionStyle=_cellSelectionStyle - In the implementation block
-(void)setCellSelectionStyle:(int)arg1 ;
-(id)cellDataAtIndexPath:(id)arg1 ;
-(int)cellSelectionStyle;
-(char)shouldResizeSelfForTableContentSize;
-(void)setShouldResizeSelfForTableContentSize:(char)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(id)initWithStyle:(int)arg1 ;
-(CGSize)popoverContentSize;
-(void)setCellData:(NSArray *)arg1 ;
-(NSArray *)headers;
-(void)setHeaders:(NSArray *)arg1 ;
-(NSArray *)cellData;
@end
