/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <DOMHTMLInputElement.h> // Unknown library


@interface DOMHTMLInputElement (UIWebFormPeripheral)
- (id)createPeripheral;	// 0x352d0ca9
@end

@interface DOMHTMLInputElement (UITextInputAdditions)
- (BOOL)isSecure;	// 0x352f1a51
- (BOOL)isTextControl;	// 0x352f1a81
- (int)keyboardType;	// 0x352f1a99
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x352f1b95
- (id)text;	// 0x352f1a41
- (id)textInputTraits;	// 0x352f1705
@end

@interface DOMHTMLInputElement (UIWebInteraction)
- (BOOL)isLikelyToBeginPageLoad;	// 0x3536a765
- (BOOL)nodeCanBecomeFirstResponder;	// 0x3536a7a1
@end

@interface DOMHTMLInputElement (UIWebBrowserViewPrivate)
- (void)_accessoryClear;	// 0x353de3ed
- (BOOL)_isAssistedDateType;	// 0x353de175
- (BOOL)_requiresAccessoryView;	// 0x353de2dd
- (BOOL)_requiresInputView;	// 0x353de339
- (void)_startAssistingDocumentView:(id)view;	// 0x353de229
- (void)_stopAssistingDocumentView:(id)view;	// 0x353de275
- (BOOL)_supportsAccessoryClear;	// 0x353de399
- (BOOL)_supportsAutoFill;	// 0x353de395
- (id)_textFormElement;	// 0x353de409
@end

