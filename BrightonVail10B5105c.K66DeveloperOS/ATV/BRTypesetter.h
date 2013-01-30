/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRTypesetter : XXUnknownSuperclass {
	NSAttributedString *_resolvedString;	// 4 = 0x4
	CTTypesetterRef _setter;	// 8 = 0x8
	NSMutableArray *_lines;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
	CGSize _shadowOffset;	// 24 = 0x18
	CGColorRef _shadowColor;	// 32 = 0x20
	float _shadowBlurAmount;	// 36 = 0x24
	float _flushFactor;	// 40 = 0x28
	BOOL _renderingAttributesFetched;	// 44 = 0x2c
}
+ (id)parseTypographicMarkup:(id)markup;	// 0x3ab43d
+ (float)pointSizeForBoxHeight:(float)boxHeight fontName:(id)name;	// 0x3ab6d5
- (id)initWithAttributedString:(id)attributedString textBoxSize:(CGSize)size;	// 0x3aac51
- (id)_boxLines:(BOOL *)lines;	// 0x3ab90d
- (void)_justifyLines:(id)lines;	// 0x3abad9
- (CTLineRef)_truncateLine:(CTLineRef)line withSetting:(unsigned char)setting;	// 0x3abcd9
- (CTLineRef)_truncationToken;	// 0x3abd71
- (void)_updateRenderingAttributes;	// 0x3ab729
- (void)dealloc;	// 0x3aaf25
- (void)drawTextAtPoint:(CGPoint)point inContext:(CGContextRef)context;	// 0x3ab0e9
- (id)lineAtIndex:(long)index;	// 0x3ab345
- (long)numLines;	// 0x3ab325
- (CGSize)typographicBounds;	// 0x3aafb5
@end
