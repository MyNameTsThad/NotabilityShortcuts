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

@class NSArray, NBOrganizer, NSString, UITableView, NBButton, NBPersonality;

@interface NISimpleOrganizerPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	char _showButton;
	NSArray* _organizers;
	NBOrganizer* _selectedOrganizer;
	/*^block*/id _didPickOrganizerHandler;
	NSString* _buttonText;
	/*^block*/id _onButtonPress;
	UITableView* _tableView;
	NBButton* _pickerButton;
	NBPersonality* _personality;

}

@property (nonatomic,retain) UITableView * tableView;                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NBButton * pickerButton;                      //@synthesize pickerButton=_pickerButton - In the implementation block
@property (nonatomic,retain) NBPersonality * personality;                  //@synthesize personality=_personality - In the implementation block
@property (nonatomic,retain) NSArray * organizers;                         //@synthesize organizers=_organizers - In the implementation block
@property (nonatomic,retain) NBOrganizer * selectedOrganizer;              //@synthesize selectedOrganizer=_selectedOrganizer - In the implementation block
@property (nonatomic,copy) id didPickOrganizerHandler;                     //@synthesize didPickOrganizerHandler=_didPickOrganizerHandler - In the implementation block
@property (assign,nonatomic) char showButton;                              //@synthesize showButton=_showButton - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                          //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy) id onButtonPress;                               //@synthesize onButtonPress=_onButtonPress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellReuseIdentifier;
-(NSArray *)organizers;
-(void)setOrganizers:(NSArray *)arg1 ;
-(void)setSelectedOrganizer:(NBOrganizer *)arg1 ;
-(void)setDidPickOrganizerHandler:(id)arg1 ;
-(id)onButtonPress;
-(void)setPickerButton:(NBButton *)arg1 ;
-(NBButton *)pickerButton;
-(NBOrganizer *)selectedOrganizer;
-(id)didPickOrganizerHandler;
-(void)setOnButtonPress:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)setPersonality:(NBPersonality *)arg1 ;
-(NBPersonality *)personality;
-(void)updateViews;
-(char)showButton;
-(void)setShowButton:(char)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

