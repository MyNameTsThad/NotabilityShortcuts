/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GLiCloudThermometerTestingDelegate;
@class GLTimeMeasurer, NSString, NSTimer, NSMetadataQuery, NSURL, NSFileCoordinator;

@interface GLiCloudThermometer : NSObject {

	GLTimeMeasurer* tm;
	char _metadataQueryShouldExpectThermometerItem;
	char _haveFileCoordinatedReadOnThermometerItem;
	char _iCloudMetadataQueryReceivedWithThermometerItem;
	char _replyDispatched;
	id<GLiCloudThermometerTestingDelegate> _testingDelegate;
	NSString* _thermometerFilename;
	NSString* _thermometerContents;
	NSTimer* _iCloudThermometerTimeout;
	/*^block*/id _completionHandler;
	NSMetadataQuery* _query;
	NSURL* _ubiquityContainerURL;
	NSURL* _thermometerURL;
	NSFileCoordinator* _readCoordinator;

}

@property (assign) char metadataQueryShouldExpectThermometerItem;                                        //@synthesize metadataQueryShouldExpectThermometerItem=_metadataQueryShouldExpectThermometerItem - In the implementation block
@property (assign) char haveFileCoordinatedReadOnThermometerItem;                                        //@synthesize haveFileCoordinatedReadOnThermometerItem=_haveFileCoordinatedReadOnThermometerItem - In the implementation block
@property (assign,nonatomic) char iCloudMetadataQueryReceivedWithThermometerItem;                        //@synthesize iCloudMetadataQueryReceivedWithThermometerItem=_iCloudMetadataQueryReceivedWithThermometerItem - In the implementation block
@property (nonatomic,retain) NSString * thermometerFilename;                                             //@synthesize thermometerFilename=_thermometerFilename - In the implementation block
@property (nonatomic,retain) NSString * thermometerContents;                                             //@synthesize thermometerContents=_thermometerContents - In the implementation block
@property (nonatomic,retain) NSTimer * iCloudThermometerTimeout;                                         //@synthesize iCloudThermometerTimeout=_iCloudThermometerTimeout - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign) char replyDispatched;                                                                 //@synthesize replyDispatched=_replyDispatched - In the implementation block
@property (nonatomic,retain) NSMetadataQuery * query;                                                    //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSURL * ubiquityContainerURL;                                               //@synthesize ubiquityContainerURL=_ubiquityContainerURL - In the implementation block
@property (nonatomic,retain) NSURL * thermometerURL;                                                     //@synthesize thermometerURL=_thermometerURL - In the implementation block
@property (retain) NSFileCoordinator * readCoordinator;                                                  //@synthesize readCoordinator=_readCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<GLiCloudThermometerTestingDelegate> testingDelegate;              //@synthesize testingDelegate=_testingDelegate - In the implementation block
+(int)numberOfStepsToDelay;
-(void)queryUpdateReceived:(id)arg1 ;
-(void)startMetadataQuery;
-(void)setUbiquityContainerURL:(NSURL *)arg1 ;
-(void)setICloudMetadataQueryReceivedWithThermometerItem:(char)arg1 ;
-(void)setMetadataQueryShouldExpectThermometerItem:(char)arg1 ;
-(void)setReplyDispatched:(char)arg1 ;
-(void)setHaveFileCoordinatedReadOnThermometerItem:(char)arg1 ;
-(NSURL *)thermometerURL;
-(void)iCloudTimeoutReached;
-(void)setICloudThermometerTimeout:(NSTimer *)arg1 ;
-(void)setThermometerFilename:(NSString *)arg1 ;
-(char)replyDispatched;
-(NSString *)thermometerFilename;
-(char)createAndMoveThermometerItemIntoUbiquityContainer;
-(void)replyIfNeededWithiCloudBehaving:(char)arg1 ;
-(char)haveFileCoordinatedReadOnThermometerItem;
-(void)setReadCoordinator:(NSFileCoordinator *)arg1 ;
-(NSString *)thermometerContents;
-(void)setThermometerContents:(NSString *)arg1 ;
-(void)setThermometerURL:(NSURL *)arg1 ;
-(NSFileCoordinator *)readCoordinator;
-(NSTimer *)iCloudThermometerTimeout;
-(void)takeiCloudTemperatureWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)metadataQueryShouldExpectThermometerItem;
-(char)iCloudMetadataQueryReceivedWithThermometerItem;
-(id)init;
-(void)dealloc;
-(NSMetadataQuery *)query;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(NSURL *)ubiquityContainerURL;
-(void)queryDidFinishGathering:(id)arg1 ;
-(id<GLiCloudThermometerTestingDelegate>)testingDelegate;
-(void)setTestingDelegate:(id<GLiCloudThermometerTestingDelegate>)arg1 ;
@end

