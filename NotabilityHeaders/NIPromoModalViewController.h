/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Notability/GLTouchCatcherViewDelegate.h>

@class NSString;

@interface NIPromoModalViewController : UIViewController <GLTouchCatcherViewDelegate> {

	/*^block*/id _didBeginDismissing;
	/*^block*/id _didEndDismissing;

}

@property (nonatomic,readonly) char dismissEnabled; 
@property (nonatomic,copy) id didBeginDismissing;                   //@synthesize didBeginDismissing=_didBeginDismissing - In the implementation block
@property (nonatomic,copy) id didEndDismissing;                     //@synthesize didEndDismissing=_didEndDismissing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchCatcher:(id)arg1 touchesBegan:(id)arg2 ;
-(id)didEndDismissing;
-(void)setDidEndDismissing:(id)arg1 ;
-(id)didBeginDismissing;
-(void)setDidBeginDismissing:(id)arg1 ;
-(char)dismissEnabled;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)dismiss;
@end

