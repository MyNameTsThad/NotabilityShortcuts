/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NBPageManagerListCellDelegate <NSObject>
@optional
-(void)pageManagerCell:(id)arg1 requestsSetBookmarked:(char)arg2;

@required
-(void)pageManagerCell:(id)arg1 handleGestureFromRecognizer:(id)arg2 forThumbnailView:(id)arg3;
-(char)pageManagerCell:(id)arg1 gestureShouldBegin:(id)arg2;
-(void)pageManagerCellDidSelect:(id)arg1;
-(void)pageManagerCellDidSelectOptions:(id)arg1;

@end

