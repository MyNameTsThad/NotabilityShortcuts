/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FIRInstanceIDResult : NSObject <NSCopying> {

	NSString* _instanceID;
	NSString* _token;

}

@property (nonatomic,copy) NSString * instanceID;              //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,copy) NSString * token;                   //@synthesize token=_token - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)instanceID;
-(void)setInstanceID:(NSString *)arg1 ;
@end

