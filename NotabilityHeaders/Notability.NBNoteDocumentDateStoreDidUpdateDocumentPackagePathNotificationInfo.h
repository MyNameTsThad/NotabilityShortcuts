/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NBNoteDocument;

@interface Notability.NBNoteDocumentDateStoreDidUpdateDocumentPackagePathNotificationInfo : NSObject {

	 oldPackagePath;
	 newPackagePath;
	 document;

}

@property (readonly,nonatomic) NSString * oldPackagePath; 
@property (readonly,nonatomic) NSString * newPackagePath; 
@property (readonly,nonatomic) NBNoteDocument * document; 
-(NSString *)oldPackagePath;
-(NSString *)newPackagePath;
-(id)initWithOldPackagePath:(id)arg1 newPackagePath:(id)arg2 document:(id)arg3 ;
-(id)init;
-(NBNoteDocument *)document;
@end

