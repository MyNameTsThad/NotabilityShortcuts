/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/GLIOFormatDelegate.h>

@interface GLIOFormatPDFDelegate : GLIOFormatDelegate
+(int)legacyFormat;
+(id)expectedAssociatedFileExtensions;
+(id)associatedUTIs;
+(char)supportsExport;
+(id)uncoordinatedUnpackageNoteAtURL:(id)arg1 toURL:(id)arg2 operation:(id)arg3 error:(id*)arg4 ;
+(id)uncoordinatedPackageNote:(id)arg1 destination:(id)arg2 operation:(id)arg3 ;
+(id)pdfExtension;
+(char)uncoordinatedUnpackageContents:(id)arg1 toNote:(id)arg2 operation:(id)arg3 ;
+(id)zipExtension;
+(id)previewImageForPDFData:(id)arg1 ;
+(id)previewImageForContentsAtURL:(id)arg1 ;
+(id)previewImageForPDF:(CGPDFDocumentRef)arg1 ;
+(id)drawPDFPage:(CGPDFPageRef)arg1 inDocument:(CGPDFDocumentRef)arg2 clampingSize:(CGSize)arg3 ;
+(id)localizedFormatDescriptionForFormat:(int)arg1 ;
+(char)supportsExportPreview;
+(char)supportsImportToNote;
+(char)supportsPageRangeSelection;
+(id)uncoordinatedExportPreviewForNote:(id)arg1 operation:(id)arg2 ;
+(id)previewForContentsAtURL:(id)arg1 ;
+(char)isPDF;
+(id)drawingAttributesForPage:(CGPDFPageRef)arg1 clampingSize:(CGSize)arg2 ;
+(id)localizedDescription;
@end

