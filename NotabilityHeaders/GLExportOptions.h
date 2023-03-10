/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/Notability-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, GLCloudFileMetadata;

@interface GLExportOptions : NSObject <NSCoding, NSCopying> {

	char _includeRecordings;
	char _includeImages;
	char _includeBackground;
	char _pageMargin;
	char _forAutosync;
	char _exportToUniqueFilename;
	char _exportToUniqueSubdirectory;
	Class _requestClass;
	NSArray* _pageRange;
	int _fileFormat;
	NSString* _exportToPath;
	GLCloudFileMetadata* _exportToMetadata;
	Class _formatDelegate;

}

@property (assign,nonatomic) Class requestClass;                                  //@synthesize requestClass=_requestClass - In the implementation block
@property (assign,nonatomic) char includeRecordings;                              //@synthesize includeRecordings=_includeRecordings - In the implementation block
@property (assign,nonatomic) char includeImages;                                  //@synthesize includeImages=_includeImages - In the implementation block
@property (assign,nonatomic) char includeBackground;                              //@synthesize includeBackground=_includeBackground - In the implementation block
@property (nonatomic,copy) NSArray * pageRange;                                   //@synthesize pageRange=_pageRange - In the implementation block
@property (assign,nonatomic) char pageMargin;                                     //@synthesize pageMargin=_pageMargin - In the implementation block
@property (assign,nonatomic) char forAutosync;                                    //@synthesize forAutosync=_forAutosync - In the implementation block
@property (assign,nonatomic) char exportToUniqueFilename;                         //@synthesize exportToUniqueFilename=_exportToUniqueFilename - In the implementation block
@property (assign,nonatomic) char exportToUniqueSubdirectory;                     //@synthesize exportToUniqueSubdirectory=_exportToUniqueSubdirectory - In the implementation block
@property (assign,nonatomic) int fileFormat;                                      //@synthesize fileFormat=_fileFormat - In the implementation block
@property (nonatomic,copy) NSString * exportToPath;                               //@synthesize exportToPath=_exportToPath - In the implementation block
@property (nonatomic,retain) GLCloudFileMetadata * exportToMetadata;              //@synthesize exportToMetadata=_exportToMetadata - In the implementation block
@property (assign,nonatomic) Class formatDelegate;                                //@synthesize formatDelegate=_formatDelegate - In the implementation block
@property (nonatomic,readonly) int fileFormatWithRecordings; 
+(id)optionsWithFormat:(Class)arg1 requestClass:(Class)arg2 ;
+(id)autosyncOptions;
+(id)defaultAutosyncOptionsForRequestClass:(Class)arg1 ;
+(id)NSItemProviderOptions;
+(char)savedAutosyncOptionsToNewLocation;
+(id)tryToRetrieveOldAutosyncOptions;
+(void)setAutosyncOptions:(id)arg1 ;
+(void)writeOptions:(id)arg1 toDefaultsWithKey:(id)arg2 ;
+(id)defaultPrintOptionsForRequestClass:(Class)arg1 ;
+(id)manualExportOptions;
+(void)setManualExportOptions:(id)arg1 ;
+(char)savedManualExportOptionsToNewLocation;
-(char)includeRecordings;
-(char)forAutosync;
-(void)setExportToUniqueSubdirectory:(char)arg1 ;
-(NSArray *)pageRange;
-(char)pageMargin;
-(char)includeBackground;
-(NSString *)exportToPath;
-(GLCloudFileMetadata *)exportToMetadata;
-(void)setForAutosync:(char)arg1 ;
-(Class)formatDelegate;
-(char)exportToUniqueSubdirectory;
-(char)exportToUniqueFilename;
-(void)setIncludeRecordings:(char)arg1 ;
-(void)setFormatDelegate:(Class)arg1 ;
-(void)setExportToPath:(NSString *)arg1 ;
-(void)setIncludeBackground:(char)arg1 ;
-(void)setPageMargin:(char)arg1 ;
-(void)setExportToMetadata:(GLCloudFileMetadata *)arg1 ;
-(void)setPageRange:(NSArray *)arg1 ;
-(int)fileFormatWithRecordings;
-(void)setExportToUniqueFilename:(char)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)fileFormat;
-(void)setIncludeImages:(char)arg1 ;
-(char)includeImages;
-(void)setRequestClass:(Class)arg1 ;
-(Class)requestClass;
-(void)setFileFormat:(int)arg1 ;
@end

