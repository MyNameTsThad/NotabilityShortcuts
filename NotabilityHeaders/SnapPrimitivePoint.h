/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/SnapPrimitive.h>

@class SnapPrimitiveIntersectionInfo;

@interface SnapPrimitivePoint : SnapPrimitive {

	int _pointType;
	SnapPrimitiveIntersectionInfo* _intersectionInfo;
	CGPoint _point;

}

@property (assign) CGPoint point;                                                   //@synthesize point=_point - In the implementation block
@property (readonly) int pointType;                                                 //@synthesize pointType=_pointType - In the implementation block
@property (readonly) SnapPrimitiveIntersectionInfo * intersectionInfo;              //@synthesize intersectionInfo=_intersectionInfo - In the implementation block
-(id)initWithIntersectionPoint:(CGPoint)arg1 intersectionInfo:(id)arg2 ;
-(CGPoint)snapPointForPoint:(CGPoint)arg1 ;
-(char)involvesAngleGuides;
-(char)involvesHandwriting;
-(char)involvesPaperLines;
-(float)distanceFromPoint:(CGPoint)arg1 ;
-(SnapPrimitiveIntersectionInfo *)intersectionInfo;
-(id)initWithHandwritingEndpoint:(CGPoint)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(int)pointType;
@end

