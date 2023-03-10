/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol NIExportMenuControllerDelegate;
@class UITableView, NSArray, NIExportConfigurationViewController, NSString;

@interface NIExportDestinationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* tableView;
	NSArray* exportDestinations;
	NIExportConfigurationViewController* exportMainMenu;
	char displayImageOptions;
	char displayRecordingOptions;
	char _presentedFromNoteView;
	char _exportingMultipleNotes;
	id<NIExportMenuControllerDelegate> exportMenuDelegate;

}

@property (assign,nonatomic,__weak) id<NIExportMenuControllerDelegate> exportMenuDelegate; 
@property (assign,nonatomic) char displayImageOptions; 
@property (assign,nonatomic) char displayRecordingOptions; 
@property (assign,nonatomic) char presentedFromNoteView;                                                //@synthesize presentedFromNoteView=_presentedFromNoteView - In the implementation block
@property (assign,nonatomic) char exportingMultipleNotes;                                               //@synthesize exportingMultipleNotes=_exportingMultipleNotes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithExportMenuController:(id)arg1 ;
-(void)filterExportDestinations;
-(void)resize;
-(char)exportingMultipleNotes;
-(char)presentedFromNoteView;
-(void)doneAction;
-(Class)exportClassForIndexPath:(id)arg1 ;
-(void)setPresentedFromNoteView:(char)arg1 ;
-(void)setExportingMultipleNotes:(char)arg1 ;
-(void)showDoneButton:(char)arg1 ;
-(char)displayImageOptions;
-(void)setDisplayImageOptions:(char)arg1 ;
-(char)displayRecordingOptions;
-(void)setDisplayRecordingOptions:(char)arg1 ;
-(id<NIExportMenuControllerDelegate>)exportMenuDelegate;
-(void)setExportMenuDelegate:(id<NIExportMenuControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

