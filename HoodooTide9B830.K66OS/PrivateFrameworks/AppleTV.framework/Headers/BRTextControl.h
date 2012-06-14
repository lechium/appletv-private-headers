/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

@interface BRTextControl : BRControl {
@private
	NSAttributedString *_string;	// 48 = 0x30
}
@property(retain) id attributedString;	// G=0x32a0898d; S=0x32a0891d; converted property
- (id)init;	// 0x32a08811
- (void)_shrinkTextToFitInBounds:(CGSize)bounds;	// 0x32a2bc15
- (void)_shrinkTextToTwoLines:(CGSize)twoLines;	// 0x32a2be21
- (id)accessibilityLabel;	// 0x32a08b89
// converted property getter: - (id)attributedString;	// 0x32a0898d
- (void)dealloc;	// 0x32a08859
- (void)drawInContext:(CGContextRef)context;	// 0x32a08aed
- (BOOL)isAccessibilityElement;	// 0x32a08b65
- (CGSize)renderedSize;	// 0x32a08a35
- (CGSize)renderedSizeWithMaxSize:(CGSize)maxSize;	// 0x32a08aa5
// converted property setter: - (void)setAttributedString:(id)string;	// 0x32a0891d
- (void)setMaxSize:(CGSize)size;	// 0x32a08c09
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x32a088a5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32a08bdd
- (void)updateBoundValue;	// 0x32a0899d
@end
