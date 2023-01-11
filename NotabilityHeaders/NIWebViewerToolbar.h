/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/NIToolbar.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Notability/GLPopoverControllerDelegate.h>

@protocol WebViewerToolbarDelegate;
@class GLPopoverController, NBButton, NBBarButtonItem, UITextField, NSString;

@interface NIWebViewerToolbar : NIToolbar <UITextFieldDelegate, GLPopoverControllerDelegate> {

	GLPopoverController* openBookmarkPopoverController;
	GLPopoverController* addBookmarkPopoverController;
	NBButton* addBookmarkPopoverButton;
	NBBarButtonItem* backBarButtonItem;
	NBBarButtonItem* forwardBarButtonItem;
	NBBarButtonItem* openBookmarksBarButtonItem;
	NBBarButtonItem* addBookmarksBarButtonItem;
	UITextField* urlField;
	char backEnabled;
	char forwardEnabled;
	NSString* urlString;
	id<WebViewerToolbarDelegate> _webViewerDelegate;
	int _universalSizeClass;

}

@property (assign,nonatomic,__weak) id<WebViewerToolbarDelegate> webViewerDelegate;              //@synthesize webViewerDelegate=_webViewerDelegate - In the implementation block
@property (nonatomic,retain) NSString * urlString; 
@property (assign,nonatomic) char backEnabled; 
@property (assign,nonatomic) char forwardEnabled; 
@property (assign,nonatomic) int universalSizeClass;                                             //@synthesize universalSizeClass=_universalSizeClass - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUniversalSizeClass:(int)arg1 ;
-(int)universalSizeClass;
-(void)doneAction;
-(void)backAction;
-(void)setWebViewerDelegate:(id<WebViewerToolbarDelegate>)arg1 ;
-(id)openBookmarksBarButtonItem;
-(void)setForwardEnabled:(char)arg1 ;
-(void)setBackEnabled:(char)arg1 ;
-(void)bookmarkWasSelected;
-(void)forwardAction;
-(void)openBookmarksAction;
-(void)addBookmarkAction;
-(void)addBookmarkPopoverButtonAction;
-(void)teardownPopovers;
-(id<WebViewerToolbarDelegate>)webViewerDelegate;
-(char)backEnabled;
-(char)forwardEnabled;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)cancelAction;
-(void)_sharedInit;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
@end

