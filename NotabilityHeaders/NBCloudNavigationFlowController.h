/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/NBCloudFlowController.h>

@protocol NBCloudNavigationFlowControllerViewDelegate;
@class NICloudImportTableViewController, NBSubject, NBNoteStore, NBImportController, GLCloudFileMetadata, NSString;

@interface NBCloudNavigationFlowController : NSObject <NBCloudFlowController> {

	id<NBCloudNavigationFlowControllerViewDelegate> _viewDelegate;
	NICloudImportTableViewController* _rootViewController;
	NBSubject* _destinationSubject;
	NBNoteStore* _store;
	/*^block*/id _viewControllerConfiguration;
	NBImportController* _importController;
	Class _service;
	GLCloudFileMetadata* _firstDirectory;

}

@property (nonatomic,copy) id viewControllerConfiguration;                                                     //@synthesize viewControllerConfiguration=_viewControllerConfiguration - In the implementation block
@property (nonatomic,retain) NBImportController * importController;                                            //@synthesize importController=_importController - In the implementation block
@property (assign,nonatomic,__weak) NBNoteStore * store;                                                       //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) Class service;                                                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) GLCloudFileMetadata * firstDirectory;                                             //@synthesize firstDirectory=_firstDirectory - In the implementation block
@property (assign,nonatomic,__weak) id<NBCloudNavigationFlowControllerViewDelegate> viewDelegate;              //@synthesize viewDelegate=_viewDelegate - In the implementation block
@property (nonatomic,retain) NICloudImportTableViewController * rootViewController;                            //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) NBSubject * destinationSubject;                                                   //@synthesize destinationSubject=_destinationSubject - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)yieldPreparedViewControllerForPath:(id)arg1 metadata:(id)arg2 service:(Class)arg3 flowController:(id)arg4 configuration:(/*^block*/id)arg5 ;
+(id)_generateLoadingRequestForService:(Class)arg1 withPath:(id)arg2 andMetadata:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
+(id)keyPathsForValuesAffectingDestinationSubject;
-(void)setViewDelegate:(id<NBCloudNavigationFlowControllerViewDelegate>)arg1 ;
-(void)setDestinationSubject:(NBSubject *)arg1 ;
-(id)registerInterestInMetadata:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NBSubject *)destinationSubject;
-(void)requestCancelImportOfFile:(id)arg1 ;
-(void)requestOpenNote:(id)arg1 ;
-(void)requestPushSubjectPickerModalViewForDocument:(id)arg1 metadata:(id)arg2 ;
-(id<NBCloudNavigationFlowControllerViewDelegate>)viewDelegate;
-(char)isFileImportable:(id)arg1 ;
-(char)didSelectMetadataItem:(id)arg1 inCurrentCloudPath:(id)arg2 ;
-(id)initWithService:(Class)arg1 importController:(id)arg2 cloudPath:(id)arg3 metadata:(id)arg4 viewControllerConfiguration:(/*^block*/id)arg5 ;
-(void)setViewControllerConfiguration:(id)arg1 ;
-(id)viewControllerConfiguration;
-(NBImportController *)importController;
-(id)initWithService:(Class)arg1 importController:(id)arg2 cloudPath:(id)arg3 metadata:(id)arg4 ;
-(void)setImportController:(NBImportController *)arg1 ;
-(GLCloudFileMetadata *)firstDirectory;
-(void)setFirstDirectory:(GLCloudFileMetadata *)arg1 ;
-(NICloudImportTableViewController *)rootViewController;
-(void)setRootViewController:(NICloudImportTableViewController *)arg1 ;
-(void)setService:(Class)arg1 ;
-(Class)service;
-(void)setStore:(NBNoteStore *)arg1 ;
-(NBNoteStore *)store;
@end

