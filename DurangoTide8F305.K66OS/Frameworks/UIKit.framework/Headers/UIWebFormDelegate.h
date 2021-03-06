/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "WebFormDelegate.h"

@class UIWebFormCompletionController, NSMutableDictionary;
@protocol UIBrowserDocumentController;

__attribute__((visibility("hidden")))
@interface UIWebFormDelegate : NSObject <WebFormDelegate> {
@private
	UIWebFormCompletionController *_completionController;	// 4 = 0x4
	id<UIBrowserDocumentController> _controller;	// 8 = 0x8
	NSMutableDictionary *_editedForms;	// 12 = 0xc
}
- (id)initWithController:(id)controller;	// 0x31ffa49d
- (void)_clearEditedFormsInFrame:(id)frame;	// 0x3207daa9
- (void)_didEditFormElement:(id)element inFrame:(id)frame;	// 0x321bc9e9
- (BOOL)_shouldIgnoreFormTextChangesInFrame:(id)frame;	// 0x321bc999
- (void)acceptedAutoFillWord:(id)word;	// 0x321bcc05
- (void)autoFillWithElementValue;	// 0x321bcbe5
- (void)dataSourceHasChangedForFrame:(id)frame;	// 0x3207da15
- (void)dealloc;	// 0x321bcee5
- (BOOL)formWasEdited;	// 0x3207db95
- (void)formWillHide;	// 0x321bcc25
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x321bcea9
- (void)frameLayoutHasChanged:(id)changed;	// 0x3207da41
- (BOOL)hasCurrentSuggestions;	// 0x321bcf95
- (void)setController:(id)controller;	// 0x31ffa515
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x321bcf41
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;	// 0x321bce29
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;	// 0x321bcd8d
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;	// 0x321bcc61
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;	// 0x321bcd3d
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;	// 0x321bcd01
@end

