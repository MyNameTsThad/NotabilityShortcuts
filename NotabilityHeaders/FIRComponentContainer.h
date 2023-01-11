/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:15 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FIRApp, NSMutableDictionary;

@interface FIRComponentContainer : NSObject {

	FIRApp* _app;
	NSMutableDictionary* _components;
	NSMutableDictionary* _cachedInstances;

}

@property (nonatomic,retain) NSMutableDictionary * components;                   //@synthesize components=_components - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedInstances;              //@synthesize cachedInstances=_cachedInstances - In the implementation block
@property (nonatomic,__weak,readonly) FIRApp * app;                              //@synthesize app=_app - In the implementation block
+(void)registerAsComponentRegistrant:(Class)arg1 ;
+(void)registerAsComponentRegistrant:(Class)arg1 inSet:(id)arg2 ;
-(void)removeAllCachedInstances;
-(id)initWithApp:(id)arg1 ;
-(id)initWithApp:(id)arg1 registrants:(id)arg2 ;
-(void)populateComponentsFromRegisteredClasses:(id)arg1 forApp:(id)arg2 ;
-(id)instantiateInstanceForProtocol:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)cachedInstances;
-(id)initWithApp:(id)arg1 components:(id)arg2 ;
-(void)setCachedInstances:(NSMutableDictionary *)arg1 ;
-(id)instanceForProtocol:(id)arg1 ;
-(NSMutableDictionary *)components;
-(void)setComponents:(NSMutableDictionary *)arg1 ;
-(FIRApp *)app;
@end
