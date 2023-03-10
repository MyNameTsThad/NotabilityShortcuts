/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <Notability/NBExportOperationDelegate.h>

@protocol NotabilityExporterDelegate;
@class PDFExporter, NSMutableArray, UIViewController, NSArray, NSString;

@interface NotabilityExporter : NSObject <MFMailComposeViewControllerDelegate, NBExportOperationDelegate> {

	id<NotabilityExporterDelegate> delegate;
	char autosyncCancelled;
	PDFExporter* pdfExporter;
	NSMutableArray* errors;
	UIViewController* _viewControllerToPresentProgressFrom;
	NSArray* _currentlyRunningExports;

}

@property (retain) NSArray * currentlyRunningExports;                                                    //@synthesize currentlyRunningExports=_currentlyRunningExports - In the implementation block
@property (assign,nonatomic,__weak) id<NotabilityExporterDelegate> delegate; 
@property (assign,nonatomic,__weak) UIViewController * viewControllerToPresentProgressFrom;              //@synthesize viewControllerToPresentProgressFrom=_viewControllerToPresentProgressFrom - In the implementation block
@property (readonly) NSString * statusString; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNoteViewExporter;
-(void)setCurrentlyRunningExports:(NSArray *)arg1 ;
-(NSArray *)currentlyRunningExports;
-(void)presentErrorAlertWithMessage:(id)arg1 ;
-(void)exportFailed;
-(char)doExportOfNote:(id)arg1 exportOperation:(id)arg2 forPrinting:(char)arg3 ;
-(void)addExport:(id)arg1 ;
-(char)exportDocuments:(id)arg1 operation:(id)arg2 ;
-(void)document:(id)arg1 finishedPackagingForExportWithSuccess:(char)arg2 resultingPath:(id)arg3 options:(id)arg4 ;
-(id)exportFileAtPath:(id)arg1 document:(id)arg2 operation:(id)arg3 ;
-(char)emailPaths:(id)arg1 options:(id)arg2 ;
-(char)sendPathsToiTunes:(id)arg1 options:(id)arg2 ;
-(id)setupPrintInteractionControllerForData:(id)arg1 ;
-(void)openDocumentAtPathInAnotherApp:(id)arg1 ;
-(void)displayAirDropMenuForPackagedDocumentsAtPaths:(id)arg1 ;
-(void)deleteTemporaryPath:(id)arg1 ;
-(void)exportSucceededNoAnimation;
-(UIViewController *)viewControllerToPresentProgressFrom;
-(id)buildFinalExportPathFromBasePath:(id)arg1 subject:(id)arg2 documentName:(id)arg3 forAutosync:(char)arg4 ;
-(void)request:(id)arg1 completed:(char)arg2 withDocument:(id)arg3 ;
-(void)removeExport:(id)arg1 ;
-(void)exportForWeirdClassesWithResultingPathsOrData:(id)arg1 options:(id)arg2 ;
-(void)exportSucceeded;
-(char)tweetImage:(/*^block*/id)arg1 inNote:(id)arg2 ;
-(void)cancelAllCurrentlyRunningExports;
-(void)exportOperation:(id)arg1 finishedPackagingWithErrors:(char)arg2 resultingPathsOrPrintingData:(id)arg3 ;
-(void)exportOperation:(id)arg1 finishedExportingWithErrors:(id)arg2 ;
-(char)packageDocuments:(id)arg1 toPath:(id)arg2 inFormat:(Class)arg3 ;
-(char)exportDocuments:(id)arg1 forAutosync:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)previewForExportOfNote:(id)arg1 exportOperation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)tweetPage:(int)arg1 inNote:(id)arg2 ;
-(void)cancelAutosync;
-(void)setViewControllerToPresentProgressFrom:(UIViewController *)arg1 ;
-(id)init;
-(void)setDelegate:(id<NotabilityExporterDelegate>)arg1 ;
-(void)dealloc;
-(id<NotabilityExporterDelegate>)delegate;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(NSString *)statusString;
@end

