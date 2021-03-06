/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "NSGlyphInfo.h"

@class UIFont;

__attribute__((visibility("hidden")))
@interface NSIdentityGlyphInfo : NSGlyphInfo {
	UIFont *_font;	// 8 = 0x8
	unsigned _glyph;	// 12 = 0xc
}
+ (id)glyphInfoWithGlyph:(unsigned)glyph forFont:(id)font baseString:(id)string;	// 0x32c77f8d
+ (void)initialize;	// 0x32c77fe5
- (id)initWithGlyph:(unsigned)glyph forFont:(id)font baseString:(id)string;	// 0x32c78025
- (id)_font;	// 0x32c78181
- (unsigned)_glyph;	// 0x32c78191
- (unsigned)_glyphForFont:(id)font baseString:(id)string;	// 0x32c780d5
- (void)dealloc;	// 0x32c78089
- (id)description;	// 0x32c78229
- (void)encodeWithCoder:(id)coder;	// 0x32c781a1
@end

