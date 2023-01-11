/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>
#import <Notability/GLDatePickerDelegate.h>
#import <Notability/GLPopoverControllerDelegate.h>
#import <Notability/GLNoteInfoTrayViewDelegate.h>
#import <Notability/GLModalTrayViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol NoteInfoEditingDelegate;
@class UIButton, NSDate, GLDatePickerPopoverController, UITapGestureRecognizer, GLModalTrayView, GLNoteInfoTrayView, _TtC10Notability10PenManager, NILabel, NSString;

@interface RichMediaTitleView : UIView <GLDatePickerDelegate, GLPopoverControllerDelegate, GLNoteInfoTrayViewDelegate, GLModalTrayViewDelegate, UITextFieldDelegate> {

	UIButton* dateCreatedLabel;
	float unscaledFontSize;
	id<NoteInfoEditingDelegate> delegate;
	NSDate* noteCreatedDate;
	NSDate* noteModifiedDate;
	GLDatePickerPopoverController* datePickerPopover;
	UITapGestureRecognizer* tapToEditRecognizer;
	GLModalTrayView* modalInfoTray;
	GLNoteInfoTrayView* noteInfoTrayView;
	char keyboardShowing;
	char _isUserResizing;
	float _scaleFactor;
	int _paperIndex;
	_TtC10Notability10PenManager* _penManager;
	NILabel* _titleLabel;
	float _unscaledTitleFontSize;
	float _unscaledDateFontSize;
	float _layoutScaleFactor;
	CGRect _layoutFrame;

}

@property (nonatomic,readonly) NILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) float unscaledTitleFontSize;                              //@synthesize unscaledTitleFontSize=_unscaledTitleFontSize - In the implementation block
@property (assign,nonatomic) float unscaledDateFontSize;                               //@synthesize unscaledDateFontSize=_unscaledDateFontSize - In the implementation block
@property (assign,nonatomic) float layoutScaleFactor;                                  //@synthesize layoutScaleFactor=_layoutScaleFactor - In the implementation block
@property (assign,nonatomic) CGRect layoutFrame;                                       //@synthesize layoutFrame=_layoutFrame - In the implementation block
@property (assign,nonatomic,__weak) id<NoteInfoEditingDelegate> delegate; 
@property (assign,nonatomic) float scaleFactor;                                        //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) int paperIndex;                                           //@synthesize paperIndex=_paperIndex - In the implementation block
@property (nonatomic,retain) _TtC10Notability10PenManager * penManager;                //@synthesize penManager=_penManager - In the implementation block
@property (assign,nonatomic) char isUserResizing;                                      //@synthesize isUserResizing=_isUserResizing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPenManager:(_TtC10Notability10PenManager *)arg1 ;
-(int)paperIndex;
-(_TtC10Notability10PenManager *)penManager;
-(char)isUserResizing;
-(void)setIsUserResizing:(char)arg1 ;
-(void)setPaperIndex:(int)arg1 ;
-(void)doLayout;
-(void)GLDatePicker:(id)arg1 didChangeDate:(id)arg2 ;
-(void)GLDatePickerDone:(id)arg1 ;
-(char)modalTrayShouldDismiss:(id)arg1 ;
-(void)noteInfoTrayRequestsDismissal:(id)arg1 ;
-(void)setUnscaledTitleFontSize:(float)arg1 ;
-(void)dateTapAction:(id)arg1 ;
-(void)setUnscaledDateFontSize:(float)arg1 ;
-(void)editTitleAction:(id)arg1 ;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(id)dateCreatedLabel;
-(float)layoutScaleFactor;
-(float)unscaledTitleFontSize;
-(float)unscaledDateFontSize;
-(void)setLayoutScaleFactor:(float)arg1 ;
-(void)setLayoutFrame:(CGRect)arg1 ;
-(void)resizeTrayForOnscreenKeyboard:(id)arg1 ;
-(CGRect)documentFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<NoteInfoEditingDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id<NoteInfoEditingDelegate>)delegate;
-(id)title;
-(char)resignFirstResponder;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(NILabel *)titleLabel;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(float)scaleFactor;
-(CGRect)layoutFrame;
-(void)setScaleFactor:(float)arg1 ;
-(char)isReadOnly;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setModifiedDate:(id)arg1 ;
-(void)setCreatedDate:(id)arg1 ;
@end

