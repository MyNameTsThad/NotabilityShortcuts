/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SelectionUIObjectTextSystemDelegate <NSObject>
@optional
-(char)selectionUIObjectCanPaste:(id)arg1;
-(void)selectionUIObject:(id)arg1 textSystemPasteAtPoint:(CGPoint)arg2;
-(void)selectionUIObject:(id)arg1 textSystemInsertTextBlockAtPoint:(CGPoint)arg2;
-(void)selectionUIObject:(id)arg1 insertCaretAtPoint:(CGPoint)arg2;
-(void)selectionUIObject:(id)arg1 insertImage:(id)arg2 atPoint:(CGPoint)arg3;

@required
-(void)selectionUIObject:(id)arg1 textSystemInsertTextBlockInRect:(CGRect)arg2 withText:(id)arg3;

@end

