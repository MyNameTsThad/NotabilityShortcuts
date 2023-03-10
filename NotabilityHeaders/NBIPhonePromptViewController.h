/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Notability/GLTouchCatcherViewDelegate.h>

@class GLTouchCatcherView, UILabel, NSString;

@interface NBIPhonePromptViewController : UIViewController <GLTouchCatcherViewDelegate> {

	GLTouchCatcherView* touchCatcher;
	UILabel* _titleLabel;
	UILabel* _explanationLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * explanationLabel;              //@synthesize explanationLabel=_explanationLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchCatcher:(id)arg1 touchesEnded:(id)arg2 ;
-(void)setExplanationLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)explanationLabel;
@end

