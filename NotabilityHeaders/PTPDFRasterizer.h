/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:17 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPDFRasterizer : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(void)Destroy;
-(void)SetThinLineAdjustment:(char)arg1 stroke_adjust:(char)arg2 ;
-(void)SetOverprint:(int)arg1 ;
-(void)SetPathHinting:(char)arg1 ;
-(void)SetColorPostProcessMode:(int)arg1 ;
-(int)GetColorPostProcessMode;
-(void)SetErrorReportProc:(id)arg1 ;
-(void)UpdateBuffer;
-(void)SetDrawAnnotations:(char)arg1 ;
-(void)SetHighlightFields:(char)arg1 ;
-(void)SetAntiAliasing:(char)arg1 ;
-(void)SetCaching:(char)arg1 ;
-(void)SetRasterizerType:(int)arg1 ;
-(void)SetGamma:(double)arg1 ;
-(void)SetOCGContext:(id)arg1 ;
-(id)Rasterize:(id)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 num_comps:(int)arg5 demult:(char)arg6 device_mtx:(id)arg7 clip:(id)arg8 scrl_clip_regions:(id)arg9 ;
-(void)SetImageSmoothing:(char)arg1 hq_image_resampling:(char)arg2 ;
-(void)SetPrintMode:(char)arg1 ;
-(int)GetRasterizerType;
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
@end

