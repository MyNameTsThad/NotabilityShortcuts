/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSItemProvider, NSString, NBNoteController;


@protocol GLDraggable <NSObject>
@property (nonatomic,readonly) char canDrag; 
@property (assign,nonatomic) char isDragging; 
@property (nonatomic,readonly) char allowDragMove; 
@property (assign,nonatomic) int dropOperation; 
@property (nonatomic,readonly) int dragContent; 
@property (nonatomic,readonly) NSItemProvider * dragItemProvider; 
@property (nonatomic,copy,readonly) NSString * dragSuggestedName; 
@property (assign,nonatomic,__weak) NBNoteController * dragNoteController; 
@required
-(char)allowDragMove;
-(int)dropOperation;
-(NSString *)dragSuggestedName;
-(NSItemProvider *)dragItemProvider;
-(NBNoteController *)dragNoteController;
-(void)setDragNoteController:(id)arg1;
-(void)prepareForDragWithNoteController:(id)arg1;
-(id)dragItemWithPreviewProvider:(/*^block*/id)arg1;
-(id)targetedDragPreviewWithContainer:(id)arg1;
-(void)resetForDrag;
-(char)canDrag;
-(void)setDropOperation:(int)arg1;
-(int)dragContent;
-(char)isDragging;
-(void)setIsDragging:(char)arg1;

@end
