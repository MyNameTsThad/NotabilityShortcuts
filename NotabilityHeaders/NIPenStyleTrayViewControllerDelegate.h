/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NIPenStyleTrayViewControllerDelegate <NSObject>
@optional
-(char)variableWidth;
-(void)penStyleTrayView:(id)arg1 didSetVariableWidth:(char)arg2;

@required
-(float)currentWidth;
-(void)penStyleTrayView:(id)arg1 didSelectColor:(id)arg2 doNotAllowViewDismissal:(char)arg3 isFinalized:(char)arg4;
-(void)penStyleTrayView:(id)arg1 didSelectWidth:(float)arg2;
-(void)showPenStyleController:(id)arg1;
-(void)dismissPenStyleController:(id)arg1;
-(id)currentColor;

@end

