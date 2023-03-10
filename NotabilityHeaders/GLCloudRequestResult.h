/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, GLCloudFileMetadata;

@interface GLCloudRequestResult : NSObject {

	NSArray* files;
	NSArray* folders;
	NSMutableDictionary* attributes;
	GLCloudFileMetadata* _metadata;

}

@property (nonatomic,retain) NSArray * files; 
@property (nonatomic,retain) NSArray * folders; 
@property (nonatomic,retain) NSMutableDictionary * attributes; 
@property (nonatomic,retain) GLCloudFileMetadata * metadata;                //@synthesize metadata=_metadata - In the implementation block
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(id)init;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(GLCloudFileMetadata *)metadata;
-(void)setMetadata:(GLCloudFileMetadata *)arg1 ;
-(NSArray *)folders;
-(void)setFolders:(NSArray *)arg1 ;
@end

