/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"
#import "UIKit-Structs.h"
#import "UITextInputTraits.h"

@class UIColor, UIImage;

@protocol UITextInputTraits_Private <NSObject, UITextInputTraits>
@optional
@property(assign, nonatomic) BOOL acceptsEmoji;
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;
@property(assign, nonatomic) BOOL contentsIsSingleValue;
@property(assign, nonatomic) BOOL deferBecomingResponder;
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;
@property(assign, nonatomic) int emptyContentReturnKeyType;
@property(assign, nonatomic) BOOL forceEnableDictation;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(assign, nonatomic) unsigned insertionPointWidth;
@property(assign, nonatomic) BOOL learnsCorrections;
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(assign, nonatomic) int shortcutConversionType;
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;
@property(assign, nonatomic) int textLoupeVisibility;
@property(assign, nonatomic) int textSelectionBehavior;
@property(assign, nonatomic) id textSuggestionDelegate;
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;
@property(assign, nonatomic) BOOL useInterfaceLanguageForLocalization;
// declared property getter: - (BOOL)acceptsEmoji;
// declared property getter: - (BOOL)acceptsFloatingKeyboard;
// declared property getter: - (BOOL)acceptsSplitKeyboard;
// declared property getter: - (BOOL)contentsIsSingleValue;
// declared property getter: - (BOOL)deferBecomingResponder;
// declared property getter: - (BOOL)displaySecureTextUsingPlainText;
// declared property getter: - (int)emptyContentReturnKeyType;
// declared property getter: - (BOOL)forceEnableDictation;
// declared property getter: - (id)insertionPointColor;
// declared property getter: - (unsigned)insertionPointWidth;
// declared property getter: - (BOOL)learnsCorrections;
// declared property getter: - (BOOL)returnKeyGoesToNextResponder;
// declared property getter: - (id)selectionBarColor;
// declared property getter: - (id)selectionDragDotImage;
// declared property getter: - (id)selectionHighlightColor;
// declared property setter: - (void)setAcceptsEmoji:(BOOL)emoji;
// declared property setter: - (void)setAcceptsFloatingKeyboard:(BOOL)keyboard;
// declared property setter: - (void)setAcceptsSplitKeyboard:(BOOL)keyboard;
// declared property setter: - (void)setContentsIsSingleValue:(BOOL)value;
// declared property setter: - (void)setDeferBecomingResponder:(BOOL)responder;
// declared property setter: - (void)setDisplaySecureTextUsingPlainText:(BOOL)text;
// declared property setter: - (void)setEmptyContentReturnKeyType:(int)type;
// declared property setter: - (void)setForceEnableDictation:(BOOL)dictation;
// declared property setter: - (void)setInsertionPointColor:(id)color;
// declared property setter: - (void)setInsertionPointWidth:(unsigned)width;
// declared property setter: - (void)setLearnsCorrections:(BOOL)corrections;
// declared property setter: - (void)setReturnKeyGoesToNextResponder:(BOOL)nextResponder;
// declared property setter: - (void)setSelectionBarColor:(id)color;
// declared property setter: - (void)setSelectionDragDotImage:(id)image;
// declared property setter: - (void)setSelectionHighlightColor:(id)color;
// declared property setter: - (void)setShortcutConversionType:(int)type;
// declared property setter: - (void)setSuppressReturnKeyStyling:(BOOL)styling;
// declared property setter: - (void)setTextLoupeVisibility:(int)visibility;
// declared property setter: - (void)setTextSelectionBehavior:(int)behavior;
// declared property setter: - (void)setTextSuggestionDelegate:(id)delegate;
// declared property setter: - (void)setTextTrimmingSet:(CFCharacterSetRef)set;
// declared property setter: - (void)setUseInterfaceLanguageForLocalization:(BOOL)localization;
// declared property getter: - (int)shortcutConversionType;
// declared property getter: - (BOOL)suppressReturnKeyStyling;
@required
- (void)takeTraitsFrom:(id)from;
@optional
// declared property getter: - (int)textLoupeVisibility;
// declared property getter: - (int)textSelectionBehavior;
// declared property getter: - (id)textSuggestionDelegate;
// declared property getter: - (CFCharacterSetRef)textTrimmingSet;
// declared property getter: - (BOOL)useInterfaceLanguageForLocalization;
@end

