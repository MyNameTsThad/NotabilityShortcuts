/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPrintInteractionControllerDelegate <NSObject>
@optional
-(void)printInteractionControllerWillPresentPrinterOptions:(id)arg1;
-(void)printInteractionControllerDidPresentPrinterOptions:(id)arg1;
-(void)printInteractionControllerWillDismissPrinterOptions:(id)arg1;
-(void)printInteractionControllerDidDismissPrinterOptions:(id)arg1;
-(id)printInteractionControllerParentViewController:(id)arg1;
-(void)printInteractionControllerWillStartJob:(id)arg1;
-(void)printInteractionControllerDidFinishJob:(id)arg1;
-(int)printInteractionController:(id)arg1 chooseCutterBehavior:(id)arg2;
-(float)printInteractionController:(id)arg1 cutLengthForPaper:(id)arg2;
-(id)printInteractionController:(id)arg1 choosePaper:(id)arg2;

@end
