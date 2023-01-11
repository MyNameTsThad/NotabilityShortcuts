/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class GenericMediaObject, NSString, _TtC10Notability10PenManager, SelectionManager;

@interface GenericMediaObjectView : UIView <UITextViewDelegate> {

	char editMenuEnabled;
	GenericMediaObject* object;
	NSString* captionTextBeforeEditing;
	_TtC10Notability10PenManager* _penManager;
	SelectionManager* _selectionManager;

}

@property (nonatomic,retain) GenericMediaObject * object; 
@property (nonatomic,retain) _TtC10Notability10PenManager * penManager;                  //@synthesize penManager=_penManager - In the implementation block
@property (nonatomic,retain) SelectionManager * selectionManager;                        //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,copy) NSString * captionTextBeforeEditing; 
@property (assign,getter=isEditMenuEnabled,nonatomic) char editMenuEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPenManager:(_TtC10Notability10PenManager *)arg1 ;
-(_TtC10Notability10PenManager *)penManager;
-(char)isEditMenuEnabled;
-(void)setEditMenuEnabled:(char)arg1 ;
-(void)setCaptionTextBeforeEditing:(NSString *)arg1 ;
-(NSString *)captionTextBeforeEditing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(GenericMediaObject *)object;
-(void)didMoveToSuperview;
-(void)setObject:(GenericMediaObject *)arg1 ;
-(SelectionManager *)selectionManager;
-(void)setSelectionManager:(SelectionManager *)arg1 ;
@end

