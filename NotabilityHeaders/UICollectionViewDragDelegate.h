/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewDragDelegate <NSObject>
@optional
-(id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
-(char)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
-(char)collectionView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;

@required
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;

@end

