/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:16 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface APMFilterResult : NSObject {

	int _audienceID;
	NSData* _currentResults;
	NSData* _previousResults;

}

@property (nonatomic,readonly) int audienceID;                        //@synthesize audienceID=_audienceID - In the implementation block
@property (nonatomic,readonly) NSData * currentResults;               //@synthesize currentResults=_currentResults - In the implementation block
@property (nonatomic,readonly) NSData * previousResults;              //@synthesize previousResults=_previousResults - In the implementation block
-(int)audienceID;
-(NSData *)previousResults;
-(id)initWithAudienceID:(int)arg1 currentResults:(id)arg2 previousResults:(id)arg3 ;
-(NSData *)currentResults;
@end

