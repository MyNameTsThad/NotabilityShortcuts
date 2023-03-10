/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Notability/GLImagePickerCellDelegate.h>

@protocol GLImagePickerViewDelegate;
@class PHCollection, GLImagePickerCell, UITableView, UIView, UILabel, NSArray, NSMutableDictionary, NSString;

@interface GLImagePickerView : UIView <UITableViewDelegate, UITableViewDataSource, GLImagePickerCellDelegate> {

	PHCollection* _collection;
	char _draggingCellHasLeftFrame;
	id<GLImagePickerViewDelegate> _delegate;
	float _topLayoutLength;
	GLImagePickerCell* _draggingCell;
	float _imageDimension;
	UITableView* _tableView;
	UIView* _instructionsView;
	UILabel* _instructionsLabel;
	NSArray* _arrayOfAssetCollections;
	NSMutableDictionary* _assetFetchResultsKeyBySectionIndex;
	UIView* _instructionsBackgroundView;
	NSArray* _instructionsConstraints;
	NSArray* _tableConstraints;

}

@property (assign) char draggingCellHasLeftFrame;                                         //@synthesize draggingCellHasLeftFrame=_draggingCellHasLeftFrame - In the implementation block
@property (retain) GLImagePickerCell * draggingCell;                                      //@synthesize draggingCell=_draggingCell - In the implementation block
@property (assign) float imageDimension;                                                  //@synthesize imageDimension=_imageDimension - In the implementation block
@property (retain) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (retain) UIView * instructionsView;                                             //@synthesize instructionsView=_instructionsView - In the implementation block
@property (retain) UILabel * instructionsLabel;                                           //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (retain) NSArray * arrayOfAssetCollections;                                     //@synthesize arrayOfAssetCollections=_arrayOfAssetCollections - In the implementation block
@property (retain) NSMutableDictionary * assetFetchResultsKeyBySectionIndex;              //@synthesize assetFetchResultsKeyBySectionIndex=_assetFetchResultsKeyBySectionIndex - In the implementation block
@property (retain) UIView * instructionsBackgroundView;                                   //@synthesize instructionsBackgroundView=_instructionsBackgroundView - In the implementation block
@property (retain) NSArray * instructionsConstraints;                                     //@synthesize instructionsConstraints=_instructionsConstraints - In the implementation block
@property (retain) NSArray * tableConstraints;                                            //@synthesize tableConstraints=_tableConstraints - In the implementation block
@property (nonatomic,retain) PHCollection * collection; 
@property (assign,nonatomic,__weak) id<GLImagePickerViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float topLayoutLength;                                       //@synthesize topLayoutLength=_topLayoutLength - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GLImagePickerCell *)draggingCell;
-(void)setDraggingCell:(GLImagePickerCell *)arg1 ;
-(char)draggingCellHasLeftFrame;
-(void)touch:(id)arg1 beganForCellView:(id)arg2 ;
-(void)touch:(id)arg1 movedForCellView:(id)arg2 ;
-(void)touch:(id)arg1 endedForCellView:(id)arg2 ;
-(void)touch:(id)arg1 cancelledForCellView:(id)arg2 ;
-(float)topLayoutLength;
-(void)setTopLayoutLength:(float)arg1 ;
-(void)cellViewWasTapped:(id)arg1 ;
-(void)setAssetFetchResultsKeyBySectionIndex:(NSMutableDictionary *)arg1 ;
-(void)setInstructionsView:(UIView *)arg1 ;
-(void)setInstructionsBackgroundView:(UIView *)arg1 ;
-(NSArray *)instructionsConstraints;
-(UIView *)instructionsBackgroundView;
-(void)setInstructionsConstraints:(NSArray *)arg1 ;
-(void)setImageDimension:(float)arg1 ;
-(void)setArrayOfAssetCollections:(NSArray *)arg1 ;
-(NSArray *)arrayOfAssetCollections;
-(NSMutableDictionary *)assetFetchResultsKeyBySectionIndex;
-(id)assetFetchResultsForSection:(unsigned)arg1 ;
-(id)dateFormatterForDate:(id)arg1 ;
-(void)setDraggingCellHasLeftFrame:(char)arg1 ;
-(float)imageDimension;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<GLImagePickerViewDelegate>)arg1 ;
-(void)reloadData;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<GLImagePickerViewDelegate>)delegate;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)updateConstraints;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(UIView *)instructionsView;
-(PHCollection *)collection;
-(void)setCollection:(PHCollection *)arg1 ;
-(id)assetCollectionForSection:(unsigned)arg1 ;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(UILabel *)instructionsLabel;
-(NSArray *)tableConstraints;
-(void)setTableConstraints:(NSArray *)arg1 ;
@end

