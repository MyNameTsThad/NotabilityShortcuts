/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class NSURL;

@interface Notability.GLPDFLink : NSObject {

	 frame;
	 url;
	 pageDestination;
	 point;

}

@property (readonly,nonatomic) CGRect frame; 
@property (readonly,nonatomic) NSURL * url; 
@property (readonly,nonatomic) int pageDestination; 
@property (readonly,nonatomic) CGPoint point; 
@property (readonly,nonatomic) char hasPoint; 
@property (readonly,nonatomic) char hasPageDestination; 
-(char)hasPageDestination;
-(int)pageDestination;
-(char)hasPoint;
-(id)initWithFrame:(CGRect)arg1 url:(id)arg2 pageDestination:(id)arg3 point:(id)arg4 ;
-(id)init;
-(CGRect)frame;
-(NSURL *)url;
-(CGPoint)point;
@end

