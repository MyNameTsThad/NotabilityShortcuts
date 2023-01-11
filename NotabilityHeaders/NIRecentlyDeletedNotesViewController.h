/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UIBarButtonItem, UITableView, UIView, NILabel, NBButton, NSString;

@interface NIRecentlyDeletedNotesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _sortedDocumentPaths;
	NSArray* _sortedDocuments;
	UIBarButtonItem* _selectAllBarButtonItem;
	UIBarButtonItem* _deselectAllBarButtonItem;
	UITableView* _notesTableView;
	UIView* _footerView;
	NILabel* _emptyLabel;
	NILabel* _explanatoryText;
	NBButton* _recoverButton;
	NBButton* _deleteButton;
	int _universalSizeClass;

}

@property (nonatomic,retain) NSArray * sortedDocumentPaths;                           //@synthesize sortedDocumentPaths=_sortedDocumentPaths - In the implementation block
@property (nonatomic,retain) NSArray * sortedDocuments;                               //@synthesize sortedDocuments=_sortedDocuments - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * selectAllBarButtonItem;                //@synthesize selectAllBarButtonItem=_selectAllBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deselectAllBarButtonItem;              //@synthesize deselectAllBarButtonItem=_deselectAllBarButtonItem - In the implementation block
@property (nonatomic,retain) UITableView * notesTableView;                            //@synthesize notesTableView=_notesTableView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                     //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) NILabel * emptyLabel;                                    //@synthesize emptyLabel=_emptyLabel - In the implementation block
@property (nonatomic,retain) NILabel * explanatoryText;                               //@synthesize explanatoryText=_explanatoryText - In the implementation block
@property (nonatomic,retain) NBButton * recoverButton;                                //@synthesize recoverButton=_recoverButton - In the implementation block
@property (nonatomic,retain) NBButton * deleteButton;                                 //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,nonatomic) int universalSizeClass;                                  //@synthesize universalSizeClass=_universalSizeClass - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUniversalSizeClass:(int)arg1 ;
-(int)universalSizeClass;
-(NSArray *)sortedDocuments;
-(void)setSortedDocuments:(NSArray *)arg1 ;
-(UITableView *)notesTableView;
-(void)selectAllAction:(id)arg1 ;
-(void)setSelectAllBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)deselectAllAction:(id)arg1 ;
-(void)setDeselectAllBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setNotesTableView:(UITableView *)arg1 ;
-(void)setExplanatoryText:(NILabel *)arg1 ;
-(NSArray *)sortedDocumentPaths;
-(void)reloadDocumentsAndDismissIfEmpty:(char)arg1 ;
-(void)setRecoverButton:(NBButton *)arg1 ;
-(void)setSortedDocumentPaths:(NSArray *)arg1 ;
-(NBButton *)recoverButton;
-(void)updateNavBarPersonality:(id)arg1 ;
-(UIBarButtonItem *)deselectAllBarButtonItem;
-(UIBarButtonItem *)selectAllBarButtonItem;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)updateButtons;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(NILabel *)explanatoryText;
-(NBButton *)deleteButton;
-(void)setDeleteButton:(NBButton *)arg1 ;
-(void)setEmptyLabel:(NILabel *)arg1 ;
-(NILabel *)emptyLabel;
-(void)doneAction:(id)arg1 ;
@end

