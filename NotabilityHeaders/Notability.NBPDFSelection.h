/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class PDFKittenRow;

@interface Notability.NBPDFSelection : NSObject {

	 row;
	 range;

}

@property (readonly,nonatomic) PDFKittenRow * row; 
@property (readonly,nonatomic) NSRange range; 
+(id)selectionForColumns:(id)arg1 startPoint:(CGPoint)arg2 endPoint:(CGPoint)arg3 ;
+(id)selectedTextIntersecting:(CGPoint)arg1 inColumns:(id)arg2 granularity:(int)arg3 ;
-(id)initWithRow:(id)arg1 range:(NSRange)arg2 ;
-(id)init;
-(PDFKittenRow *)row;
-(NSRange)range;
@end

