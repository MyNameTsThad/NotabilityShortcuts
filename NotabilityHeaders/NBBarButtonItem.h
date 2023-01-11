/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIBarButtonItem.h>

@class NSString, NSDictionary;

@interface NBBarButtonItem : UIBarButtonItem {

	NSString* _eventName;
	/*^block*/id _touchAction;
	NSString* _imageKey;
	NSDictionary* _accessibilityLabels;

}

@property (nonatomic,copy) id touchAction;                            //@synthesize touchAction=_touchAction - In the implementation block
@property (nonatomic,retain) NSString * imageKey;                     //@synthesize imageKey=_imageKey - In the implementation block
@property (readonly) NSDictionary * accessibilityLabels;              //@synthesize accessibilityLabels=_accessibilityLabels - In the implementation block
@property (nonatomic,retain) NSString * eventName;                    //@synthesize eventName=_eventName - In the implementation block
+(id)newFixedSpacerBarButtonItemWithWidth:(float)arg1 ;
+(id)newFlexibleSpacerBarButtonItem;
-(void)touchUpAction:(id)arg1 ;
-(void)setTouchAction:(id)arg1 ;
-(id)touchAction;
-(id)initWithImageKey:(id)arg1 action:(/*^block*/id)arg2 ;
-(id)initWithCustomView:(id)arg1 action:(/*^block*/id)arg2 ;
-(NSDictionary *)accessibilityLabels;
-(id)initWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)setImageKey:(NSString *)arg1 ;
-(NSString *)imageKey;
@end

