/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UIView.h>

@protocol GLModalTrayDrawProxyDelegate;
@interface GLModalTrayGridDrawProxyView : UIView {

	id<GLModalTrayDrawProxyDelegate> drawProxyDelegate;

}

@property (assign,nonatomic,__weak) id<GLModalTrayDrawProxyDelegate> drawProxyDelegate; 
-(void)setDrawProxyDelegate:(id<GLModalTrayDrawProxyDelegate>)arg1 ;
-(id<GLModalTrayDrawProxyDelegate>)drawProxyDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

