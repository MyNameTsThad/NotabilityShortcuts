/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:07 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol NBCloudFlowController, NBImportObservationToken;
@class GLCircularProgressView, GLActivityIndicatorView, NBButton, NBImportState, UIImageView, GLCloudFileMetadata, UINavigationController, UIButton;

@interface NICloudImportTableViewCell : UITableViewCell {

	GLCircularProgressView* _progressView;
	GLActivityIndicatorView* _workingIndicatorView;
	NBButton* _openDocumentButton;
	NBButton* _subjectPickerButton;
	NBButton* _errorRecoveryButton;
	NBImportState* _state;
	UIImageView* _subjectPickerDisclosureArrow;
	char _shouldShowRichFileInformation;
	id<NBCloudFlowController> _delegate;
	GLCloudFileMetadata* _contents;
	UINavigationController* _errorRecoveryContext;
	UIButton* _cancelImportButton;
	id<NBImportObservationToken> _stateObservationToken;

}

@property (nonatomic,readonly) GLCircularProgressView * progressView; 
@property (nonatomic,readonly) GLActivityIndicatorView * workingIndicatorView; 
@property (nonatomic,readonly) UIButton * cancelImportButton;                                   //@synthesize cancelImportButton=_cancelImportButton - In the implementation block
@property (nonatomic,readonly) NBButton * openDocumentButton; 
@property (nonatomic,readonly) NBButton * subjectPickerButton; 
@property (nonatomic,readonly) NBButton * errorRecoveryButton; 
@property (nonatomic,readonly) UIImageView * subjectPickerDisclosureArrow; 
@property (nonatomic,retain) NBImportState * state; 
@property (nonatomic,retain) id<NBImportObservationToken> stateObservationToken;                //@synthesize stateObservationToken=_stateObservationToken - In the implementation block
@property (assign,nonatomic,__weak) id<NBCloudFlowController> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GLCloudFileMetadata * contents;                                    //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) char shouldShowRichFileInformation;                                //@synthesize shouldShowRichFileInformation=_shouldShowRichFileInformation - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * errorRecoveryContext;              //@synthesize errorRecoveryContext=_errorRecoveryContext - In the implementation block
-(id<NBImportObservationToken>)stateObservationToken;
-(void)setStateObservationToken:(id<NBImportObservationToken>)arg1 ;
-(void)openCompletedImportAction;
-(void)attemptRecoveryFromErrorState;
-(void)cancelImportAction;
-(void)subjectPickerAction;
-(char)shouldShowRichFileInformation;
-(NBButton *)subjectPickerButton;
-(UIImageView *)subjectPickerDisclosureArrow;
-(void)_configureAccessoryViewForFileAccordingToState:(id)arg1 ;
-(GLActivityIndicatorView *)workingIndicatorView;
-(NBButton *)openDocumentButton;
-(NBButton *)errorRecoveryButton;
-(UINavigationController *)errorRecoveryContext;
-(void)setShouldShowRichFileInformation:(char)arg1 ;
-(void)setErrorRecoveryContext:(UINavigationController *)arg1 ;
-(UIButton *)cancelImportButton;
-(void)layoutSubviews;
-(void)setDelegate:(id<NBCloudFlowController>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<NBCloudFlowController>)delegate;
-(NBImportState *)state;
-(void)setState:(NBImportState *)arg1 ;
-(GLCloudFileMetadata *)contents;
-(void)setContents:(GLCloudFileMetadata *)arg1 ;
-(void)prepareForReuse;
-(GLCircularProgressView *)progressView;
@end

