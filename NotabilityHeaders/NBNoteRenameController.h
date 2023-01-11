/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/NBNoteRenameController.h>

@protocol NBNoteRenameController <NSObject>
@required
-(char)isProposedNoteNameAllowed:(id)arg1 forNote:(id)arg2;
-(id)attemptToRenameNote:(id)arg1 toName:(id)arg2;

@end


@class NBNoteStore, NSString;

@interface NBNoteRenameController : NSObject <NBNoteRenameController> {

	NBNoteStore* _store;

}

@property (nonatomic,readonly) NBNoteStore * store;                 //@synthesize store=_store - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNoteStore:(id)arg1 ;
-(char)_isNameForDocument:(id)arg1 equivalentTo:(id)arg2 ;
-(char)isProposedNoteNameAllowed:(id)arg1 forNote:(id)arg2 ;
-(id)attemptToRenameNote:(id)arg1 toName:(id)arg2 ;
-(NBNoteStore *)store;
@end
