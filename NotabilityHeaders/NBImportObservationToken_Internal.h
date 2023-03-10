/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/NBImportObservationToken.h>

@protocol NBImportObservationTokenDelegate;
@class GLCloudFileMetadata, NSString;

@interface NBImportObservationToken_Internal : NSObject <NBImportObservationToken> {

	char _interested;
	GLCloudFileMetadata* _metadata;
	id<NBImportObservationTokenDelegate> _delegate;
	/*^block*/id _stateHandler;

}

@property (nonatomic,copy) id stateHandler;                                                     //@synthesize stateHandler=_stateHandler - In the implementation block
@property (assign) char interested;                                                             //@synthesize interested=_interested - In the implementation block
@property (nonatomic,retain) GLCloudFileMetadata * metadata;                                    //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic,__weak) id<NBImportObservationTokenDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterInterest;
-(void)pushState:(id)arg1 ;
-(void)setStateHandler:(id)arg1 ;
-(char)interested;
-(id)stateHandler;
-(void)setInterested:(char)arg1 ;
-(void)setDelegate:(id<NBImportObservationTokenDelegate>)arg1 ;
-(id<NBImportObservationTokenDelegate>)delegate;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(GLCloudFileMetadata *)metadata;
-(void)setMetadata:(GLCloudFileMetadata *)arg1 ;
@end

