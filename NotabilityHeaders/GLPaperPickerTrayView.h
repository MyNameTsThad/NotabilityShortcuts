/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>
#import <Notability/GLCollectionViewControllerDelegate.h>

@protocol GLPaperPickerTrayDelegate;
@class GLUnskinnedButton, GLCollectionViewController, NSString;

@interface GLPaperPickerTrayView : UIView <GLCollectionViewControllerDelegate> {

	GLUnskinnedButton* doneButton;
	int selectedPaperIdx;
	GLCollectionViewController* paperPickerViewController;
	int selectedPaperIndex;
	id<GLPaperPickerTrayDelegate> _delegate;

}

@property (assign,nonatomic) int selectedPaperIndex; 
@property (assign,nonatomic,__weak) id<GLPaperPickerTrayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)paperChanged:(id)arg1 ;
-(void)collectionViewController:(id)arg1 didSelectContentProvider:(id)arg2 ;
-(void)doneButtonAction;
-(void)selectPaperAtIndex:(int)arg1 ;
-(void)setSelectedPaperIndex:(int)arg1 ;
-(int)selectedPaperIndex;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<GLPaperPickerTrayDelegate>)arg1 ;
-(void)dealloc;
-(id<GLPaperPickerTrayDelegate>)delegate;
@end

