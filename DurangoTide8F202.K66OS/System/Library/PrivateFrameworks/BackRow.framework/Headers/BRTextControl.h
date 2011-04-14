/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

@interface BRTextControl : BRControl {
@private
	NSAttributedString *_string;	// 44 = 0x2c
}
@property(retain) id attributedString;	// G=0x328a6dfd; S=0x328a6e0d; converted property
- (id)init;	// 0x328a5651
- (void)_shrinkTextToFitInBounds:(CGSize)bounds;	// 0x3291e671
- (void)_shrinkTextToTwoLines:(CGSize)twoLines;	// 0x3291e461
- (id)accessibilityLabel;	// 0x3290a825
// converted property getter: - (id)attributedString;	// 0x328a6dfd
- (void)dealloc;	// 0x328aa945
- (void)drawInContext:(CGContextRef)context;	// 0x328ad285
- (BOOL)isAccessibilityElement;	// 0x3290a849
- (CGSize)renderedSize;	// 0x328af0a5
- (CGSize)renderedSizeWithMaxSize:(CGSize)maxSize;	// 0x328ad121
// converted property setter: - (void)setAttributedString:(id)string;	// 0x328a6e0d
- (void)setMaxSize:(CGSize)size;	// 0x328b522d
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x328b284d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3290a869
@end

