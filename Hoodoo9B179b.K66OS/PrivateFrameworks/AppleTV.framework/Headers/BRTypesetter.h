/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSAttributedString, NSMutableArray;

@interface BRTypesetter : NSObject {
@private
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
+ (float)pointSizeForBoxHeight:(float)boxHeight fontName:(id)name;	// 0x303761d5
- (id)initWithAttributedString:(id)attributedString textBoxSize:(CGSize)size;	// 0x303759e1
- (id)_boxLines:(BOOL *)lines;	// 0x30376421
- (void)_justifyLines:(id)lines;	// 0x303765dd
- (CTLineRef)_truncateLine:(CTLineRef)line withSetting:(unsigned char)setting;	// 0x3037666d
- (CTLineRef)_truncationToken;	// 0x30376705
- (void)_updateRenderingAttributes;	// 0x30376235
- (void)dealloc;	// 0x30375ced
- (void)drawTextAtPoint:(CGPoint)point inContext:(CGContextRef)context;	// 0x30375ead
- (id)lineAtIndex:(long)index;	// 0x303760dd
- (long)numLines;	// 0x303760bd
- (CGSize)typographicBounds;	// 0x30375d79
@end

