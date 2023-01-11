/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class _TtCC10Notability15TipSheetManager18TipSheetController;

@interface Notability.TipSheetManager : NSObject <UIPopoverPresentationControllerDelegate> {

	 _enabled;
	 tipCounts;
	 mostRecentTipDates;
	 dismissAction;

}

@property (assign,nonatomic) char enabled; 
@property (readonly,nonatomic) _TtCC10Notability15TipSheetManager18TipSheetController * presentedTip; 
+(id)shared;
-(_TtCC10Notability15TipSheetManager18TipSheetController *)presentedTip;
-(id)presentWithMovieURL:(id)arg1 message:(id)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 direction:(unsigned)arg5 animated:(char)arg6 transient:(char)arg7 completion:(/*^block*/id)arg8 ;
-(id)presentWithMessage:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 transient:(char)arg4 ;
-(id)presentWithMessage:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 ;
-(id)presentWithMessage:(id)arg1 fromItem:(id)arg2 ;
-(void)dismissCurrentTipAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)presentWithMessage:(id)arg1 fromItem:(id)arg2 transient:(char)arg3 ;
-(id)presentWithMessage:(id)arg1 fromItem:(id)arg2 animated:(char)arg3 transient:(char)arg4 completion:(/*^block*/id)arg5 ;
-(id)presentWithMessage:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 direction:(unsigned)arg4 animated:(char)arg5 transient:(char)arg6 completion:(/*^block*/id)arg7 ;
-(id)init;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(char)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
@end
