/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:17 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface COREKeychainWrapper : NSObject {

	NSString* _service;
	NSString* _group;

}

@property (nonatomic,retain) NSString * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * group;                //@synthesize group=_group - In the implementation block
-(id)initWithService:(id)arg1 withGroup:(id)arg2 ;
-(char)insert:(id)arg1 object:(id)arg2 ;
-(id)prepareDict:(id)arg1 ;
-(char)update:(id)arg1 object:(id)arg2 ;
-(id)find:(id)arg1 ;
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(char)remove:(id)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(NSString *)service;
@end
