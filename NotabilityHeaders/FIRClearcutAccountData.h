/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface FIRClearcutAccountData : NSObject {

	NSMutableDictionary* _logSourceToWriter;
	NSString* _accountLogDirectory;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * logSourceToWriter;              //@synthesize logSourceToWriter=_logSourceToWriter - In the implementation block
@property (nonatomic,copy) NSString * accountLogDirectory;                                //@synthesize accountLogDirectory=_accountLogDirectory - In the implementation block
-(NSMutableDictionary *)logSourceToWriter;
-(NSString *)accountLogDirectory;
-(id)filenameWithCurrentTimeInDirectory:(id)arg1 ;
-(id)initWithAccountLogDirectory:(id)arg1 ;
-(id)writerForLogSource:(int)arg1 ;
-(void)removeWriterForLogSource:(int)arg1 ;
-(void)flushWriters;
-(void)setAccountLogDirectory:(NSString *)arg1 ;
@end

