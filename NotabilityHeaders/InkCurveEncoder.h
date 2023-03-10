/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray;

@interface InkCurveEncoder : NSObject <NSCoding> {

	NSArray* curvesArray;

}

@property (retain) NSArray * curvesArray; 
+(char)batchDecode:(id)arg1 withCallbackBlock:(/*^block*/id)arg2 ;
+(char)batchEncode:(id)arg1 withArray:(id)arg2 ;
-(id)initForEncodingCurves:(id)arg1 ;
-(NSArray *)curvesArray;
-(void)setCurvesArray:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

