/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <DOMHTMLTextAreaElement.h> // Unknown library


@interface DOMHTMLTextAreaElement (UITextInputAdditions)
- (BOOL)isEditing;	// 0x304780d1
- (BOOL)isTextControl;	// 0x30478059
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x3047805d
- (id)textInputTraits;	// 0x30477f3d
@end

@interface DOMHTMLTextAreaElement (UIWebInteraction)
- (BOOL)nodeCanBecomeFirstResponder;	// 0x304d8829
@end

@interface DOMHTMLTextAreaElement (UIWebBrowserViewPrivate)
- (BOOL)_requiresAccessoryView;	// 0x30554609
- (BOOL)_requiresInputView;	// 0x3055460d
- (void)_startAssistingDocumentView:(id)view;	// 0x305545b9
- (void)_stopAssistingDocumentView:(id)view;	// 0x305545cd
- (BOOL)_supportsAutoFill;	// 0x30554611
- (id)_textFormElement;	// 0x30554615
@end
