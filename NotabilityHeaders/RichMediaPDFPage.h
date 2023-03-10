/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/RichMediaPage.h>

@class PDFFile, NSArray, NSMutableArray, NSDictionary;

@interface RichMediaPDFPage : RichMediaPage {

	char _needsToCalculateGeometry;
	PDFFile* _pdfFile;
	int _pdfPageNumber;
	long _rotation;
	float _centeringOffset;
	float _drawScale;
	NSArray* _pdfLinks;
	NSMutableArray* _richMediaPDFPageHighlights;
	CGPoint _contentOffset;
	CGRect _scaledPageRect;

}

@property (assign,nonatomic) long rotation;                                            //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) CGRect scaledPageRect;                                    //@synthesize scaledPageRect=_scaledPageRect - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset;                                    //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) float centeringOffset;                                    //@synthesize centeringOffset=_centeringOffset - In the implementation block
@property (assign,nonatomic) float drawScale;                                          //@synthesize drawScale=_drawScale - In the implementation block
@property (assign,nonatomic) char needsToCalculateGeometry;                            //@synthesize needsToCalculateGeometry=_needsToCalculateGeometry - In the implementation block
@property (nonatomic,retain) NSArray * pdfLinks;                                       //@synthesize pdfLinks=_pdfLinks - In the implementation block
@property (nonatomic,retain) NSMutableArray * richMediaPDFPageHighlights;              //@synthesize richMediaPDFPageHighlights=_richMediaPDFPageHighlights - In the implementation block
@property (nonatomic,retain) PDFFile * pdfFile;                                        //@synthesize pdfFile=_pdfFile - In the implementation block
@property (assign,nonatomic) int pdfPageNumber;                                        //@synthesize pdfPageNumber=_pdfPageNumber - In the implementation block
@property (nonatomic,readonly) NSDictionary * pdfLinkFrames; 
-(void)drawPDFInContext:(id)arg1 rect:(CGRect)arg2 ;
-(void)setPdfFile:(PDFFile *)arg1 ;
-(void)setPdfPageNumber:(int)arg1 ;
-(float)pdfPageHeight;
-(NSDictionary *)pdfLinkFrames;
-(PDFFile *)pdfFile;
-(float)drawScale;
-(id)pdfTextUnderCharacterLimit:(int)arg1 ;
-(int)pdfPageNumber;
-(id)pdfHighlightForDocumentContentPoint:(CGPoint)arg1 buffer:(float)arg2 ;
-(id)pageCoordRectsForPDFSelections:(id)arg1 ;
-(CGPathRef)newPagePathForPDFPath:(CGPathRef)arg1 ;
-(char)didUpdateRichMediaPDFPageHighlights:(id)arg1 ;
-(char)isDocumentContentPointInPDFText:(CGPoint)arg1 includeBuffer:(char)arg2 ;
-(id)copyablePageContentOfPartialHighlightsForJustThisPage;
-(void)clearCachedPDFLinks;
-(char)hasRichMediaPDFPageHighlights;
-(CGRect)boundingRectForPDFSearchResult:(id)arg1 ;
-(char)shouldDrawTextPDFColoringWithRenderFlags:(unsigned)arg1 ;
-(void)drawTextPDFColoringInContext:(id)arg1 renderFlags:(unsigned)arg2 ;
-(void)renderPageInThumbnailContext:(id)arg1 renderFlags:(unsigned)arg2 ;
-(char)isDocumentContentPoint:(CGPoint)arg1 inPDFSelections:(id)arg2 ;
-(CGRect)documentRectFromCombinedHighlightRects:(id)arg1 ;
-(id)selectionsForDocumentContentPoint:(CGPoint)arg1 withTokenGranularity:(int)arg2 ;
-(id)selectionsForStartDocumentContentPoint:(CGPoint)arg1 endDocumentContentPoint:(CGPoint)arg2 ;
-(CGPoint)pointFromPDFToPageCoordinates:(CGPoint)arg1 ;
-(void)setNeedsToCalculateGeometry:(char)arg1 ;
-(CGRect)scaledPageRect;
-(void)setCenteringOffset:(float)arg1 ;
-(float)centeringOffset;
-(void)setScaledPageRect:(CGRect)arg1 ;
-(void)setDrawScale:(float)arg1 ;
-(void)_calculateCenteringOffset;
-(char)needsToCalculateGeometry;
-(void)_calculatePDFGeometry;
-(CGAffineTransform)_drawTransform;
-(void)drawPDFInContext:(id)arg1 rect:(CGRect)arg2 poolSize:(int)arg3 ;
-(char)_shouldDrawPDFHighlightWithRenderFlags:(unsigned)arg1 ;
-(NSMutableArray *)richMediaPDFPageHighlights;
-(CGAffineTransform)_coloringDrawTransform;
-(NSArray *)pdfLinks;
-(void)setPdfLinks:(NSArray *)arg1 ;
-(CGPoint)_pdfPagePointForDocumentContentPoint:(CGPoint)arg1 ;
-(id)_pdfColumns;
-(CGRect)rectFromPDFToPageCoordinates:(CGRect)arg1 ;
-(CGRect)pageCoordRectForPDFSelections:(id)arg1 ;
-(void)setRichMediaPDFPageHighlights:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setRotation:(long)arg1 ;
-(long)rotation;
@end

