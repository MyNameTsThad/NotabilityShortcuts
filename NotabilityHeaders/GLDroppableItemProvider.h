/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/GLDroppable.h>

@protocol GLDroppableView;
@class NSItemProvider, NSProgress, NSString;

@interface GLDroppableItemProvider : NSObject <GLDroppable> {

	char _isDropping;
	char _isDropped;
	char _isDropCancelled;
	id<GLDroppableView> _dropView;
	int _dropOperation;
	int _dragContent;
	NSItemProvider* _itemProvider;
	NSProgress* _itemProviderProgress;
	CGPoint _dropLocation;

}

@property (assign,nonatomic) char isDropping;                                  //@synthesize isDropping=_isDropping - In the implementation block
@property (assign,nonatomic) char isDropped;                                   //@synthesize isDropped=_isDropped - In the implementation block
@property (assign,nonatomic) char isDropCancelled;                             //@synthesize isDropCancelled=_isDropCancelled - In the implementation block
@property (nonatomic,retain) NSItemProvider * itemProvider;                    //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) NSProgress * itemProviderProgress;                //@synthesize itemProviderProgress=_itemProviderProgress - In the implementation block
@property (assign,nonatomic) CGPoint dropLocation;                             //@synthesize dropLocation=_dropLocation - In the implementation block
@property (assign,nonatomic,__weak) id<GLDroppableView> dropView;              //@synthesize dropView=_dropView - In the implementation block
@property (assign,nonatomic) int dropOperation;                                //@synthesize dropOperation=_dropOperation - In the implementation block
@property (nonatomic,readonly) int dragContent;                                //@synthesize dragContent=_dragContent - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)droppableForItemProvider:(id)arg1 ;
-(void)cancelDrop;
-(void)setIsDropping:(char)arg1 ;
-(void)setIsDropCancelled:(char)arg1 ;
-(void)resetForDrop;
-(void)setIsDropped:(char)arg1 ;
-(id)dropWithCompletion:(/*^block*/id)arg1 ;
-(char)isDropping;
-(char)isDropped;
-(char)isDropCancelled;
-(int)dropOperation;
-(id<GLDroppableView>)dropView;
-(CGPoint)dropLocation;
-(void)setDropView:(id<GLDroppableView>)arg1 ;
-(void)setDropLocation:(CGPoint)arg1 ;
-(void)setDropOperation:(int)arg1 ;
-(int)dragContent;
-(void)setItemProviderProgress:(NSProgress *)arg1 ;
-(void)_dropWithCompletion:(/*^block*/id)arg1 ;
-(NSProgress *)itemProviderProgress;
-(id)initWithItemProvider:(id)arg1 ;
-(void)dealloc;
-(NSItemProvider *)itemProvider;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
@end

