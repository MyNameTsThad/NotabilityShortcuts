/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:10 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FormattedString, RichMediaFrameSetter, RichMediaDocument, GLTextChecker;


@protocol NBRichTextProtocol <NSObject>
@property (nonatomic,retain) FormattedString * textStore; 
@property (nonatomic,readonly) RichMediaFrameSetter * framesetter; 
@property (nonatomic,readonly) RichMediaDocument * document; 
@property (nonatomic,readonly) GLTextChecker * spellChecker; 
@required
-(FormattedString *)textStore;
-(GLTextChecker *)spellChecker;
-(void)setTextStore:(id)arg1;
-(RichMediaDocument *)document;
-(RichMediaFrameSetter *)framesetter;

@end

