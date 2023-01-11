/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <UIKit/UITextRange.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NBTextPosition;

@interface NBTextRange : UITextRange <NSCopying> {

	NBTextPosition* start;
	NBTextPosition* end;

}

@property (nonatomic,readonly) NBTextPosition * start; 
@property (nonatomic,readonly) NBTextPosition * end; 
@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (nonatomic,readonly) unsigned long length; 
-(NSRange)nsRange;
-(void)setStartIdx:(unsigned)arg1 ;
-(void)setEndIdx:(unsigned)arg1 ;
-(id)init;
-(id)description;
-(unsigned long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(NBTextPosition *)start;
-(void)setStart:(NBTextPosition *)arg1 ;
-(NBTextPosition *)end;
-(void)setEnd:(NBTextPosition *)arg1 ;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(id)initWithRange:(id)arg1 ;
@end
