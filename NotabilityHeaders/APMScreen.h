/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class NSString;

@interface APMScreen : NSObject {

	char _isManuallySet;
	NSString* _name;
	NSString* _className;
	long long _instanceID;

}

@property (nonatomic,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * className;              //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) long long instanceID;              //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic) char isManuallySet;                  //@synthesize isManuallySet=_isManuallySet - In the implementation block
-(id)initWithName:(id)arg1 className:(id)arg2 instanceID:(long long)arg3 ;
-(void)setIsManuallySet:(char)arg1 ;
-(char)isManuallySet;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)className;
-(long long)instanceID;
@end
