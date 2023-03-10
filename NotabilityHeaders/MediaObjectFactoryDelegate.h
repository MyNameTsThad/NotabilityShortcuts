/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MediaObjectFactoryDelegate <NSObject>
@required
-(CGPoint*)mediaObjectFactoryRequestsScreenCenterInDocumentCoords:(id)arg1;
-(id)mediaObjectFactoryRequestsCurrentNoteDocument:(id)arg1;
-(CGPoint*)mediaObjectFactory:(id)arg1 requestsConvertPointFromWindow:(CGPoint)arg2;
-(void)mediaObjectFactory:(id)arg1 adjustMediaObjectResizingViewForObject:(id)arg2;
-(void)mediaObjectFactory:(id)arg1 didDismissEditingViewControllerForObject:(id)arg2;
-(CGPoint*)mediaObjectFactoryRequestsContentOffsetOfInsertingView:(id)arg1;
-(void)mediaObjectFactory:(id)arg1 willInsertMediaObject:(id)arg2;
-(void)mediaObjectFactory:(id)arg1 didInsertMediaObject:(id)arg2 inViewRect:(CGRect)arg3;
-(id)mediaObjectFactoryRequestsCurrentWindow:(id)arg1;
-(void)mediaObjectFactory:(id)arg1 willPushEditingViewControllerForObject:(id)arg2;

@end

