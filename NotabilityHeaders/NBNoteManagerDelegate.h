/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:07 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NBNoteManagerDelegate <NSObject>
@required
-(void)noteManager:(id)arg1 requestsOpenNote:(id)arg2 withSearchQuery:(id)arg3 onLeft:(char)arg4 completion:(/*^block*/id)arg5;
-(void)noteManager:(id)arg1 requestsOpenNote:(id)arg2 withSearchQuery:(id)arg3 completion:(/*^block*/id)arg4;
-(void)noteManagerRequestsSwitchNotes:(id)arg1 completion:(/*^block*/id)arg2;
-(void)noteManager:(id)arg1 requestsCloseNote:(id)arg2 completion:(/*^block*/id)arg3;
-(id)noteManager:(id)arg1 draggedNote:(id)arg2 location:(CGPoint)arg3 view:(id)arg4 status:(int)arg5;

@end

