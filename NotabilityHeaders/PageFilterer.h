/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:13 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PageFiltererDelegateNSObject;
@class NSArray, NSMutableDictionary, RichMediaDocument, NSIndexSet;

@interface PageFilterer : NSObject {

	NSArray* _pageArray;
	int _filterMode;
	NSMutableDictionary* _pageArrayIndicesKeyedByPageNumber;
	RichMediaDocument* _document;
	id<PageFiltererDelegate><NSObject> _delegate;
	NSIndexSet* _bookmarkModePagesOfInterest;

}

@property (retain) NSIndexSet * bookmarkModePagesOfInterest;                 //@synthesize bookmarkModePagesOfInterest=_bookmarkModePagesOfInterest - In the implementation block
@property (retain) RichMediaDocument * document;                             //@synthesize document=_document - In the implementation block
@property (assign,nonatomic) int filterMode; 
@property (__weak) id<PageFiltererDelegate><NSObject> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updatePageArray;
-(void)clearPageArray;
-(int)pageArrayIndexOfPageNumber:(int)arg1 ;
-(id)pageArrayObjectAtIndex:(int)arg1 ;
-(void)setPageArray:(id)arg1 ;
-(id)_pageArrayForFilterMode:(int)arg1 ;
-(void)setBookmarkModePagesOfInterestFromBookmarkedPages;
-(void)setBookmarkModePagesOfInterest:(NSIndexSet *)arg1 ;
-(NSIndexSet *)bookmarkModePagesOfInterest;
-(void)setBookmarkModePagesOfInterestWithPages:(id)arg1 ;
-(void)adjustBookmarkedPagesOfInterestToAccomodatePageDeletion:(id)arg1 ;
-(id)pageArray;
-(void)setBookmarkModePagesOfInterestFromPageArray;
-(id)init;
-(void)setDelegate:(id<PageFiltererDelegate><NSObject>)arg1 ;
-(id<PageFiltererDelegate><NSObject>)delegate;
-(unsigned)numberOfPages;
-(RichMediaDocument *)document;
-(void)setDocument:(RichMediaDocument *)arg1 ;
-(int)filterMode;
-(void)setFilterMode:(int)arg1 ;
@end
