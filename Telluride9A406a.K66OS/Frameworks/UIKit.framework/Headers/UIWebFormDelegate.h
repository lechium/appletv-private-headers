/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "WebFormDelegate.h"
#import "UIKit-Structs.h"

@class UIWebFormCompletionController, NSMutableDictionary;
@protocol UIBrowserDocumentController;

__attribute__((visibility("hidden")))
@interface UIWebFormDelegate : NSObject <WebFormDelegate> {
@private
	UIWebFormCompletionController *_completionController;	// 4 = 0x4
	id<UIBrowserDocumentController> _controller;	// 8 = 0x8
	NSMutableDictionary *_editedForms;	// 12 = 0xc
}
- (id)initWithController:(id)controller;	// 0x3571df21
- (void)_clearEditedFormsInFrame:(id)frame;	// 0x357c059d
- (void)_didEditFormElement:(id)element inFrame:(id)frame;	// 0x359320d9
- (BOOL)_shouldIgnoreFormTextChangesInFrame:(id)frame;	// 0x35932305
- (void)acceptedAutoFillWord:(id)word;	// 0x35932099
- (void)autoFillWithElementValue;	// 0x359320b9
- (void)dataSourceHasChangedForFrame:(id)frame;	// 0x357c04f5
- (void)dealloc;	// 0x3581d9f1
- (BOOL)formWasEdited;	// 0x357c0699
- (void)formWillHide;	// 0x35931fad
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x35931d01
- (void)frameLayoutHasChanged:(id)changed;	// 0x357c0529
- (BOOL)hasCurrentSuggestions;	// 0x35932045
- (void)setController:(id)controller;	// 0x3571df9d
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x35931fed
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;	// 0x35931d1d
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;	// 0x35931dad
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;	// 0x35931f01
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;	// 0x35931e5d
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;	// 0x35931eb9
@end

