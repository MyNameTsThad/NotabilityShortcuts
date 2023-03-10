/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FIRInstanceIDAuthKeychain : NSObject {

	NSString* _generic;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * generic;                           //@synthesize generic=_generic - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * defaultAccessGroup; 
+(id)keychainQueryForService:(id)arg1 account:(id)arg2 accessGroup:(id)arg3 generic:(id)arg4 ;
-(id)keychainQueryForService:(id)arg1 account:(id)arg2 accessGroup:(id)arg3 ;
-(id)itemsMatchingService:(id)arg1 account:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
-(char)removeItemsMatchingService:(id)arg1 account:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
-(NSString *)defaultAccessGroup;
-(id)itemForService:(id)arg1 account:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
-(char)setData:(id)arg1 forService:(id)arg2 accessibility:(void*)arg3 account:(id)arg4 accessGroup:(id)arg5 error:(id*)arg6 ;
-(char)removeAllItemsWithError:(id*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)generic;
-(void)setGeneric:(NSString *)arg1 ;
@end

