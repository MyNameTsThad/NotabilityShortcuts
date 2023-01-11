/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/SelectionRepresentation.h>

@interface BoxSelectionRepresentation : SelectionRepresentation {

	float _theta;
	CGRect _rect;

}

@property (assign) CGRect rect;              //@synthesize rect=_rect - In the implementation block
@property (assign) float theta;              //@synthesize theta=_theta - In the implementation block
-(id)initWithRect:(CGRect)arg1 theta:(float)arg2 ;
-(id)transformedCopyWithTransform:(CGAffineTransform)arg1 ;
-(CGPoint)center;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPathRef)path;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(float)theta;
-(void)setTheta:(float)arg1 ;
@end
