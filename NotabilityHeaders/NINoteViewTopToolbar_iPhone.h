/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/NINoteViewTopToolbar.h>
#import <Notability/GLUndoRedoButtonDelegate.h>
#import <Notability/GLTouchCatcherViewDelegate.h>
#import <Notability/NBInputToolTrayDelegate.h>
#import <Notability/GLModalTrayViewDelegate.h>
#import <Notability/GLPaperPickerTrayDelegate.h>
#import <Notability/NBTimelineViewTabCenteringProtocol.h>

@class NBInputToolTrayView, GLTouchCatcherView, NIExportConfigurationViewController, GLNavigationController, GLModalTrayView, GLPaperPickerTrayView, NIInputToolButton, UIView, NSString;

@interface NINoteViewTopToolbar_iPhone : NINoteViewTopToolbar <GLUndoRedoButtonDelegate, GLTouchCatcherViewDelegate, NBInputToolTrayDelegate, GLModalTrayViewDelegate, GLPaperPickerTrayDelegate, NBTimelineViewTabCenteringProtocol> {

	NBInputToolTrayView* inputToolTray;
	GLTouchCatcherView* touchCatcher;
	char isTrayOpen;
	char isTrayOpening;
	char isTrayOpeningViaTouch;
	char isTrayClosing;
	NIExportConfigurationViewController* exportMenuVC;
	GLNavigationController* exportNavigationController;
	GLModalTrayView* paperGridView;
	GLPaperPickerTrayView* paperTrayView;
	NIInputToolButton* _iPhoneToolSelectorButton;
	UIView* _undoSpacer1;
	UIView* _undoSpacer2;
	UIView* _recordingSpacer1;
	UIView* _recordingSpacer2;
	int _selectedToolIndex;

}

@property (nonatomic,readonly) NIInputToolButton * iPhoneToolSelectorButton;              //@synthesize iPhoneToolSelectorButton=_iPhoneToolSelectorButton - In the implementation block
@property (nonatomic,readonly) UIView * undoSpacer1;                                      //@synthesize undoSpacer1=_undoSpacer1 - In the implementation block
@property (nonatomic,readonly) UIView * undoSpacer2;                                      //@synthesize undoSpacer2=_undoSpacer2 - In the implementation block
@property (nonatomic,readonly) UIView * recordingSpacer1;                                 //@synthesize recordingSpacer1=_recordingSpacer1 - In the implementation block
@property (nonatomic,readonly) UIView * recordingSpacer2;                                 //@synthesize recordingSpacer2=_recordingSpacer2 - In the implementation block
@property (assign,nonatomic) int selectedToolIndex;                                       //@synthesize selectedToolIndex=_selectedToolIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPenManager:(id)arg1 ;
-(void)touchCatcher:(id)arg1 touchesEnded:(id)arg2 ;
-(void)updateInterfaceForInputMode;
-(void)tearDownBeforeUniversalSizeClassChange;
-(void)exportButtonAction:(id)arg1 ;
-(void)showPaperTray;
-(void)showInfoAction;
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(id)customViewToolbarItemsForSizeAndState;
-(float)timelineViewRequestsXOffsetForTabCenter:(id)arg1 ;
-(void)updateConstraintsEditAllowed;
-(void)updateInterfaceForPenMode;
-(void)willRotateToOrientation:(id)arg1 ;
-(int)selectedToolIndex;
-(NIInputToolButton *)iPhoneToolSelectorButton;
-(UIView *)undoSpacer1;
-(UIView *)undoSpacer2;
-(UIView *)recordingSpacer1;
-(UIView *)recordingSpacer2;
-(void)setSelectedToolIndex:(int)arg1 ;
-(void)closeToolTray:(char)arg1 ;
-(void)openToolTray:(char)arg1 ;
-(id)touchCatcherColor;
-(void)inputToolTrayShouldClose:(id)arg1 ;
-(void)inputToolTrayShouldTakePhoto:(id)arg1 ;
-(void)paperPickerTrayRequestsDismissal:(id)arg1 ;
-(void)paperPickerTray:(id)arg1 didSelectPaperAtIndex:(int)arg2 ;
-(void)switchInputMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end
