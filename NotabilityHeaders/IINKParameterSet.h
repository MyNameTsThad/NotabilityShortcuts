/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:17 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Notability/Notability-Structs.h>
@interface IINKParameterSet : NSObject {

	shared_ptr<myscript::iink::ParameterSet>* _parameterSet;

}
-(id)initWithSharedPtr:(shared_ptr<myscript::iink::ParameterSet>*)arg1 ;
-(shared_ptr<myscript::iink::ParameterSet>*)sptr;
-(id)getStringForKey:(id)arg1 error:(id*)arg2 ;
-(id)getStringForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)getBooleanForKey:(id)arg1 error:(id*)arg2 ;
-(char)getBooleanForKey:(id)arg1 defaultValue:(char)arg2 ;
-(char)setBoolean:(char)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)getNumberForKey:(id)arg1 error:(id*)arg2 ;
-(double)getNumberForKey:(id)arg1 defaultValue:(double)arg2 ;
-(id)getStringArrayForKey:(id)arg1 error:(id*)arg2 ;
-(char)setStringArray:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)getSectionForKey:(id)arg1 error:(id*)arg2 ;
-(char)inject:(id)arg1 error:(id*)arg2 ;
-(id)getString:(id)arg1 error:(id*)arg2 ;
-(id)getString:(id)arg1 orValue:(id)arg2 ;
-(char)setString:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(char)getBoolean:(id)arg1 error:(id*)arg2 ;
-(char)getBoolean:(id)arg1 orValue:(char)arg2 ;
-(char)setBoolean:(id)arg1 value:(char)arg2 error:(id*)arg3 ;
-(double)getNumber:(id)arg1 error:(id*)arg2 ;
-(double)getNumber:(id)arg1 orValue:(double)arg2 ;
-(char)setNumber:(id)arg1 value:(double)arg2 error:(id*)arg3 ;
-(id)getStringArray:(id)arg1 error:(id*)arg2 ;
-(char)setStringArray:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)getSection:(id)arg1 error:(id*)arg2 ;
-(char)setNumber:(double)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
@end
