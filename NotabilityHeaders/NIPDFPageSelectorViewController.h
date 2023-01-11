/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLCollectionViewController.h>
#import <Notability/GLCollectionViewControllerDelegate.h>

@protocol NBOrganizerDataStore;
@class NSURL, NBSubject, NBBarButtonItem, NSString;

@interface NIPDFPageSelectorViewController : GLCollectionViewController <GLCollectionViewControllerDelegate> {

	NSURL* _pdfURL;
	/*^block*/id _viewWillAppearHandler;
	/*^block*/id _viewWillDisappearHandler;
	/*^block*/id _pagesPickedHandler;
	id<NBOrganizerDataStore> _dataSource;
	NBSubject* _destinationSubject;
	NBBarButtonItem* _selectOrDeselectItem;
	NBBarButtonItem* _pickOrganizerItem;

}

@property (nonatomic,copy) id pagesPickedHandler;                                     //@synthesize pagesPickedHandler=_pagesPickedHandler - In the implementation block
@property (assign,nonatomic,__weak) id<NBOrganizerDataStore> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NBSubject * destinationSubject;                          //@synthesize destinationSubject=_destinationSubject - In the implementation block
@property (nonatomic,readonly) NBBarButtonItem * selectOrDeselectItem;                //@synthesize selectOrDeselectItem=_selectOrDeselectItem - In the implementation block
@property (nonatomic,readonly) NBBarButtonItem * pickOrganizerItem;                   //@synthesize pickOrganizerItem=_pickOrganizerItem - In the implementation block
@property (nonatomic,readonly) NSURL * pdfURL;                                        //@synthesize pdfURL=_pdfURL - In the implementation block
@property (nonatomic,copy) id viewWillAppearHandler;                                  //@synthesize viewWillAppearHandler=_viewWillAppearHandler - In the implementation block
@property (nonatomic,copy) id viewWillDisappearHandler;                               //@synthesize viewWillDisappearHandler=_viewWillDisappearHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDestinationSubject:(NBSubject *)arg1 ;
-(NBSubject *)destinationSubject;
-(void)collectionViewController:(id)arg1 didSelectContentProvider:(id)arg2 ;
-(void)collectionViewController:(id)arg1 didDeselectContentProvider:(id)arg2 ;
-(void)setViewWillDisappearHandler:(id)arg1 ;
-(void)importButtonAction;
-(void)_selectAllIndexPathsAnimated:(char)arg1 ;
-(void)_updateForSelectedItemCountChanged;
-(id)viewWillDisappearHandler;
-(NBBarButtonItem *)selectOrDeselectItem;
-(id)initWithPDFURL:(id)arg1 destinationSubject:(id)arg2 dataSource:(id)arg3 pagesPickedHandler:(/*^block*/id)arg4 ;
-(void)setPagesPickedHandler:(id)arg1 ;
-(void)selectOrDeselectAllButtonAction;
-(void)pickOrganizerButtonAction;
-(NBBarButtonItem *)pickOrganizerItem;
-(id)pagesPickedHandler;
-(void)setDataSource:(id<NBOrganizerDataStore>)arg1 ;
-(id<NBOrganizerDataStore>)dataSource;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(NSURL *)pdfURL;
-(id)viewWillAppearHandler;
-(void)setViewWillAppearHandler:(id)arg1 ;
@end

