/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <Notability/GLCloudMetaDataProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSNumber, NSArray;

@interface GLCloudFileMetadata : NSObject <GLCloudMetaDataProtocol, NSCoding, NSCopying> {

	NSString* _title;
	NSString* _name;
	NSString* _identifier;
	NSString* _mimeType;
	int _fileType;
	NSDate* _date;
	NSNumber* _size;
	NSString* _requestPlistName;
	NSArray* _parentIdentifiers;
	NSNumber* _isInRoot;
	NSString* _path;
	Class _requestClass;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * mimeType; 
@property (readonly) NSNumber * size; 
@property (readonly) NSString * name; 
@property (readonly) NSDate * modifiedDate; 
@property (readonly) NSArray * parentIdentifiers; 
@property (readonly) NSNumber * trashed; 
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * mimeType;                      //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) int fileType;                             //@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSNumber * size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * requestPlistName;              //@synthesize requestPlistName=_requestPlistName - In the implementation block
@property (nonatomic,retain) NSArray * parentIdentifiers;              //@synthesize parentIdentifiers=_parentIdentifiers - In the implementation block
@property (nonatomic,retain) NSNumber * isInRoot;                      //@synthesize isInRoot=_isInRoot - In the implementation block
@property (nonatomic,retain) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) Class requestClass;                       //@synthesize requestClass=_requestClass - In the implementation block
+(id)newWithMetaData:(id)arg1 ;
+(id)metadataWithObject:(id)arg1 ;
+(id)metadataWithPath:(id)arg1 fileType:(int)arg2 ;
+(id)webDAVMetadataWithPath:(id)arg1 fileType:(int)arg2 ;
-(NSNumber *)trashed;
-(void)setParentIdentifiers:(NSArray *)arg1 ;
-(id)titleOrServiceNameFallback;
-(id)amalgamatedIdentifier;
-(NSNumber *)isInRoot;
-(NSString *)requestPlistName;
-(void)setIsInRoot:(NSNumber *)arg1 ;
-(void)setRequestPlistName:(NSString *)arg1 ;
-(char)isAmalgamatedEqualToMetadata:(id)arg1 ;
-(id)mediumImage;
-(Class)appropriateFormatDelegate;
-(NSArray *)parentIdentifiers;
-(NSNumber *)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)title;
-(id)localizedDescription;
-(NSDate *)date;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)mimeType;
-(id)displayName;
-(int)fileType;
-(void)setFileType:(int)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)smallImage;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setRequestClass:(Class)arg1 ;
-(Class)requestClass;
-(NSDate *)modifiedDate;
@end

