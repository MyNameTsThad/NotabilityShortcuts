/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NBNoteDocumentDataStoreNBOrganizerDataStore;
@class NSDate;

@interface NBLibraryDaemon : NSObject {

	char _ownerWantsDocumentsObservation;
	char _applicationInForeground;
	char _observingDocumentsDirectory;
	id<NBNoteDocumentDataStore><NBOrganizerDataStore> _dataSource;
	NSDate* _lastForegroundDate;

}

@property (nonatomic,retain) NSDate * lastForegroundDate;                                                      //@synthesize lastForegroundDate=_lastForegroundDate - In the implementation block
@property (assign) char ownerWantsDocumentsObservation;                                                        //@synthesize ownerWantsDocumentsObservation=_ownerWantsDocumentsObservation - In the implementation block
@property (assign) char applicationInForeground;                                                               //@synthesize applicationInForeground=_applicationInForeground - In the implementation block
@property (assign) char observingDocumentsDirectory;                                                           //@synthesize observingDocumentsDirectory=_observingDocumentsDirectory - In the implementation block
@property (assign,nonatomic,__weak) id<NBNoteDocumentDataStore><NBOrganizerDataStore> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(char)_shouldBeginObservation;
-(void)_startObservingDocumentsDirectoryFileChanges;
-(char)_shouldEndObservation;
-(void)_stopObservingDocumentsDirectoryFileChanges;
-(void)setOwnerWantsDocumentsObservation:(char)arg1 ;
-(char)observingDocumentsDirectory;
-(char)ownerWantsDocumentsObservation;
-(char)applicationInForeground;
-(void)setObservingDocumentsDirectory:(char)arg1 ;
-(void)documentsDirectoryDidUpdate:(id)arg1 ;
-(void)importNotesFromDocumentsDirectoryIfNeeded;
-(void)setApplicationInForeground:(char)arg1 ;
-(NSDate *)lastForegroundDate;
-(void)setLastForegroundDate:(NSDate *)arg1 ;
-(void)startObservingDocumentsDirectoryFileChanges;
-(void)stopObservingDocumentsDirectoryFileChanges;
-(id)init;
-(void)setDataSource:(id<NBNoteDocumentDataStore><NBOrganizerDataStore>)arg1 ;
-(void)dealloc;
-(id<NBNoteDocumentDataStore><NBOrganizerDataStore>)dataSource;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
@end

