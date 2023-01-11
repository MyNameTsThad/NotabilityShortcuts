/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLCustomTableViewController.h>

@class UISwitch;

@interface NBDebugUIViewController : GLCustomTableViewController {

	UISwitch* _dateDescriptorSwitch;

}

@property (nonatomic,retain) UISwitch * dateDescriptorSwitch;              //@synthesize dateDescriptorSwitch=_dateDescriptorSwitch - In the implementation block
-(void)setDateDescriptorSwitch:(UISwitch *)arg1 ;
-(UISwitch *)dateDescriptorSwitch;
-(void)dateDesciptorChanged;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

