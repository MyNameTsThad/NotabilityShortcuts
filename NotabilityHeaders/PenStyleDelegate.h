/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PenStyleDelegate <NSObject>
@optional
-(void)defaultFirstPenColorDidChange:(id)arg1;
-(void)defaultSecondPenColorDidChange:(id)arg1;
-(void)defaultFirstPenWidthDidChange:(float)arg1;
-(void)defaultSecondPenWidthDidChange:(float)arg1;
-(void)penVariableWidthEnabled:(char)arg1;
-(void)drawUsingApplePencilOnlyDidChange:(char)arg1;

@required
-(void)penColorDidChange:(id)arg1 isFinalized:(char)arg2;
-(void)penWidthDidChange:(float)arg1;

@end

