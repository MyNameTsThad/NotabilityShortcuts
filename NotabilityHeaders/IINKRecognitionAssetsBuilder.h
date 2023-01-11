/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:17 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@class NSArray, NSString;

@interface IINKRecognitionAssetsBuilder : NSObject {

	shared_ptr<myscript::iink::RecognitionAssetsBuilder>* _recognitionAssetsBuilder;

}

@property (nonatomic,readonly) NSArray * supportedRecognitionAssetsTypes; 
@property (nonatomic,readonly) NSString * compilationErrors; 
-(id)initWithSharedPtr:(shared_ptr<myscript::iink::RecognitionAssetsBuilder>*)arg1 ;
-(shared_ptr<myscript::iink::RecognitionAssetsBuilder>*)sptr;
-(NSArray *)supportedRecognitionAssetsTypes;
-(NSString *)compilationErrors;
-(char)compile:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(char)store:(id)arg1 error:(id*)arg2 ;
@end

