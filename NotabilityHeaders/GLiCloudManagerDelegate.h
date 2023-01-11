/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:07 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GLiCloudManagerDelegate <NSObject>
@optional
-(id)dedupeNBNFolderURLsByCurrentState:(id)arg1;

@required
-(void)iCloudMetadataItemsUpdated:(id)arg1;
-(void)iCloudMetadataItemsRemoved:(id)arg1;
-(void)iCloudMetadataItemsAdded:(id)arg1;
-(void)iCloudUpdateReceivedWithMetadataItems:(id)arg1;
-(char)canHandleiCloudEnabledChanges;
-(void)userDidTurnOffiCloudWith:(id)arg1 keepiCloudDocuments:(char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)userDidTurnOniCloudWithCompletionHandler:(/*^block*/id)arg1;
-(int)noteCount;

@end

