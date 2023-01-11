/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class NSArray;

@interface Notability.GLPDFPageMetadata : NSObject {

	 rotation;
	 pageNumber;
	 artBox;
	 mediaBox;
	 cropBox;
	 bleedBox;
	 trimBox;
	 contentBoxVersion;
	 linksStorage;

}

@property (readonly,nonatomic) int rotation; 
@property (readonly,nonatomic) int pageNumber; 
@property (readonly,nonatomic) CGRect artBox; 
@property (readonly,nonatomic) CGRect mediaBox; 
@property (readonly,nonatomic) CGRect cropBox; 
@property (readonly,nonatomic) CGRect bleedBox; 
@property (readonly,nonatomic) CGRect trimBox; 
@property (assign,nonatomic) int contentBoxVersion; 
@property (readonly,nonatomic) NSArray * links; 
@property (readonly,nonatomic) CGRect maxBox; 
@property (readonly,nonatomic) CGRect contentBox; 
@property (readonly,nonatomic) CGRect rotatedContentRect; 
-(id)init:(CGPDFPageRef)arg1 document:(CGPDFDocumentRef)arg2 pageDictionaries:(id)arg3 ;
-(CGRect)maxBox;
-(void)setContentBoxVersion:(int)arg1 ;
-(int)contentBoxVersion;
-(CGRect)scaledContentRectForPageWidth:(float)arg1 ;
-(float)scaleFactorForPageWidth:(float)arg1 ;
-(CGRect)artBox;
-(CGRect)bleedBox;
-(CGRect)trimBox;
-(CGRect)contentBox;
-(CGRect)rotatedContentRect;
-(id)init;
-(int)rotation;
-(int)pageNumber;
-(CGRect)cropBox;
-(CGRect)mediaBox;
-(NSArray *)links;
@end
