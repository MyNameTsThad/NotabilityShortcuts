/*
* This header is generated by classdump-dyld 1.0
* on Saturday, January 7, 2023 at 9:05:12 PM Indochina Time
* Operating System: Version 10.3.4 (Build 14G61)
* Image Source: /var/containers/Bundle/Application/1CFA07C5-D48B-45F0-A604-A4F98727D809/Notability.app/Notability
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notability/GLCustomTableViewController.h>
#import <Notability/GLFontSizePickerDelegate.h>
#import <Notability/GLSimpleFontPickerDelegate.h>
#import <Notability/GLSegmentedControlDelegate.h>

@protocol GLFontPickerDelegate;
@class NBButton, UISegmentedControl, GLSegmentedFontStyleControl, GLFontFamilyPickerViewController, GLFontSizePickerViewController, UISwitch, NBColorCollectionViewController, NSString, GLFontDescriptor, UIColor;

@interface GLFontPickerViewController : GLCustomTableViewController <GLFontSizePickerDelegate, GLSimpleFontPickerDelegate, GLSegmentedControlDelegate> {

	NBButton* fontFamilyButton;
	UISegmentedControl* fontSizeSegmentedControl;
	GLSegmentedFontStyleControl* fontStyleSegmentedControl;
	GLFontFamilyPickerViewController* simpleFontPickerVC;
	GLFontSizePickerViewController* fontSizeTableViewController;
	UISwitch* checkSpellingSwitch;
	UISwitch* tapAnywhereSwitch;
	NBColorCollectionViewController* fontColorPickerViewController;
	char _showSystemTypingOptions;
	NSString* instructionText;
	GLFontDescriptor* _fontDescriptor;
	id<GLFontPickerDelegate> _fontPickerDelegate;
	UIColor* _backgroundColor;

}

@property (nonatomic,retain) NSString * instructionText; 
@property (nonatomic,retain) GLFontDescriptor * fontDescriptor;                               //@synthesize fontDescriptor=_fontDescriptor - In the implementation block
@property (assign,nonatomic,__weak) id<GLFontPickerDelegate> fontPickerDelegate;              //@synthesize fontPickerDelegate=_fontPickerDelegate - In the implementation block
@property (assign,nonatomic) char showSystemTypingOptions;                                    //@synthesize showSystemTypingOptions=_showSystemTypingOptions - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fontSizePickerPickedFontSize:(float)arg1 ;
-(void)simpleFontPicker:(id)arg1 selectedFontFamilyNamed:(id)arg2 ;
-(void)segmentedControl:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(unsigned)segmentedControl:(id)arg1 requestsButtonStateAtIndex:(int)arg2 ;
-(void)fontFamilySelectorTapped;
-(id)initWithFontDescriptor:(id)arg1 ;
-(void)setFontPickerDelegate:(id<GLFontPickerDelegate>)arg1 ;
-(void)backAction;
-(void)setShowSystemTypingOptions:(char)arg1 ;
-(void)fontSizeSelectorTapped;
-(id<GLFontPickerDelegate>)fontPickerDelegate;
-(void)updateToMatchDescriptor;
-(char)showSystemTypingOptions;
-(void)checkSpellingAction;
-(void)tapAnywhereAction;
-(void)updateWithSize:(float)arg1 ;
-(void)initFontSizeVC;
-(NSString *)instructionText;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(GLFontDescriptor *)fontDescriptor;
-(void)setFontDescriptor:(GLFontDescriptor *)arg1 ;
-(void)setInstructionText:(NSString *)arg1 ;
@end
