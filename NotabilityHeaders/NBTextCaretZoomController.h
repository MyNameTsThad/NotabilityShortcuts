/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/ZoomViewDataSource.h>

@protocol NBTextCaretZoomControllerDataSource;
@class ZoomView, NSString;

@interface NBTextCaretZoomController : NSObject <ZoomViewDataSource> {

	ZoomView* zoomView;
	id<NBTextCaretZoomControllerDataSource> dataSource;

}

@property (assign,nonatomic,__weak) id<NBTextCaretZoomControllerDataSource> dataSource; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)hideZoomView;
+(id)popoverZoomView;
+(id)sharedZoomView;
+(id)sharedTextCaretZoomController;
+(char)showZoomViewPopoverForRect:(CGRect)arg1 inView:(id)arg2 inPopover:(char)arg3 ;
+(char)isZoomViewVisible;
+(void)setDataSource:(id)arg1 ;
-(CGRect)zoomView:(id)arg1 rectInDataSourceCoords:(CGRect)arg2 fromView:(id)arg3 ;
-(void)renderInZoomView:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)init;
-(void)setDataSource:(id<NBTextCaretZoomControllerDataSource>)arg1 ;
-(void)dealloc;
-(id<NBTextCaretZoomControllerDataSource>)dataSource;
@end

