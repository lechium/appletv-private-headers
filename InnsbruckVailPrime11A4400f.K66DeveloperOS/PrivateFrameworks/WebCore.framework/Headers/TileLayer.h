/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <QuartzCore/CALayer.h>


@interface TileLayer : CALayer {
	TileGrid *_tileGrid;	// 48 = 0x30
	unsigned _paintCount;	// 52 = 0x34
}
@property(assign, nonatomic) unsigned paintCount;	// G=0x32ee717d; S=0x32ee718d; @synthesize=_paintCount
@property(assign, nonatomic) TileGrid *tileGrid;	// G=0x337cafa9; S=0x32ee49a9; @synthesize=_tileGrid
+ (id)layerBeingPainted;	// 0x337cafa5
- (id)actionForKey:(id)key;	// 0x32ee49c5
- (void)drawInContext:(CGContextRef)context;	// 0x32ee55e1
- (void)layoutSublayers;	// 0x32ee4b6d
// declared property getter: - (unsigned)paintCount;	// 0x32ee717d
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x32ee4a65
// declared property setter: - (void)setPaintCount:(unsigned)count;	// 0x32ee718d
// declared property setter: - (void)setTileGrid:(TileGrid *)grid;	// 0x32ee49a9
// declared property getter: - (TileGrid *)tileGrid;	// 0x337cafa9
@end

