/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPDFView : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
+(void)SetViewerCache:(id)arg1 max_cache_size:(unsigned long)arg2 on_disk:(char)arg3 ;
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(void)SetRightToLeftLanguage:(char)arg1 ;
-(int)GetCurrentPage;
-(void)Destroy;
-(void)CancelRendering;
-(void)RequestRender;
-(void)SetThinLineAdjustment:(char)arg1 stroke_adjust:(char)arg2 ;
-(void)Update:(char)arg1 ;
-(char)ShowRect:(int)arg1 rect:(id)arg2 ;
-(double)GetZoom;
-(double)GetRefZoomForPage:(int)arg1 pageNum:(int)arg2 ;
-(char)SetZoom:(double)arg1 ;
-(char)SetZoomWithCoord:(int)arg1 y:(int)arg2 zoom:(double)arg3 ;
-(int)GetPageNumberFromScreenPt:(double)arg1 y:(double)arg2 ;
-(id)GetScreenRectForAnnot:(id)arg1 page_num:(int)arg2 ;
-(void)SetDevicePixelDensity:(double)arg1 scale_factor:(double)arg2 ;
-(id)ConvScreenPtToCanvasPt:(id)arg1 ;
-(id)ConvCanvasPtToScreenPt:(id)arg1 ;
-(id)ConvCanvasPtToPagePt:(id)arg1 page_num:(int)arg2 ;
-(id)ConvPagePtToCanvasPt:(id)arg1 page_num:(int)arg2 ;
-(id)ConvScreenPtToPagePt:(id)arg1 page_num:(int)arg2 ;
-(id)ConvPagePtToScreenPt:(id)arg1 page_num:(int)arg2 ;
-(double)GetCanvasWidth;
-(double)GetCanvasHeight;
-(double)GetHScrollPos;
-(double)GetVScrollPos;
-(void)OnScroll:(int)arg1 pix_dy:(int)arg2 ;
-(void)SetHScrollPos:(double)arg1 ;
-(void)SetVScrollPos:(double)arg1 ;
-(void)OnSize:(int)arg1 height:(int)arg2 ;
-(void)UpdateWithRect:(id)arg1 ;
-(int)GetBufferWidth;
-(int)GetBufferHeight;
-(int)GetBufferStride;
-(double)GetPageVGap;
-(double)GetPageHGap;
-(void)SetPageSpacing:(int)arg1 vert_col_space:(int)arg2 horiz_pad:(int)arg3 vert_pad:(int)arg4 ;
-(char)SelectWithTextSelect:(double)arg1 y1:(double)arg2 x2:(double)arg3 y2:(double)arg4 ;
-(char)SelectWithStructure:(double)arg1 y1:(double)arg2 page1:(int)arg3 x2:(double)arg4 y2:(double)arg5 page2:(int)arg6 ;
-(char)SelectWithHighlights:(id)arg1 ;
-(id)GetAnnotationAt:(int)arg1 y:(int)arg2 distanceThreshold:(double)arg3 minimumLineWeight:(double)arg4 ;
-(id)GetLinkAt:(int)arg1 y:(int)arg2 ;
-(void)SetOverprint:(int)arg1 ;
-(void)SetPathHinting:(char)arg1 ;
-(int)GetPagePresentationMode;
-(int)GetPageCount;
-(char)IsFinishedRendering:(char)arg1 ;
-(void)SetDoc:(id)arg1 ;
-(void)OpenUniversalDoc:(id)arg1 ;
-(void)CloseDoc;
-(id)GetDoc;
-(void)DocLock:(char)arg1 ;
-(void)DocUnlock;
-(char)DocTryLock:(int)arg1 ;
-(void)DocLockRead;
-(void)DocUnlockRead;
-(char)DocTryLockRead:(int)arg1 ;
-(void)SetPagePresentationMode:(int)arg1 ;
-(void)SetColorPostProcessMode:(int)arg1 ;
-(void)SetColorPostProcessColors:(unsigned)arg1 black_color:(unsigned)arg2 ;
-(int)GetColorPostProcessMode;
-(char)GotoFirstPage;
-(char)GotoLastPage;
-(char)GotoNextPage;
-(char)GotoPreviousPage;
-(char)SetCurrentPage:(int)arg1 ;
-(id)GetVisiblePages;
-(char)SmartZoom:(int)arg1 y:(int)arg2 ;
-(void)RotateClockwise;
-(void)RotateCounterClockwise;
-(int)GetRotation;
-(id)GetDeviceTransform:(int)arg1 ;
-(void)SetErrorReportProc:(id)arg1 ;
-(void)SetCurrentPageProc:(id)arg1 ;
-(void)SetJavaScriptEventCallBack:(id)arg1 ;
-(void)SetCurrentZoomProc:(id)arg1 ;
-(void)ExecuteAction:(id)arg1 ;
-(void)ExecuteActionWithActionParameter:(id)arg1 ;
-(void)UpdateWithAnnot:(id)arg1 page_num:(int)arg2 ;
-(void)UpdateWithField:(id)arg1 ;
-(void)UpdatePageLayout;
-(id)GetBuffer;
-(void)UpdateBuffer;
-(void)SetDrawAnnotations:(char)arg1 ;
-(void)SetUrlExtraction:(char)arg1 ;
-(void)SetHighlightFields:(char)arg1 ;
-(void)SetAntiAliasing:(char)arg1 ;
-(void)SetImageSmoothing:(char)arg1 ;
-(void)SetCaching:(char)arg1 ;
-(void)SetRasterizerType:(int)arg1 ;
-(void)SetGamma:(double)arg1 ;
-(void)SetOCGContext:(id)arg1 ;
-(id)GetOCGContext;
-(void)UpdateOCGContext;
-(void)SetRenderBeginProc:(id)arg1 ;
-(void)SetRenderFinishProc:(id)arg1 ;
-(void)SetTextSelectionMode:(int)arg1 ;
-(char)SelectWithSnapping:(double)arg1 y1:(double)arg2 x2:(double)arg3 y2:(double)arg4 snap_to_start:(char)arg5 snap_to_end:(char)arg6 ;
-(char)SelectWithSmartSnapping:(double)arg1 y1:(double)arg2 x2:(double)arg3 y2:(double)arg4 ;
-(char)SelectWithSelection:(id)arg1 ;
-(void)CancelFindText;
-(void)SelectAll;
-(char)HasSelection;
-(void)ClearSelection;
-(id)GetSelection:(int)arg1 ;
-(int)GetSelectionBeginPage;
-(int)GetSelectionEndPage;
-(char)HasSelectionOnPage:(int)arg1 ;
-(void)PrepareWords:(int)arg1 ;
-(char)WereWordsPrepared:(int)arg1 ;
-(char)IsThereTextInRect:(double)arg1 y1:(double)arg2 x2:(double)arg3 y2:(double)arg4 ;
-(void)PrepareAnnotsForMouse:(int)arg1 distance_threshold:(double)arg2 minimum_line_weight:(double)arg3 ;
-(char)WereAnnotsForMousePrepared:(int)arg1 ;
-(int)GetAnnotTypeUnder:(double)arg1 y:(double)arg2 ;
-(void)SetPageBorderVisibility:(char)arg1 ;
-(void)SetPageTransparencyGrid:(char)arg1 ;
-(void)SetDefaultPageColor:(unsigned char)arg1 g:(unsigned char)arg2 b:(unsigned char)arg3 ;
-(void)SetBackgroundColor:(unsigned char)arg1 g:(unsigned char)arg2 b:(unsigned char)arg3 a:(unsigned char)arg4 ;
-(void)SetHorizontalAlign:(int)arg1 ;
-(void)SetVerticalAlign:(int)arg1 ;
-(void)SetPageViewMode:(int)arg1 ;
-(int)GetPageViewMode;
-(void)RefreshAndUpdate:(id)arg1 ;
-(void)SetPageRefViewMode:(int)arg1 ;
-(int)GetPageRefViewMode;
-(void)SetupThumbnails:(char)arg1 generate_at_runtime:(char)arg2 use_disk_cache:(char)arg3 thumb_max_side_length:(int)arg4 max_abs_cache_size:(unsigned long)arg5 max_perc_cache_size:(double)arg6 ;
-(void)ClearThumbCache;
-(void)GetThumbAsync:(int)arg1 instance:(id)arg2 ;
-(unsigned long)GetThumbInCacheSize:(int)arg1 ;
-(char)GetThumbInCache:(int)arg1 buf:(id)arg2 out_width:(id)arg3 out_height:(id)arg4 ;
-(void)CancelAllThumbRequests;
-(void)SetRequestRenderInWorkerThreadProc:(id)arg1 ;
-(void)SetFindTextHandler:(id)arg1 ;
-(void)FindTextAsync:(id)arg1 match_case:(char)arg2 match_whole_word:(char)arg3 search_up:(char)arg4 reg_exp:(char)arg5 ;
-(char)DownloaderUpdatePage:(id)arg1 page_num:(unsigned)arg2 obj_num:(unsigned)arg3 ;
-(void)DownloaderUpdateOutline:(id)arg1 ;
-(void)DownloaderUpdateThumb:(id)arg1 page_num:(unsigned)arg2 obj_num:(unsigned)arg3 ;
-(void)DownloaderFinishedDownload:(id)arg1 ;
-(char)DownloaderIsCorrectDoc:(id)arg1 ;
-(void)DownloaderInitialized:(id)arg1 ;
-(void)OpenURLAsync:(id)arg1 cache_file:(id)arg2 password:(id)arg3 options:(id)arg4 ;
-(void)PushViewingStates;
-(void)PopViewingStates:(char)arg1 ;
-(void)SetFreezeTile:(char)arg1 ;
-(int)GetCurCanvasId;
-(void)GetPageRects:(id)arg1 page_rects_info:(id)arg2 ;
-(void)GetPageRectsOnCanvas:(id)arg1 canvasNumber:(int)arg2 ;
-(void)DoProgressiveRender;
-(int)GetCellSideLength;
-(void)PurgeMemory;
-(void)SetMemInfo:(double)arg1 mem_cap:(double)arg2 ;
-(void)SetWrapperAnnotBitmapProc:(id)arg1 mode:(int)arg2 ;
-(void)SetWrapperCreateTileProc:(id)arg1 ;
-(void)SetWrapperDeluxeCreateTileProc:(id)arg1 ;
-(void)SetWrapperRemoveTileProc:(id)arg1 ;
-(void)SetPartDownloadedProc:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
