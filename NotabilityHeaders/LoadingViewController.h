/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UIImageView;

@interface LoadingViewController : UIViewController {

	UIActivityIndicatorView* _loadingActivityIndicator;
	UIImageView* _backgroundImageView;
	UIImageView* _logoImageView;

}

@property (retain) UIActivityIndicatorView * loadingActivityIndicator;              //@synthesize loadingActivityIndicator=_loadingActivityIndicator - In the implementation block
@property (retain) UIImageView * backgroundImageView;                               //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (retain) UIImageView * logoImageView;                                     //@synthesize logoImageView=_logoImageView - In the implementation block
-(void)setLoadingActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingActivityIndicator;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(void)viewDidDisappear:(char)arg1 ;
-(UIImageView *)backgroundImageView;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(UIImageView *)logoImageView;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

