/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:17 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class COREKeychainWrapper;

@interface COREPersistanceUtils : NSObject {

	COREKeychainWrapper* _keyChainWrapper;

}

@property (nonatomic,retain) COREKeychainWrapper * keyChainWrapper;              //@synthesize keyChainWrapper=_keyChainWrapper - In the implementation block
-(char)storeData:(id)arg1 key:(id)arg2 ;
-(id)findWithKey:(id)arg1 ;
-(char)storeDate:(id)arg1 key:(id)arg2 ;
-(char)storeString:(id)arg1 key:(id)arg2 ;
-(id)findDateWithKey:(id)arg1 ;
-(id)findStringWithKey:(id)arg1 ;
-(char)removeWithKey:(id)arg1 ;
-(COREKeychainWrapper *)keyChainWrapper;
-(void)setKeyChainWrapper:(COREKeychainWrapper *)arg1 ;
-(id)init;
@end

