/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NIExportMenuControllerDelegate, ExportMenuViewController;
@class NSDictionary, ExportFormatTableView, UIViewController, GLCloudServiceOptions, NBNoteDocument, NBCloudNavigationFlowController, NSArray;

@interface NIExportMenuController : NSObject {

	id<NIExportMenuControllerDelegate> exportDelegate;
	NSDictionary* formatOptionsDictionary;
	ExportFormatTableView* formatController;
	char shouldShowDestinationController;
	char showingDestinationController;
	char _exportingMultipleNotes;
	UIViewController*<ExportMenuViewController> exportMenuViewController;
	UIViewController* _modalPresentationViewController;
	Class _requestClass;
	GLCloudServiceOptions* _serviceOptions;
	id _richMediaDocument;
	NBNoteDocument* _document;
	NBCloudNavigationFlowController* _pathPickerFlowController;

}

@property (nonatomic,retain) NBCloudNavigationFlowController * pathPickerFlowController;                               //@synthesize pathPickerFlowController=_pathPickerFlowController - In the implementation block
@property (nonatomic,retain) GLCloudServiceOptions * serviceOptions;                                                   //@synthesize serviceOptions=_serviceOptions - In the implementation block
@property (assign,nonatomic,__weak) id<NIExportMenuControllerDelegate> exportDelegate; 
@property (assign,nonatomic,__weak) UIViewController*<ExportMenuViewController> exportMenuViewController; 
@property (assign,nonatomic,__weak) UIViewController * modalPresentationViewController;                                //@synthesize modalPresentationViewController=_modalPresentationViewController - In the implementation block
@property (assign,nonatomic) char exportingMultipleNotes;                                                              //@synthesize exportingMultipleNotes=_exportingMultipleNotes - In the implementation block
@property (assign,nonatomic,__weak) Class requestClass;                                                                //@synthesize requestClass=_requestClass - In the implementation block
@property (nonatomic,readonly) NSDictionary * formatOptionsDictionary; 
@property (nonatomic,readonly) NSArray * applicableFormatOptions; 
@property (nonatomic,readonly) NSArray * applicableDestinationOptions; 
@property (nonatomic,retain) id richMediaDocument;                                                                     //@synthesize richMediaDocument=_richMediaDocument - In the implementation block
@property (nonatomic,retain) NBNoteDocument * document;                                                                //@synthesize document=_document - In the implementation block
+(id)kExportTableViewSeparatorColor;
-(id)richMediaDocument;
-(void)setModalPresentationViewController:(UIViewController *)arg1 ;
-(char)exportingMultipleNotes;
-(void)setExportingMultipleNotes:(char)arg1 ;
-(GLCloudServiceOptions *)serviceOptions;
-(NSDictionary *)formatOptionsDictionary;
-(void)setServiceOptions:(GLCloudServiceOptions *)arg1 ;
-(UIViewController*<ExportMenuViewController>)exportMenuViewController;
-(void)doExport;
-(char)linkIfNeededWithBlock:(/*^block*/id)arg1 ;
-(void)pathPickerButtonAction;
-(void)pickPath;
-(id)pathPickerBottomBarItemsForFolder:(id)arg1 service:(Class)arg2 ;
-(void)setPathPickerFlowController:(NBCloudNavigationFlowController *)arg1 ;
-(id)configurablesForCurrentRequestClass;
-(void)setupTableHeader;
-(NSArray *)applicableFormatOptions;
-(NSArray *)applicableDestinationOptions;
-(void)pickFormatFromViewController:(id)arg1 ;
-(char)presentLoginControllerIfNeeded:(/*^block*/id)arg1 ;
-(void)exportAction;
-(char)previewForExportWithCompletion:(/*^block*/id)arg1 ;
-(id)currentOptions;
-(void)toggleExportBackground:(id)arg1 ;
-(void)toggleExportImages:(id)arg1 ;
-(void)toggleExportRecordings:(id)arg1 ;
-(void)togglePageMargin:(id)arg1 ;
-(void)choosePageRange;
-(void)showDestinationController;
-(id<NIExportMenuControllerDelegate>)exportDelegate;
-(void)setExportDelegate:(id<NIExportMenuControllerDelegate>)arg1 ;
-(void)setExportMenuViewController:(UIViewController*<ExportMenuViewController>)arg1 ;
-(UIViewController *)modalPresentationViewController;
-(void)setRichMediaDocument:(id)arg1 ;
-(NBCloudNavigationFlowController *)pathPickerFlowController;
-(id)init;
-(NBNoteDocument *)document;
-(void)setDocument:(NBNoteDocument *)arg1 ;
-(void)setRequestClass:(Class)arg1 ;
-(Class)requestClass;
@end

