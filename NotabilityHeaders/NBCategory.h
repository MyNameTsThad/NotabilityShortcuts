/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:14 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/NBOrganizer.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface NBCategory : NBOrganizer <NSCoding> {

	char _collapsed;

}

@property (assign,getter=isCollapsed,nonatomic) char collapsed;              //@synthesize collapsed=_collapsed - In the implementation block
-(char)isCategory;
-(char)isDeepEqualToOrganizer:(id)arg1 ;
-(char)isSubject;
-(void)absorbPropertiesFrom:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isCollapsed;
-(void)setCollapsed:(char)arg1 ;
@end
