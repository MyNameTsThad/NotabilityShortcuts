/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/CLSCrashReport.h>

@class NSString, NSDictionary, NSDate, CLSInternalReport, NSNumber;

@interface CLSReport : NSObject <CLSCrashReport> {

	CLSInternalReport* _internalReport;
	unsigned _internalKVCounter;
	unsigned _userKVCounter;
	NSString* _internalCompactedKVFile;
	NSString* _internalIncrementalKVFile;
	NSString* _userCompactedKVFile;
	NSString* _userIncrementalKVFile;
	char _readOnly;
	NSString* _identifer;
	NSString* _bundleVersion;
	NSString* _bundleShortVersionString;
	NSDate* _dateCreated;
	NSDate* _crashedOnDate;
	NSString* _OSVersion;
	NSString* _OSBuildVersion;
	NSNumber* _isCrash;
	NSDictionary* _customKeys;

}

@property (nonatomic,readonly) CLSInternalReport * internalReport;                    //@synthesize internalReport=_internalReport - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDictionary * customKeys; 
@property (nonatomic,copy,readonly) NSString * bundleVersion; 
@property (nonatomic,copy,readonly) NSString * bundleShortVersionString; 
@property (nonatomic,copy,readonly) NSDate * dateCreated; 
@property (nonatomic,copy,readonly) NSString * OSVersion; 
@property (nonatomic,copy,readonly) NSString * OSBuildVersion; 
@property (nonatomic,readonly) char isCrash; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (nonatomic,copy) NSString * userName; 
@property (nonatomic,copy) NSString * userEmail; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * crashedOnDate; 
-(NSDate *)crashedOnDate;
-(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
-(char)isCrash;
-(NSDictionary *)customKeys;
-(NSString *)OSBuildVersion;
-(id)initWithInternalReport:(id)arg1 prefetchData:(char)arg2 ;
-(id)initWithInternalReport:(id)arg1 ;
-(CLSInternalReport *)internalReport;
-(id)readCustomKeys;
-(char)canRecordNewValues;
-(SCD_Struct_CL55)internalKVStorage;
-(SCD_Struct_CL55)userKVStorage;
-(void)recordValue:(id)arg1 forUserKey:(id)arg2 ;
-(void)recordValue:(id)arg1 forInternalKey:(id)arg2 ;
-(NSString *)userName;
-(NSString *)identifier;
-(NSString *)bundleVersion;
-(NSString *)userEmail;
-(void)setUserEmail:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)bundleShortVersionString;
-(NSDate *)dateCreated;
-(NSString *)OSVersion;
-(NSString *)userIdentifier;
@end

