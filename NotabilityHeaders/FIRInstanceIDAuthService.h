/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FIRInstanceIDStore, FIRInstanceIDCheckinService, FIRInstanceIDCheckinPreferences, NSMutableArray, NSTimer;

@interface FIRInstanceIDAuthService : NSObject {

	char _isCheckinInProgress;
	FIRInstanceIDStore* _store;
	FIRInstanceIDCheckinService* _checkinService;
	FIRInstanceIDCheckinPreferences* _checkinPreferences;
	NSMutableArray* _checkinHandlers;
	NSTimer* _scheduledCheckinTimer;
	int _checkinRetryCount;

}

@property (nonatomic,retain) FIRInstanceIDStore * store;                                        //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) FIRInstanceIDCheckinService * checkinService;                      //@synthesize checkinService=_checkinService - In the implementation block
@property (nonatomic,retain) FIRInstanceIDCheckinPreferences * checkinPreferences;              //@synthesize checkinPreferences=_checkinPreferences - In the implementation block
@property (nonatomic,readonly) NSMutableArray * checkinHandlers;                                //@synthesize checkinHandlers=_checkinHandlers - In the implementation block
@property (assign) char isCheckinInProgress;                                                    //@synthesize isCheckinInProgress=_isCheckinInProgress - In the implementation block
@property (retain) NSTimer * scheduledCheckinTimer;                                             //@synthesize scheduledCheckinTimer=_scheduledCheckinTimer - In the implementation block
@property (assign) int checkinRetryCount;                                                       //@synthesize checkinRetryCount=_checkinRetryCount - In the implementation block
-(void)fetchCheckinInfoWithHandler:(/*^block*/id)arg1 ;
-(void)resetCheckin:(id*)arg1 ;
-(void)scheduleCheckin:(char)arg1 ;
-(id)initWithCheckinService:(id)arg1 store:(id)arg2 ;
-(NSTimer *)scheduledCheckinTimer;
-(void)performScheduledCheckin;
-(long long)calculateNextCheckinRetryIntervalInSeconds;
-(void)startCheckinTimerWithDuration:(double)arg1 ;
-(void)onScheduledCheckinTimerFired:(id)arg1 ;
-(void)setScheduledCheckinTimer:(NSTimer *)arg1 ;
-(void)clearScheduledCheckinTimer;
-(int)checkinRetryCount;
-(void)setCheckinRetryCount:(int)arg1 ;
-(NSMutableArray *)checkinHandlers;
-(void)notifyCheckinHandlersWithCheckin:(id)arg1 error:(id)arg2 ;
-(FIRInstanceIDCheckinService *)checkinService;
-(char)cachedCheckinMatchesCheckin:(id)arg1 ;
-(void)setCheckinService:(FIRInstanceIDCheckinService *)arg1 ;
-(char)isCheckinInProgress;
-(void)setIsCheckinInProgress:(char)arg1 ;
-(char)hasValidCheckinInfo;
-(FIRInstanceIDCheckinPreferences *)checkinPreferences;
-(void)stopCheckinRequest;
-(void)setCheckinPreferences:(FIRInstanceIDCheckinPreferences *)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
-(void)setStore:(FIRInstanceIDStore *)arg1 ;
-(FIRInstanceIDStore *)store;
@end

