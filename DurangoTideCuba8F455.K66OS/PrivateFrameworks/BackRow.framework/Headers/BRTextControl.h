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
@property(retain) id attributedString;	// G=0x32f1db91; S=0x32f1dba1; converted property
- (id)init;	// 0x32f1c3c9
- (void)_shrinkTextToFitInBounds:(CGSize)bounds;	// 0x32f92c6d
- (void)_shrinkTextToTwoLines:(CGSize)twoLines;	// 0x32f92a5d
- (id)accessibilityLabel;	// 0x32f7e7e5
// converted property getter: - (id)attributedString;	// 0x32f1db91
- (void)dealloc;	// 0x32f21761
- (void)drawInContext:(CGContextRef)context;	// 0x32f240e1
- (BOOL)isAccessibilityElement;	// 0x32f7e809
- (CGSize)renderedSize;	// 0x32f25845
- (CGSize)renderedSizeWithMaxSize:(CGSize)maxSize;	// 0x32f23f7d
// converted property setter: - (void)setAttributedString:(id)string;	// 0x32f1dba1
- (void)setMaxSize:(CGSize)size;	// 0x32f2b401
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x32f28a25
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f7e829
@end

