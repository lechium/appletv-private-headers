/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRTypesetLine : NSObject {
@private
	CTLineRef _line;	// 4 = 0x4
	CGSize _shadowOffset;	// 8 = 0x8
	float _shadowBlurAmount;	// 16 = 0x10
	float _flushFactor;	// 20 = 0x14
}
- (id)initWithCTLineRef:(CTLineRef)ctlineRef shadowOffset:(CGSize)offset shadowBlurAmount:(float)amount flushFactor:(float)factor;	// 0x33152d7d
- (void)dealloc;	// 0x33152e11
- (void)drawLineAtPoint:(CGPoint)point withWidth:(float)width inContext:(CGContextRef)context;	// 0x33152e71
- (void)typographicBounds:(float *)bounds descent:(float *)descent leading:(float *)leading;	// 0x33152e55
@end

