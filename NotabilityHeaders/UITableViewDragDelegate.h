/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableViewDragDelegate <NSObject>
@optional
-(id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;
-(char)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
-(char)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;

@required
-(id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;

@end

