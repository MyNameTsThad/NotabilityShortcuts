/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession;

@interface FIRInstanceIDCheckinService : NSObject {

	NSURLSession* _session;

}

@property (nonatomic,retain) NSURLSession * session;              //@synthesize session=_session - In the implementation block
+(void)setCheckinTestBlock:(/*^block*/id)arg1 ;
-(id)checkinParametersWithExistingCheckin:(id)arg1 ;
-(void)checkinWithExistingCheckin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopFetching;
-(id)init;
-(void)dealloc;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSession *)session;
@end

