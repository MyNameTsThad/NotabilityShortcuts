/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Notability/AppActivityViewModelDelegate.h>

@protocol AppActivityContentViewDelegateAppActivityViewModelDelegate;
@class AppActivityViewModel, NSString;

@interface _AppActivityContentView : UIView <AppActivityViewModelDelegate> {

	AppActivityViewModel* _model;
	id<AppActivityContentViewDelegate><AppActivityViewModelDelegate> _delegate;

}

@property (nonatomic,retain) AppActivityViewModel * model;                                                                  //@synthesize model=_model - In the implementation block
@property (assign,nonatomic,__weak) id<AppActivityContentViewDelegate><AppActivityViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addIndicatorView;
-(void)animate:(char)arg1 ;
-(void)setDelegate:(id<AppActivityContentViewDelegate><AppActivityViewModelDelegate>)arg1 ;
-(id<AppActivityContentViewDelegate><AppActivityViewModelDelegate>)delegate;
-(AppActivityViewModel *)model;
-(void)setModel:(AppActivityViewModel *)arg1 ;
@end
