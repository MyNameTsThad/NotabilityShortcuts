/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RichMediaView <NSObject>
@optional
-(void)defineSelectedText;
-(void)noteController:(id)arg1 textLayoutRequiresExtraHeight:(float)arg2;
-(void)makePDFResponderFirstSelector;
-(void)resignSelectedForEditingMediaObjectIfNeededAndDeselect;
-(void)_paste:(id)arg1;
-(void)_paste:(id)arg1 options:(int)arg2;
-(void)textFormatDidChangeInRange:(NSRange)arg1;
-(CGRect*)visibleRect;

@required
-(void)showEditMenuForSelection;
-(void)hideEditMenu;
-(void)selectMediaObjectForEdit:(id)arg1;
-(void)deselectSelectedForEditingMediaObject;
-(void)showCaret;
-(void)documentNeedsDisplayInDocumentContentRect:(CGRect)arg1;
-(CGRect*)caretRect;
-(void)hideCaret;

@end

