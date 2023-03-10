/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:09 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LibraryControllerDelegate <NSObject>
@required
-(id)subjectNamed:(id)arg1;
-(void)organizerTapped:(id)arg1;
-(char)isSubjectLocked:(id)arg1;
-(char)organizerNameAllowed:(id)arg1;
-(void)duplicateDocuments:(id)arg1;
-(char)canShowICloudVersionPicker;
-(void)showICloudVersionPickerForDocument:(id)arg1;
-(void)requestOpenDocument:(id)arg1;
-(id)noteCell:(id)arg1 requestsNameChangeTo:(id)arg2;
-(char)addSubjectNamed:(id)arg1 atIndex:(int)arg2;
-(void)lockSubject:(id)arg1;
-(void)showDeleteDocumentAlertWithDocuments:(id)arg1 completion:(/*^block*/id)arg2;
-(int)nextSubjectColorNumber;
-(char)deleteOrganizer:(id)arg1;
-(void)moveOrganizer:(id)arg1 toIndex:(int)arg2;
-(id)subjectsInCategory:(id)arg1;
-(id)organizerNamed:(id)arg1;
-(id)notesInSubjectNamed:(id)arg1;
-(id)presentingController;
-(char)addCategoryNamed:(id)arg1;
-(void)setSelectedSubjectNamed:(id)arg1;
-(char)renameOrganizerFrom:(id)arg1 to:(id)arg2;
-(char)checkPassword:(id)arg1 forSubject:(id)arg2;
-(id)lastOpenedDocument;
-(id)noteNameAllowed:(id)arg1;
-(void)setColorKey:(int)arg1 forSubject:(id)arg2;
-(void)setIconKey:(int)arg1 forSubject:(id)arg2;
-(char)doesSubjectHavePassword:(id)arg1;
-(char)changePasswordForSubject:(id)arg1 from:(id)arg2 to:(id)arg3;
-(int)noteCountForSubject:(id)arg1;

@end

