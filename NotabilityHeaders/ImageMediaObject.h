/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/GenericMediaObject.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol ImageMediaObjectDelegate;
@class Figure, GLSnapshot, UIMenuItem, UIImage;

@interface ImageMediaObject : GenericMediaObject <NSCoding> {

	Figure* figure;
	id<ImageMediaObjectDelegate> imageObjectDelegate;
	GLSnapshot* _displayImage;
	CGLayerRef _cgLayer;

}

@property (readonly) UIMenuItem * editItem; 
@property (nonatomic,retain) GLSnapshot * displayImage;                                            //@synthesize displayImage=_displayImage - In the implementation block
@property (assign,nonatomic) CGLayerRef cgLayer;                                                   //@synthesize cgLayer=_cgLayer - In the implementation block
@property (nonatomic,retain) Figure * figure; 
@property (nonatomic,__weak,readonly) UIImage * image; 
@property (assign,nonatomic,__weak) id<ImageMediaObjectDelegate> imageObjectDelegate; 
+(id)mediaObjectWithImage:(id)arg1 ;
+(id)mediaObjectWithImage:(id)arg1 saveAsJPEG:(char)arg2 ;
-(void)memoryWarning;
-(void)setNoteDocument:(id)arg1 ;
-(Figure *)figure;
-(void)wasUndeleted;
-(void)refreshDisplayImage;
-(id)dragSuggestedName;
-(void)prepareForDragWithNoteController:(id)arg1 ;
-(id)initWithImage:(id)arg1 saveAsJPEG:(char)arg2 ;
-(void)unloadImage;
-(void)_destroyCGLayer;
-(void)setDisplayImage:(GLSnapshot *)arg1 ;
-(CGLayerRef)cgLayer;
-(void)setCgLayer:(CGLayerRef)arg1 ;
-(CGSize)layerSizeForScale:(float)arg1 ;
-(CGLayerRef)createLayerWithScale:(float)arg1 ;
-(void)clipRoundedCornersInContext:(id)arg1 ;
-(void)_recreateCGLayerIfNecessaryWithScale:(float)arg1 ;
-(void)addSnapshotsToFileWrapperIfNeeded:(id)arg1 ;
-(void)setWebContentWithImage:(id)arg1 ;
-(void)resizeWithStartingSize:(CGSize)arg1 delta:(CGSize)arg2 mode:(int)arg3 ;
-(void)drawContentInContext:(id)arg1 inRect:(CGRect)arg2 shouldDoCompleteRender:(char)arg3 shouldRenderCaption:(char)arg4 renderFlags:(unsigned)arg5 ;
-(void)setFigure:(Figure *)arg1 ;
-(id<ImageMediaObjectDelegate>)imageObjectDelegate;
-(void)setImageObjectDelegate:(id<ImageMediaObjectDelegate>)arg1 ;
-(id)editMenuItems;
-(void)editButtonAction:(id)arg1 ;
-(UIMenuItem *)editItem;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIImage *)image;
-(void)copy:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(GLSnapshot *)displayImage;
-(id)fileName;
@end
