/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLCollectionViewContentProvider.h>

@interface GLCollectionViewPaperLineContentProvider : GLCollectionViewContentProvider {

	char _isForCanvasInsertion;
	int _lineIndex;
	int _paperIndex;

}

@property (assign,nonatomic) int lineIndex;                          //@synthesize lineIndex=_lineIndex - In the implementation block
@property (assign,nonatomic) int paperIndex;                         //@synthesize paperIndex=_paperIndex - In the implementation block
@property (assign,nonatomic) char isForCanvasInsertion;              //@synthesize isForCanvasInsertion=_isForCanvasInsertion - In the implementation block
+(unsigned)numberOfPaperLineStyles;
+(id)reuseIdentifier;
+(Class)cellClass;
-(int)paperIndex;
-(void)setPaperIndex:(int)arg1 ;
-(int)paperIndexOnDisk;
-(void)setIsForCanvasInsertion:(char)arg1 ;
-(char)isForCanvasInsertion;
-(id)init;
-(void)setLineIndex:(int)arg1 ;
-(int)lineIndex;
@end

