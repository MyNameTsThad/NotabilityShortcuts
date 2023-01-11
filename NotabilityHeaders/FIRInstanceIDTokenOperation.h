/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSDictionary, FIRInstanceIDCheckinPreferences, FIRInstanceIDKeyPair, NSURLSessionDataTask, NSMutableArray;

@interface FIRInstanceIDTokenOperation : NSOperation {

	char _isFinished;
	char _isExecuting;
	int _action;
	NSString* _authorizedEntity;
	NSString* _scope;
	NSDictionary* _options;
	FIRInstanceIDCheckinPreferences* _checkinPreferences;
	FIRInstanceIDKeyPair* _keyPair;
	int _result;
	NSURLSessionDataTask* _dataTask;
	NSMutableArray* _completionHandlers;
	/*^block*/id _testBlock;

}

@property (nonatomic,retain) FIRInstanceIDCheckinPreferences * checkinPreferences;              //@synthesize checkinPreferences=_checkinPreferences - In the implementation block
@property (nonatomic,retain) FIRInstanceIDKeyPair * keyPair;                                    //@synthesize keyPair=_keyPair - In the implementation block
@property (retain) NSURLSessionDataTask * dataTask;                                             //@synthesize dataTask=_dataTask - In the implementation block
@property (readonly) NSMutableArray * completionHandlers;                                       //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) id testBlock;                                                        //@synthesize testBlock=_testBlock - In the implementation block
@property (nonatomic,readonly) int action;                                                      //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * authorizedEntity;                                     //@synthesize authorizedEntity=_authorizedEntity - In the implementation block
@property (nonatomic,readonly) NSString * scope;                                                //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                                          //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) int result;                                                      //@synthesize result=_result - In the implementation block
+(id)HTTPAuthHeaderFromCheckin:(id)arg1 ;
+(id)requestWithAuthHeader:(id)arg1 ;
+(id)standardQueryItemsWithDeviceID:(id)arg1 scope:(id)arg2 ;
+(id)sharedURLSession;
-(NSString *)authorizedEntity;
-(void)setKeyPair:(FIRInstanceIDKeyPair *)arg1 ;
-(id)initWithAction:(int)arg1 forAuthorizedEntity:(id)arg2 scope:(id)arg3 options:(id)arg4 checkinPreferences:(id)arg5 keyPair:(id)arg6 ;
-(FIRInstanceIDCheckinPreferences *)checkinPreferences;
-(FIRInstanceIDKeyPair *)keyPair;
-(id)queryItemsWithKeyPair:(id)arg1 ;
-(void)finishWithResult:(int)arg1 token:(id)arg2 error:(id)arg3 ;
-(void)performTokenOperation;
-(void)setCheckinPreferences:(FIRInstanceIDCheckinPreferences *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(int)action;
-(void)start;
-(NSDictionary *)options;
-(NSString *)scope;
-(int)result;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(void)setFinished:(char)arg1 ;
-(char)isAsynchronous;
-(NSMutableArray *)completionHandlers;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(void)setExecuting:(char)arg1 ;
-(void)setTestBlock:(id)arg1 ;
-(id)testBlock;
@end

