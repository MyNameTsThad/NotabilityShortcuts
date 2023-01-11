/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@interface NBNoteDocumentViewState : NSObject {

	float _zoomScale;
	CGPoint _documentOffset;
	CGRect _zoomViewTargetRect;

}

@property (assign,nonatomic) CGPoint documentOffset;                 //@synthesize documentOffset=_documentOffset - In the implementation block
@property (assign,nonatomic) float zoomScale;                        //@synthesize zoomScale=_zoomScale - In the implementation block
@property (assign,nonatomic) CGRect zoomViewTargetRect;              //@synthesize zoomViewTargetRect=_zoomViewTargetRect - In the implementation block
-(CGPoint)documentOffset;
-(CGRect)zoomViewTargetRect;
-(void)setZoomViewTargetRect:(CGRect)arg1 ;
-(void)setDocumentOffset:(CGPoint)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)zoomScale;
-(void)setZoomScale:(float)arg1 ;
@end
