/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NBNoteDocumentDelegate
@required
-(void)scheduleDeleteOfNewAndEmptyDocument:(id)arg1;
-(void)accommodateForDocumentDeletion:(id)arg1;
-(char)documentIsAllowedToDelete:(id)arg1;
-(void)documentDidUpdateSubject:(id)arg1;
-(void)document:(id)arg1 requestsSetExpectedThumbnailSize:(CGSize)arg2;
-(void)documentDidUpdateMetadata:(id)arg1;
-(id)documentRequestsLocalMetadata:(id)arg1;
-(id)documentRequestsNBSubject:(id)arg1;
-(void)document:(id)arg1 didUpdatePackagePathFrom:(id)arg2 to:(id)arg3;
-(void)document:(id)arg1 requestsSetLastSyncedDate:(id)arg2 lastSyncedPath:(id)arg3;
-(void)document:(id)arg1 requestsSetLastSyncedDate:(id)arg2 lastSyncedPath:(id)arg3 metadata:(id)arg4;
-(void)document:(id)arg1 updatedViewState:(id)arg2;
-(id)documentRequestsViewState:(id)arg1;
-(char)deleteDocumentFromStoreAndDisk:(id)arg1 shouldMoveToRecentlyDeleted:(char)arg2;
-(void)document:(id)arg1 didMoveFromURL:(id)arg2 toURL:(id)arg3;

@end
