/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NBUIElement : NSObject {

	char _backgrounded;
	char _bordered;
	NSArray* _keyPathsToMergePersonalityChangesWith;
	Class _viewClass;
	/*^block*/id _personality;
	NSString* _key;

}

@property (assign,nonatomic) char backgrounded;                                            //@synthesize backgrounded=_backgrounded - In the implementation block
@property (assign,nonatomic) char bordered;                                                //@synthesize bordered=_bordered - In the implementation block
@property (assign,nonatomic) Class viewClass;                                              //@synthesize viewClass=_viewClass - In the implementation block
@property (nonatomic,copy) id personality;                                                 //@synthesize personality=_personality - In the implementation block
@property (nonatomic,copy) NSString * key;                                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSArray * keyPathsToMergePersonalityChangesWith;              //@synthesize keyPathsToMergePersonalityChangesWith=_keyPathsToMergePersonalityChangesWith - In the implementation block
+(id)buttonWithImageKey:(id)arg1 action:(/*^block*/id)arg2 ;
+(id)horizontalHairlineView;
+(id)verticalHairlineView;
+(id)labelWithText:(id)arg1 fontSize:(float)arg2 personality:(/*^block*/id)arg3 ;
+(id)buttonWithTitle:(id)arg1 action:(/*^block*/id)arg2 personality:(/*^block*/id)arg3 ;
+(id)barButtonItemWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
+(id)barButtonItemWithImageKey:(id)arg1 action:(/*^block*/id)arg2 ;
+(id)barButtonItemWithCustomView:(id)arg1 action:(/*^block*/id)arg2 ;
+(id)buttonWithImageKey:(id)arg1 actionWithEvent:(/*^block*/id)arg2 ;
+(id)buttonWithImageKey:(id)arg1 action:(/*^block*/id)arg2 personality:(/*^block*/id)arg3 ;
+(id)labelWithText:(id)arg1 fontSize:(float)arg2 ;
+(id)stackedImageViewWithKey:(id)arg1 layerCount:(int)arg2 layeredPersonalityBlock:(/*^block*/id)arg3 ;
+(id)elementOfClass:(Class)arg1 personality:(/*^block*/id)arg2 ;
+(id)newElementWithKey:(id)arg1 personality:(/*^block*/id)arg2 ;
+(id)_buttonWithKey:(id)arg1 type:(int)arg2 action:(/*^block*/id)arg3 actionWithEvent:(/*^block*/id)arg4 personality:(/*^block*/id)arg5 ;
+(id)elementOfClass:(Class)arg1 ;
+(id)stackedButtonWithImageKey:(id)arg1 action:(/*^block*/id)arg2 layerCount:(int)arg3 layeredPersonalityBlock:(/*^block*/id)arg4 ;
+(id)viewWithPersonality:(/*^block*/id)arg1 ;
+(id)buttonWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(id)setBordered;
-(id)yieldViewForOwner:(id)arg1 ;
-(id)initWithKey:(id)arg1 personality:(/*^block*/id)arg2 ;
-(NSArray *)keyPathsToMergePersonalityChangesWith;
-(id)newUIObjectOfType;
-(void)imbueWithPersonalityObservation:(id)arg1 ;
-(id)withKey:(id)arg1 ;
-(id)setBackgrounded;
-(id)setWelled;
-(void)setKeyPathsToMergePersonalityChangesWith:(NSArray *)arg1 ;
-(NSString *)key;
-(void)setBackgrounded:(char)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(Class)viewClass;
-(char)backgrounded;
-(void)setPersonality:(id)arg1 ;
-(id)personality;
-(void)setViewClass:(Class)arg1 ;
-(void)setBordered:(char)arg1 ;
-(char)bordered;
@end

