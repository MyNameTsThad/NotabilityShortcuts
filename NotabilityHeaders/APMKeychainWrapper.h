/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APMKeychainWrapper : NSObject
+(id)keychainValueWithIdentifier:(id)arg1 appID:(id)arg2 ;
+(char)upsertKeychainValue:(id)arg1 withIdentifier:(id)arg2 appID:(id)arg3 ;
+(id)searchDirectoryForIdentifier:(id)arg1 withAppID:(id)arg2 ;
+(id)keychainDataWithIdentifier:(id)arg1 appID:(id)arg2 ;
+(void)deleteKeychainValueWithIdentifier:(id)arg1 appID:(id)arg2 ;
@end

