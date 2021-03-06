/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "NSGlyphInfo.h"


__attribute__((visibility("hidden")))
@interface NSCIDGlyphInfo : NSGlyphInfo {
	unsigned short _cid;	// 8 = 0x8
	unsigned _collection;	// 12 = 0xc
}
+ (id)glyphInfoWithCharacterIdentifier:(unsigned)characterIdentifier collection:(unsigned)collection baseString:(id)string;	// 0x35c644e5
+ (void)initialize;	// 0x35c6453d
- (id)initWithCharacterIdentifier:(unsigned)characterIdentifier collection:(unsigned)collection baseString:(id)string;	// 0x35c6457d
- (unsigned)_glyphForFont:(id)font baseString:(id)string;	// 0x35c645d1
- (unsigned)characterCollection;	// 0x35c64659
- (unsigned)characterIdentifier;	// 0x35c64649
- (id)description;	// 0x35c646d9
- (void)encodeWithCoder:(id)coder;	// 0x35c64669
@end

