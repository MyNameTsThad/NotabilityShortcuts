/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class NSMutableArray, NSArray;

@interface RMFSLineGroup : NSObject {

	NSMutableArray* _lines;
	char _previousGroupContainedNewline;
	char _thisGroupContainsNewline;
	float _lineHeight;
	float _potentialLineHeight;
	float _transitionGroupHeight;

}

@property (nonatomic,retain) NSArray * lines;                                 //@synthesize lines=_lines - In the implementation block
@property (assign,nonatomic) float lineHeight;                                //@synthesize lineHeight=_lineHeight - In the implementation block
@property (assign,nonatomic) float potentialLineHeight;                       //@synthesize potentialLineHeight=_potentialLineHeight - In the implementation block
@property (assign,nonatomic) char previousGroupContainedNewline;              //@synthesize previousGroupContainedNewline=_previousGroupContainedNewline - In the implementation block
@property (assign,nonatomic) char thisGroupContainsNewline;                   //@synthesize thisGroupContainsNewline=_thisGroupContainsNewline - In the implementation block
@property (assign,nonatomic) float transitionGroupHeight;                     //@synthesize transitionGroupHeight=_transitionGroupHeight - In the implementation block
-(float)expectedHeightWithAttributes:(id)arg1 leading:(float*)arg2 ascent:(float*)arg3 descent:(float*)arg4 textHeight:(float*)arg5 spacingTop:(float*)arg6 spacingBottom:(float*)arg7 isChecklist:(char*)arg8 isChecked:(char*)arg9 candidateLine:(id)arg10 ;
-(char)previousGroupContainedNewline;
-(char)thisGroupContainsNewline;
-(void)processWithIndent:(float)arg1 attributes:(id)arg2 ;
-(float)expectedHeightWithAttributes:(id)arg1 ;
-(CGRect)expectedFrameForCandidateLine:(id)arg1 attributes:(id)arg2 indent:(float)arg3 expectedLineHeight:(float*)arg4 ;
-(float)potentialLineHeight;
-(void)setPotentialLineHeight:(float)arg1 ;
-(void)setPreviousGroupContainedNewline:(char)arg1 ;
-(void)setThisGroupContainsNewline:(char)arg1 ;
-(float)transitionGroupHeight;
-(void)setTransitionGroupHeight:(float)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)lineHeight;
-(void)setLineHeight:(float)arg1 ;
-(NSArray *)lines;
-(void)addLine:(id)arg1 ;
-(void)setLines:(NSArray *)arg1 ;
@end
