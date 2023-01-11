/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol NBAddSubjectDelegate;
@class UITableView, NISubjectCell, NIDividerCell, NSString;

@interface NBAddSubjectViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<NBAddSubjectDelegate> _delegate;
	UITableView* _tableView;
	NISubjectCell* _subjectCell;
	NIDividerCell* _dividerCell;
	int _dividerSection;

}

@property (nonatomic,readonly) UITableView * tableView;                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NISubjectCell * subjectCell;                           //@synthesize subjectCell=_subjectCell - In the implementation block
@property (nonatomic,retain) NIDividerCell * dividerCell;                           //@synthesize dividerCell=_dividerCell - In the implementation block
@property (assign,nonatomic) int dividerSection;                                    //@synthesize dividerSection=_dividerSection - In the implementation block
@property (assign,nonatomic,__weak) id<NBAddSubjectDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addSubjectAction;
-(void)setDividerCell:(NIDividerCell *)arg1 ;
-(void)setSubjectCell:(NISubjectCell *)arg1 ;
-(NISubjectCell *)subjectCell;
-(void)updateSubjectCellToCurrentColorNumber;
-(int)dividerSection;
-(void)addCategoryAction;
-(NIDividerCell *)dividerCell;
-(void)setDividerSection:(int)arg1 ;
-(void)setDelegate:(id<NBAddSubjectDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<NBAddSubjectDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
@end

