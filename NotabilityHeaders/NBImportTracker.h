/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:08 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/NBImportObservationTokenDelegate.h>

@class NSMutableDictionary, NSString;

@interface NBImportTracker : NSObject <NBImportObservationTokenDelegate> {

	Class _metadataClass;
	NSMutableDictionary* _backingMetadataToObserversArrayDictionary;
	NSMutableDictionary* _backingMetadataToLastKnownStateArray;

}

@property (nonatomic,readonly) Class metadataClass;                                                          //@synthesize metadataClass=_metadataClass - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * backingMetadataToObserversArrayDictionary;              //@synthesize backingMetadataToObserversArrayDictionary=_backingMetadataToObserversArrayDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * backingMetadataToLastKnownStateArray;                   //@synthesize backingMetadataToLastKnownStateArray=_backingMetadataToLastKnownStateArray - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)metadataClass;
-(id)initWithMetadataClass:(Class)arg1 ;
-(id)addObservation:(/*^block*/id)arg1 forFile:(id)arg2 ;
-(id)lastKnownStateOfMetadata:(id)arg1 ;
-(void)forgetCompletedImports;
-(void)pushState:(id)arg1 toMetadata:(id)arg2 ;
-(int)numberOfRunningImports;
-(id)_getObserverTokensForMetadata:(id)arg1 ;
-(id)_lastKnownStateForMetadata:(id)arg1 ;
-(NSMutableDictionary *)backingMetadataToLastKnownStateArray;
-(NSMutableDictionary *)backingMetadataToObserversArrayDictionary;
-(void)unregisterToken:(id)arg1 ;
@end
