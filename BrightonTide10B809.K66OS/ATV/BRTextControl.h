/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRTextControl : BRControl {
	NSAttributedString *_string;	// 84 = 0x54
}
@property(retain) id attributedString;	// G=0x310769; S=0x3106fd; converted property
- (id)init;	// 0x3105f5
- (void)_shrinkTextToFitInBounds:(CGSize)bounds;	// 0x333ad1
- (void)_shrinkTextToTwoLines:(CGSize)twoLines;	// 0x333d09
- (id)accessibilityLabel;	// 0x310969
- (id)accessibilityTraitsList;	// 0x3109bd
// converted property getter: - (id)attributedString;	// 0x310769
- (void)dealloc;	// 0x31063d
- (id)description;	// 0x310a25
- (void)drawRect:(CGRect)rect;	// 0x3108c9
- (BOOL)isAccessibilityElement;	// 0x310945
- (CGSize)renderedSize;	// 0x310815
- (CGSize)renderedSizeWithMaxSize:(CGSize)maxSize;	// 0x310881
// converted property setter: - (void)setAttributedString:(id)string;	// 0x3106fd
- (void)setMaxSize:(CGSize)size;	// 0x310aa1
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x310689
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3109f9
- (void)updateBoundValue;	// 0x310779
@end

