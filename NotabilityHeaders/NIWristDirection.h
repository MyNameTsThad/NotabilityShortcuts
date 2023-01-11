/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@interface NIWristDirection : NSObject {

	CGPoint _debugVisualizationOrigin;
	CGPoint _direction;

}

@property (assign) CGPoint debugVisualizationOrigin; 
@property (assign) CGPoint direction; 
+(CGPoint)defaultWristDirection;
-(void)updateDebugVisual;
-(id)initFromUserDefaults;
-(void)updateUserDefaults;
-(void)setDebugVisualizationOrigin:(CGPoint)arg1 ;
-(CGPoint)debugVisualizationOrigin;
-(id)init;
-(void)setDirection:(CGPoint)arg1 ;
-(CGPoint)direction;
@end
