/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <Notability/GLPopoverControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol InsertMediaPopoverDelegateGLImagePickerViewDelegateGLMediaBoxPickerDelegate, InsertMediaPopoverManager;
@class NSArray, NSDictionary, UITableView, GLGridView, UIImagePickerControlleriOS8Bugfix, InsertMediaPopoverCellView, NSString;

@interface InsertMediaPopoverViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, GLPopoverControllerDelegate, UITableViewDelegate, UITableViewDataSource> {

	NSArray* tableRowDictionaries;
	NSArray* buttonCellViews;
	NSDictionary* boxesDict;
	NSDictionary* webClipDict;
	NSDictionary* figureDict;
	NSDictionary* photoFromLibraryDict;
	NSDictionary* photoFromCameraDict;
	NSDictionary* gifDict;
	UITableView* buttonTableView;
	CGSize desiredPopoverSize;
	GLGridView* buttonGridView;
	UIImagePickerControlleriOS8Bugfix* cameraController;
	int paperIndex;
	int linesIndex;
	InsertMediaPopoverCellView* draggingCell;
	CGPoint dragEndPointInWindow;
	char draggingCellHasLeftFrame;
	char _didSendGifDragCallback;
	id<InsertMediaPopoverDelegate><GLImagePickerViewDelegate><GLMediaBoxPickerDelegate> delegate;
	id<InsertMediaPopoverManager> popoverManager;

}

@property (assign,nonatomic) char didSendGifDragCallback;                                                                                      //@synthesize didSendGifDragCallback=_didSendGifDragCallback - In the implementation block
@property (assign,nonatomic,__weak) id<InsertMediaPopoverDelegate><GLImagePickerViewDelegate><GLMediaBoxPickerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<InsertMediaPopoverManager> popoverManager; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)boxesButtonAction;
-(void)insertWebClipAction;
-(void)insertFigureAction;
-(void)insertPictureAction;
-(void)takePhotoButtonAction;
-(void)insertGifAction;
-(void)setupTableIfNeeded;
-(void)trackInsertMediaTapped:(id)arg1 ;
-(void)setDidSendGifDragCallback:(char)arg1 ;
-(char)didSendGifDragCallback;
-(void)resetIdleTimerDisabled;
-(void)setPopoverManager:(id<InsertMediaPopoverManager>)arg1 ;
-(void)setDelegate:(id<InsertMediaPopoverDelegate><GLImagePickerViewDelegate><GLMediaBoxPickerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<InsertMediaPopoverDelegate><GLImagePickerViewDelegate><GLMediaBoxPickerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id<InsertMediaPopoverManager>)popoverManager;
@end

