/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIPinchGestureRecognizer, UIPanGestureRecognizer, PTPDFViewCtrl;

@interface PTPDFScrollView : UIScrollView {

	CGSize preSize;
	CGPoint preOffset;
	int prePageNumber;
	UIPinchGestureRecognizer* zoomRecognizer;
	UIPanGestureRecognizer* panRecognizer;
	PTPDFViewCtrl* _pdfViewCtrl;
	int _desiredContentInsetAdjustmentBehavior;

}

@property (assign,nonatomic) PTPDFViewCtrl * pdfViewCtrl;                            //@synthesize pdfViewCtrl=_pdfViewCtrl - In the implementation block
@property (assign,nonatomic) int desiredContentInsetAdjustmentBehavior;              //@synthesize desiredContentInsetAdjustmentBehavior=_desiredContentInsetAdjustmentBehavior - In the implementation block
-(void)setContentInsetAdjustmentBehavior:(int)arg1 ;
-(PTPDFViewCtrl *)pdfViewCtrl;
-(void)setPdfViewCtrl:(PTPDFViewCtrl *)arg1 ;
-(int)contentInsetAdjustmentBehavior;
-(void)setDesiredContentInsetAdjustmentBehavior:(int)arg1 ;
-(int)desiredContentInsetAdjustmentBehavior;
-(void)setWorkaroundOn:(char)arg1 ;
-(void)disableZoomRecognizer;
-(void)enableZoomRecognizer;
-(void)minimumTwoFingersToScrollEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)dealloc;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(char)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3 ;
-(char)touchesShouldCancelInContentView:(id)arg1 ;
-(void)saveState;
-(void)restoreState;
@end

