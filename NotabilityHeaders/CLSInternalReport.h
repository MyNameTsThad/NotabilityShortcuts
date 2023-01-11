/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSDate;

@interface CLSInternalReport : NSObject {

	NSString* _identifier;
	NSString* _path;
	NSArray* _metadataSections;

}

@property (nonatomic,copy,readonly) NSString * directoryName; 
@property (nonatomic,copy) NSString * path;                                           //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) char needsToBeSubmitted; 
@property (nonatomic,copy,readonly) NSString * binaryImagePath; 
@property (nonatomic,copy,readonly) NSString * metadataPath; 
@property (nonatomic,copy,readonly) NSString * APIKey; 
@property (nonatomic,readonly) char isCrash; 
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * customKeys; 
@property (nonatomic,copy,readonly) NSString * bundleVersion; 
@property (nonatomic,copy,readonly) NSString * bundleShortVersionString; 
@property (nonatomic,copy,readonly) NSDate * dateCreated; 
@property (nonatomic,copy,readonly) NSDate * crashedOnDate; 
@property (nonatomic,copy,readonly) NSString * OSVersion; 
@property (nonatomic,copy,readonly) NSString * OSBuildVersion; 
+(id)readCLSFileAtPath:(id)arg1 ;
+(id)reportWithPath:(id)arg1 ;
-(NSDate *)crashedOnDate;
-(id)initWithPath:(id)arg1 executionIdentifier:(id)arg2 ;
-(id)pathForContentFile:(id)arg1 ;
-(char)checkExistenceOfAtLeastOnceFileInArray:(id)arg1 ;
-(id)crashFilenames;
-(id)metadataSections;
-(char)isCrash;
-(id)timeFromCrashContentFile:(id)arg1 sectionName:(id)arg2 ;
-(NSString *)directoryName;
-(NSString *)binaryImagePath;
-(char)needsToBeSubmitted;
-(void)enumerateSymbolicatableFilesInContent:(/*^block*/id)arg1 ;
-(NSDictionary *)customKeys;
-(NSString *)OSBuildVersion;
-(NSString *)APIKey;
-(NSString *)identifier;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSString *)bundleVersion;
-(NSString *)bundleShortVersionString;
-(NSDate *)dateCreated;
-(NSString *)OSVersion;
-(NSString *)metadataPath;
@end
