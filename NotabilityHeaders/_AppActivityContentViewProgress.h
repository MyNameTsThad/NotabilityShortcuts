/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/_AppActivityContentMessageView.h>

@class GLCircularProgressView;

@interface _AppActivityContentViewProgress : _AppActivityContentMessageView {

	GLCircularProgressView* _progressIndicator;

}

@property (nonatomic,retain) GLCircularProgressView * progressIndicator;              //@synthesize progressIndicator=_progressIndicator - In the implementation block
-(void)addIndicatorView;
-(void)updateIndicatorView;
-(void)setProgressIndicator:(GLCircularProgressView *)arg1 ;
-(GLCircularProgressView *)progressIndicator;
@end

