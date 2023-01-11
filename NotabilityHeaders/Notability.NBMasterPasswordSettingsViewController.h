/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLCustomTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@interface Notability.NBMasterPasswordSettingsViewController : GLCustomTableViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	 MasterPasswordInputCellIdentifier;
	 MasterPasswordSwitchCellIdentifier;
	 MasterPasswordButtonCellIdentifier;
	 tableModel;
	 customStyle;
	 didFinishChangingPassword;
	 _masterPasswordState;
	 passwordInputTextField;
	 passwordVerifyTextField;
	 passwordHintTextField;
	 biometricSwitch;
	 biometryTypeString;
	 actionButton;
	 passwordNotMatchingView;

}
-(void)updateActionButtonEnabledValue;
-(void)didToggleBiometry:(id)arg1 ;
-(void)passwordActionButtonPressed;
-(void)changePasswordModalCancel;
-(id)initWithCoder:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)textFieldDidEndEditing:(id)arg1 reason:(int)arg2 ;
-(char)textFieldShouldReturn:(id)arg1 ;
@end

