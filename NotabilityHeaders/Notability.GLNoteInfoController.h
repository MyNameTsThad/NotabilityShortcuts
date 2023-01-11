/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIViewController.h>

@class _TtC6GLCore11GLGroupView, NBNoteDocument;

@interface Notability.GLNoteInfoController : UIViewController {

	 contentView;
	 paddedView;
	 languageButton;
	 languageNavController;
	 noteDocument;

}

@property (retain,nonatomic) _TtC6GLCore11GLGroupView * contentView; 
@property (retain,nonatomic) NBNoteDocument * noteDocument; 
@property (assign,nonatomic) CGSize preferredContentSize; 
-(NBNoteDocument *)noteDocument;
-(void)setNoteDocument:(NBNoteDocument *)arg1 ;
-(void)didCancelLanguages;
-(id)init:(id)arg1 ;
-(void)setContentView:(_TtC6GLCore11GLGroupView *)arg1 ;
-(_TtC6GLCore11GLGroupView *)contentView;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
@end

