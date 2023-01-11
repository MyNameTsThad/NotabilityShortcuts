/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GLMultiNoteViewState : NSObject {

	float _ratio;
	unsigned _activeView;

}

@property (assign,nonatomic) float ratio;                      //@synthesize ratio=_ratio - In the implementation block
@property (assign,nonatomic) unsigned activeView;              //@synthesize activeView=_activeView - In the implementation block
+(id)leftOnlyViewState;
+(id)rightOnlyViewState;
-(id)initWithActiveView:(unsigned)arg1 ratio:(float)arg2 ;
-(char)validate;
-(float)ratio;
-(void)setRatio:(float)arg1 ;
-(unsigned)activeView;
-(void)setActiveView:(unsigned)arg1 ;
@end

