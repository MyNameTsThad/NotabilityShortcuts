/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/PTMarkup.h>

@interface PTFreeText : PTMarkup
+(id)Create:(id)arg1 pos:(id)arg2 ;
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(id)initWithD:(id)arg1 ;
-(id)initWithAnn:(id)arg1 ;
-(void)SetDefaultAppearance:(id)arg1 ;
-(int)GetQuaddingFormat;
-(void)SetQuaddingFormat:(int)arg1 ;
-(id)GetCalloutLinePoint1;
-(id)GetCalloutLinePoint2;
-(id)GetCalloutLinePoint3;
-(void)SetCalloutLinePointsWithKneePoint:(id)arg1 p2:(id)arg2 p3:(id)arg3 ;
-(void)SetCalloutLinePoints:(id)arg1 p2:(id)arg2 ;
-(int)GetEndingStyle;
-(void)SetEndingStyle:(int)arg1 ;
-(void)SetEndingStyleWithString:(id)arg1 ;
-(void)SetTextColor:(id)arg1 col_comp:(int)arg2 ;
-(id)GetTextColor;
-(int)GetTextColorCompNum;
-(void)SetLineColor:(id)arg1 col_comp:(int)arg2 ;
-(id)GetLineColor;
-(int)GetLineColorCompNum;
-(void)SetFontSize:(double)arg1 ;
-(double)GetFontSize;
-(id)GetDefaultAppearance;
-(int)GetIntentName;
-(void)SetIntentName:(int)arg1 ;
-(id)init;
-(void)dealloc;
@end

