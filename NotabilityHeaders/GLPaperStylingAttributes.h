/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:11 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@interface GLPaperStylingAttributes : NSObject {

	char _isForSettingDefaults;
	char _isForCanvasInsertion;
	char _shouldShowBigNoLinesCell;
	int _numberOfPaperColumns;
	int _numberOfLineColumns;
	int _paperIndex;
	int _lineIndex;
	CGSize _cellSize;
	UIEdgeInsets _paperPickerInsets;
	UIEdgeInsets _linePickerInsets;

}

@property (assign,nonatomic) CGSize cellSize;                             //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) int numberOfPaperColumns;                    //@synthesize numberOfPaperColumns=_numberOfPaperColumns - In the implementation block
@property (assign,nonatomic) int numberOfLineColumns;                     //@synthesize numberOfLineColumns=_numberOfLineColumns - In the implementation block
@property (assign,nonatomic) char isForSettingDefaults;                   //@synthesize isForSettingDefaults=_isForSettingDefaults - In the implementation block
@property (assign,nonatomic) int paperIndex;                              //@synthesize paperIndex=_paperIndex - In the implementation block
@property (assign,nonatomic) int lineIndex;                               //@synthesize lineIndex=_lineIndex - In the implementation block
@property (assign,nonatomic) char isForCanvasInsertion;                   //@synthesize isForCanvasInsertion=_isForCanvasInsertion - In the implementation block
@property (assign,nonatomic) UIEdgeInsets paperPickerInsets;              //@synthesize paperPickerInsets=_paperPickerInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets linePickerInsets;               //@synthesize linePickerInsets=_linePickerInsets - In the implementation block
@property (assign,nonatomic) char shouldShowBigNoLinesCell;               //@synthesize shouldShowBigNoLinesCell=_shouldShowBigNoLinesCell - In the implementation block
-(int)paperIndex;
-(void)setPaperIndex:(int)arg1 ;
-(void)setIsForCanvasInsertion:(char)arg1 ;
-(void)setIsForSettingDefaults:(char)arg1 ;
-(void)setPaperPickerInsets:(UIEdgeInsets)arg1 ;
-(void)setLinePickerInsets:(UIEdgeInsets)arg1 ;
-(void)setShouldShowBigNoLinesCell:(char)arg1 ;
-(void)setNumberOfPaperColumns:(int)arg1 ;
-(void)setNumberOfLineColumns:(int)arg1 ;
-(char)isForCanvasInsertion;
-(UIEdgeInsets)paperPickerInsets;
-(int)numberOfPaperColumns;
-(char)shouldShowBigNoLinesCell;
-(UIEdgeInsets)linePickerInsets;
-(int)numberOfLineColumns;
-(char)isForSettingDefaults;
-(id)init;
-(CGSize)cellSize;
-(void)setLineIndex:(int)arg1 ;
-(int)lineIndex;
-(void)setCellSize:(CGSize)arg1 ;
@end

