/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPDFDraw : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(void)Destroy;
-(void)SetThinLineAdjustment:(char)arg1 stroke_adjust:(char)arg2 ;
-(void)SetOverprint:(int)arg1 ;
-(void)SetDPI:(double)arg1 ;
-(void)SetPathHinting:(char)arg1 ;
-(void)SetImageSize:(int)arg1 height:(int)arg2 preserve_aspect_ratio:(char)arg3 ;
-(void)SetPageBox:(int)arg1 ;
-(void)SetClipRect:(id)arg1 ;
-(void)SetFlipYAxis:(char)arg1 ;
-(void)SetRotate:(int)arg1 ;
-(void)SetPageTransparent:(char)arg1 ;
-(void)ExportWithObj:(id)arg1 filename:(id)arg2 format:(id)arg3 encoder_params:(id)arg4 ;
-(void)Export:(id)arg1 filename:(id)arg2 format:(id)arg3 ;
-(id)GetBitmap:(id)arg1 pix_fmt:(int)arg2 demult:(char)arg3 ;
-(id)initWithDpi:(double)arg1 ;
-(void)SetColorPostProcessMode:(int)arg1 ;
-(void)SetErrorReportProc:(id)arg1 ;
-(void)SetDrawAnnotations:(char)arg1 ;
-(void)SetHighlightFields:(char)arg1 ;
-(void)SetAntiAliasing:(char)arg1 ;
-(void)SetCaching:(char)arg1 ;
-(void)SetRasterizerType:(int)arg1 ;
-(void)SetGamma:(double)arg1 ;
-(void)SetOCGContext:(id)arg1 ;
-(void)SetDefaultPageColor:(unsigned char)arg1 g:(unsigned char)arg2 b:(unsigned char)arg3 ;
-(void)SetImageSmoothing:(char)arg1 hq_image_resampling:(char)arg2 ;
-(void)SetPrintMode:(char)arg1 ;
-(void)dealloc;
@end

