/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTCallback : NSObject {

	void* swigCPtr;
	char swigCMemOwn;

}
+(void)StaticRenderBeginEventProc:(void*)arg1 ;
+(void)StaticRenderFinishEventProc:(void*)arg1 cancelled:(char)arg2 ;
+(void)StaticErrorReportProc:(id)arg1 data:(void*)arg2 ;
+(void)StaticCurrentPageProc:(int)arg1 num_pages:(int)arg2 data:(void*)arg3 ;
+(void)StaticJavaScriptEventProc:(id)arg1 json:(id)arg2 data:(void*)arg3 ;
+(void)StaticCurrentZoomProc:(double)arg1 data:(void*)arg2 ;
+(void)StaticThumbAsyncHandler:(int)arg1 was_thumb_found:(char)arg2 thumb_buf:(id)arg3 thumb_width:(int)arg4 thumb_height:(int)arg5 custom_data:(void*)arg6 ;
+(void)StaticRequestRenderInWorkerThread:(void*)arg1 ;
+(void)StaticFindTextHandler:(char)arg1 selection:(id)arg2 custom_data:(void*)arg3 ;
+(void)StaticCreateTileProc:(void*)arg1 buffer:(id)arg2 originX:(int)arg3 originY:(int)arg4 width:(int)arg5 height:(int)arg6 pageNum:(int)arg7 cellNumber:(long long)arg8 finalRender:(char)arg9 predictionRender:(char)arg10 tilesRemaining:(int)arg11 firstTile:(char)arg12 canvasWidth:(int)arg13 canvasHeight:(int)arg14 cellSideLength:(int)arg15 cellPerRow:(int)arg16 cellPerCol:(int)arg17 thumbnailId:(int)arg18 ;
+(void)StaticAnnotBitmapProc:(void*)arg1 operation_type:(int)arg2 buffer:(id)arg3 width:(unsigned)arg4 height:(unsigned)arg5 stride:(unsigned)arg6 page_num:(unsigned)arg7 annot_index:(unsigned)arg8 annot_key:(void*)arg9 x_in_page:(long long)arg10 y_in_page:(long long)arg11 x_offset:(int)arg12 y_offset:(int)arg13 remaining_tiles:(int)arg14 sequence_number:(int)arg15 x_page_size:(long long)arg16 y_page_size:(long long)arg17 ;
+(void)StaticDeluxeCreateTileProc:(void*)arg1 buffer:(id)arg2 width:(unsigned)arg3 height:(unsigned)arg4 stride:(unsigned)arg5 page_num:(unsigned)arg6 x_page_loc:(unsigned long long)arg7 y_page_loc:(unsigned long long)arg8 zoomed_page_width:(unsigned)arg9 zoomed_page_height:(unsigned)arg10 tile_id:(unsigned)arg11 x_in_page:(unsigned)arg12 y_in_page:(unsigned)arg13 canvas_id:(int)arg14 remaining_tiles:(int)arg15 tile_type:(int)arg16 sequence_number:(int)arg17 ;
+(void)StaticRemoveTileProc:(void*)arg1 canvasNumber:(int)arg2 cellNumber:(long long)arg3 thumbnailId:(int)arg4 sequenceNumber:(int)arg5 ;
+(void)StaticPartDownloadedProc:(int)arg1 doc:(id)arg2 pageNum:(unsigned)arg3 objNum:(unsigned)arg4 message:(id)arg5 customData:(void*)arg6 ;
-(id)initWithCptr:(void*)arg1 ;
-(void*)getCptr;
-(void)setSwigCMemOwn:(char)arg1 ;
-(void)RenderBeginEventProc;
-(void)RenderFinishEventProc:(char)arg1 ;
-(void)ErrorReportProc:(id)arg1 ;
-(void)CurrentPageProc:(int)arg1 num_pages:(int)arg2 ;
-(void)JavaScriptEventProc:(id)arg1 json:(id)arg2 ;
-(void)CurrentZoomProc:(double)arg1 ;
-(void)ThumbAsyncHandler:(int)arg1 was_thumb_found:(char)arg2 thumb_buf:(id)arg3 thumb_width:(int)arg4 thumb_height:(int)arg5 ;
-(void)RequestRenderInWorkerThread;
-(void)FindTextHandler:(char)arg1 selection:(id)arg2 ;
-(void)CreateTileProc:(id)arg1 originX:(int)arg2 originY:(int)arg3 width:(int)arg4 height:(int)arg5 pagNum:(int)arg6 cellNumber:(long long)arg7 finalRender:(char)arg8 predictionRender:(char)arg9 tilesRemaining:(int)arg10 firstTile:(char)arg11 canvasWidth:(int)arg12 canvasHeight:(int)arg13 cellSideLength:(int)arg14 cellPerRow:(int)arg15 cellPerCol:(int)arg16 thumbnailId:(int)arg17 ;
-(void)AnnotBitmapProc:(int)arg1 buffer:(id)arg2 width:(unsigned)arg3 height:(unsigned)arg4 stride:(unsigned)arg5 page_num:(unsigned)arg6 annot_index:(unsigned)arg7 annot_key:(void*)arg8 x_in_page:(long long)arg9 y_in_page:(long long)arg10 x_offset:(int)arg11 y_offset:(int)arg12 remaining_tiles:(int)arg13 sequence_number:(int)arg14 x_page_size:(long long)arg15 y_page_size:(long long)arg16 ;
-(void)DeluxeCreateTileProc:(id)arg1 width:(unsigned)arg2 height:(unsigned)arg3 stride:(unsigned)arg4 page_num:(unsigned)arg5 x_page_loc:(unsigned long long)arg6 y_page_loc:(unsigned long long)arg7 zoomed_page_width:(unsigned)arg8 zoomed_page_height:(unsigned)arg9 tile_id:(unsigned)arg10 x_in_page:(unsigned)arg11 y_in_page:(unsigned)arg12 canvas_id:(int)arg13 remaining_tiles:(int)arg14 tile_type:(int)arg15 sequence_number:(int)arg16 ;
-(void)RemoveTileProc:(int)arg1 cellNumber:(long long)arg2 thumbnailId:(int)arg3 sequenceNumber:(int)arg4 ;
-(void)PartDownloadedProc:(int)arg1 doc:(id)arg2 pageNum:(unsigned)arg3 objNum:(unsigned)arg4 message:(id)arg5 ;
-(id)init;
-(void)dealloc;
@end

