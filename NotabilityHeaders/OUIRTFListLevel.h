/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@interface OUIRTFListLevel : NSObject {

	int startAtNumber;
	int decorationNumber;
	int justification;
	int charToFollowDecoration;
	SCD_Struct_OU37 _paragraph;

}

@property (assign,nonatomic) int startAtNumber; 
@property (assign,nonatomic) int decorationNumber; 
@property (assign,nonatomic) int justification; 
@property (assign,nonatomic) int charToFollowDecoration; 
@property (assign,nonatomic) unsigned char alignment; 
@property (assign,nonatomic) int firstLineIndent; 
@property (assign,nonatomic) int leftIndent; 
@property (assign,nonatomic) int rightIndent; 
-(void)setStartAtNumber:(int)arg1 ;
-(void)setDecorationNumber:(int)arg1 ;
-(int)decorationNumber;
-(int)startAtNumber;
-(int)charToFollowDecoration;
-(void)setCharToFollowDecoration:(int)arg1 ;
-(void)setAlignment:(unsigned char)arg1 ;
-(id)description;
-(unsigned char)alignment;
-(int)justification;
-(int)leftIndent;
-(int)rightIndent;
-(int)firstLineIndent;
-(void)setLeftIndent:(int)arg1 ;
-(void)setRightIndent:(int)arg1 ;
-(void)setJustification:(int)arg1 ;
-(void)setFirstLineIndent:(int)arg1 ;
@end

