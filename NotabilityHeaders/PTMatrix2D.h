/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/TRN_matrix2d.h>

@interface PTMatrix2D : TRN_matrix2d
+(id)ZeroMatrix;
+(id)IdentityMatrix;
+(id)RotationMatrix:(double)arg1 ;
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(void)Set:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 h:(double)arg5 v:(double)arg6 ;
-(void)Concat:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 h:(double)arg5 v:(double)arg6 ;
-(id)Multiply:(id)arg1 ;
-(char)IsEquals:(id)arg1 ;
-(char)IsNotEquals:(id)arg1 ;
-(id)Mult:(id)arg1 ;
-(id)Inverse;
-(void)Translate:(double)arg1 v:(double)arg2 ;
-(void)Scale:(double)arg1 v:(double)arg2 ;
-(id)initWithA:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 h:(double)arg5 v:(double)arg6 ;
-(void)dealloc;
@end
