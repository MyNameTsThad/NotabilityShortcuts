/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>

@protocol GLRearrangableToolbarDelegate;
@class GLGridView, NSString, UIToolbar, NSArray, UILongPressGestureRecognizer, _TtC10Notability17GLKeyboardToolbar;

@interface GLRearrangableToolbar : UIView {

	GLGridView* _availableItemGridView;
	GLGridView* _currentItemGridView;
	NSString* _editTitle;
	UIToolbar* _editStateTitleToolbar;
	NSArray* _availableItems;
	NSArray* _currentItems;
	UILongPressGestureRecognizer* _longPressRecognizer;
	float _maximumContentWidth;
	struct {
		char isEditing;
		char areItemsMoving;
		char shouldDrawEmptySpace;
	}  _flags;
	int _availableButtonGridDirection;
	int _fixedSpacerIndex;
	id<GLRearrangableToolbarDelegate> _rearrangableDelegate;
	id _rotationObserver;
	_TtC10Notability17GLKeyboardToolbar* _toolbar;

}

@property (retain) id rotationObserver;                                                                  //@synthesize rotationObserver=_rotationObserver - In the implementation block
@property (retain) _TtC10Notability17GLKeyboardToolbar * toolbar;                                        //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) NSArray * availableItems;                                                   //@synthesize availableItems=_availableItems - In the implementation block
@property (assign,nonatomic) int availableButtonGridDirection;                                           //@synthesize availableButtonGridDirection=_availableButtonGridDirection - In the implementation block
@property (nonatomic,retain) NSString * editTitle;                                                       //@synthesize editTitle=_editTitle - In the implementation block
@property (assign,nonatomic,__weak) id<GLRearrangableToolbarDelegate> rearrangableDelegate;              //@synthesize rearrangableDelegate=_rearrangableDelegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing; 
@property (assign,nonatomic) float maximumContentWidth;                                                  //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
-(void)setRearrangableDelegate:(id<GLRearrangableToolbarDelegate>)arg1 ;
-(int)numberOfGridItemsInGridView:(id)arg1 ;
-(id)gridView:(id)arg1 gridViewCellForIndex:(int)arg2 ;
-(void)gridView:(id)arg1 itemsAtIndeces:(id)arg2 wereDraggedToPoint:(CGPoint)arg3 ;
-(void)gridView:(id)arg1 requestsMoveItemAtIndeces:(id)arg2 toIndex:(int)arg3 ;
-(char)gridView:(id)arg1 itemsAtIndeces:(id)arg2 shouldReturnToGridFromPointOutside:(CGPoint)arg3 ;
-(id)rotationObserver;
-(void)itemLongPressAction:(id)arg1 ;
-(void)setRotationObserver:(id)arg1 ;
-(id<GLRearrangableToolbarDelegate>)rearrangableDelegate;
-(void)editDoneAction;
-(int)availableButtonGridDirection;
-(void)setAvailableButtonGridDirection:(int)arg1 ;
-(NSString *)editTitle;
-(void)setEditTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_init;
-(CGSize)intrinsicContentSize;
-(char)isEditing;
-(void)setEditing:(char)arg1 ;
-(void)beginEditing;
-(_TtC10Notability17GLKeyboardToolbar *)toolbar;
-(void)setToolbar:(_TtC10Notability17GLKeyboardToolbar *)arg1 ;
-(void)setAvailableItems:(NSArray *)arg1 ;
-(NSArray *)availableItems;
-(void)setMaximumContentWidth:(float)arg1 ;
-(float)maximumContentWidth;
-(void)finishEditing;
@end

