/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol VerticalScrollControllerDelegate;
@class UIImageView, UIScrollView, NSString;

@interface VerticalScrollController : UIView <UIScrollViewDelegate> {

	CGPoint panGRPreviousLocation;
	id<VerticalScrollControllerDelegate> delegate;
	UIImageView* staticView;
	UIScrollView* invisibleScrollView;
	UIImageView* upArrow;
	UIImageView* downArrow;
	char ignoreScrollCallback;
	char isAnimatingArrows;

}

@property (assign,nonatomic,__weak) id<VerticalScrollControllerDelegate> delegate; 
@property (assign,nonatomic) float contentHeight; 
@property (assign,nonatomic) float contentOffsetY; 
@property (assign,nonatomic) float contentInsetTop; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentOffsetY:(float)arg1 ;
-(float)contentOffsetY;
-(void)scrollIndicatorOffsetRelativeToContentHeight:(float)arg1 boundsHeightRelativeToContentHeight:(float)arg2 ;
-(void)setHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<VerticalScrollControllerDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<VerticalScrollControllerDelegate>)delegate;
-(float)contentHeight;
-(void)setContentHeight:(float)arg1 ;
-(void)setContentInsetTop:(float)arg1 ;
-(float)contentInsetTop;
@end

