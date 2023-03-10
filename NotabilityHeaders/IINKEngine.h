/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:17 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class IINKConfiguration, NSArray;

@interface IINKEngine : NSObject {

	shared_ptr<myscript::iink::Engine>* _engine;
	IINKConfiguration* _configuration;

}

@property (nonatomic,readonly) IINKConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSArray * supportedPartTypes; 
-(id)createRendererWithDpiX:(float)arg1 dpiY:(float)arg2 target:(id)arg3 error:(id*)arg4 ;
-(id)openPackage:(id)arg1 openOption:(unsigned)arg2 error:(id*)arg3 ;
-(NSArray *)supportedPartTypes;
-(id)createRendererWithDpiX:(float)arg1 dpiY:(float)arg2 target:(id)arg3 ;
-(id)createEditor:(id)arg1 ;
-(id)createParameterSet;
-(id)createRecognitionAssetsBuilder;
-(id)createPackage:(id)arg1 error:(id*)arg2 ;
-(id)openPackage:(id)arg1 error:(id*)arg2 ;
-(void)deletePackage:(id)arg1 error:(id*)arg2 ;
-(IINKConfiguration *)configuration;
-(id)initWithCertificate:(id)arg1 ;
@end

