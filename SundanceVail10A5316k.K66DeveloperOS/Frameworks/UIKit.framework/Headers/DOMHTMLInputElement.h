/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <DOMHTMLInputElement.h> // Unknown library


@interface DOMHTMLInputElement (UIWebFormPeripheral)
- (id)createPeripheral;	// 0x3029987d
@end

@interface DOMHTMLInputElement (UITextInputAdditions)
- (BOOL)isEditing;	// 0x302bc041
- (BOOL)isSecure;	// 0x302bbe89
- (BOOL)isTextControl;	// 0x302bbeb9
- (int)keyboardType;	// 0x302bbed1
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x302bbfcd
- (id)text;	// 0x302bbe79
- (id)textInputTraits;	// 0x302bbb85
@end

@interface DOMHTMLInputElement (UIWebInteraction)
- (BOOL)isLikelyToBeginPageLoad;	// 0x30321165
- (BOOL)nodeCanBecomeFirstResponder;	// 0x3032119d
@end

@interface DOMHTMLInputElement (UIWebBrowserViewPrivate)
- (void)_accessoryClear;	// 0x303a1abd
- (BOOL)_isAssistedDateType;	// 0x303a1845
- (BOOL)_requiresAccessoryView;	// 0x303a19b1
- (BOOL)_requiresInputView;	// 0x303a1a0d
- (void)_startAssistingDocumentView:(id)view;	// 0x303a18f5
- (void)_stopAssistingDocumentView:(id)view;	// 0x303a1945
- (BOOL)_supportsAccessoryClear;	// 0x303a1a6d
- (BOOL)_supportsAutoFill;	// 0x303a1a69
- (id)_textFormElement;	// 0x303a1ad9
@end

