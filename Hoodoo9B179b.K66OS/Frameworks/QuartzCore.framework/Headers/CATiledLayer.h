/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"


@interface CATiledLayer : CALayer {
}
@property(assign, getter=isDrawingEnabled) BOOL drawingEnabled;	// G=0x34f65aed; S=0x34f65af9; 
@property(assign) CGColorRef fillColor;	// G=0x34f65acd; S=0x34f65ad5; 
@property(assign) unsigned levelsOfDetail;	// G=0x34f64b79; S=0x34f64b71; 
@property(assign) unsigned levelsOfDetailBias;	// G=0x34f64b69; S=0x34f64b61; 
@property(assign) float maximumTileScale;	// G=0x34f65add; S=0x34f65ae5; 
@property(assign) CGSize tileSize;	// G=0x34f64b51; S=0x34f64b49; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x34f6497d
+ (id)defaultValueForKey:(id)key;	// 0x34f649d5
+ (double)fadeDuration;	// 0x34f64861
+ (unsigned)prefetchedTiles;	// 0x34f64875
+ (BOOL)shouldDrawOnMainThread;	// 0x34f64871
- (BOOL)_canDisplayConcurrently;	// 0x34f6486d
- (void)_dealloc;	// 0x34f64e75
- (void)_display;	// 0x34f64b81
- (BOOL)canDrawRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x34f650c9
- (void)dealloc;	// 0x34f64e41
- (void)didChangeValueForKey:(id)key;	// 0x34f64879
- (void)displayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x34f6587d
// declared property getter: - (CGColorRef)fillColor;	// 0x34f65acd
- (void)invalidateContents;	// 0x34f64ea9
// declared property getter: - (BOOL)isDrawingEnabled;	// 0x34f65aed
// declared property getter: - (unsigned long)levelsOfDetail;	// 0x34f64b79
// declared property getter: - (unsigned long)levelsOfDetailBias;	// 0x34f64b69
// declared property getter: - (float)maximumTileScale;	// 0x34f65add
- (BOOL)queueIsEmpty;	// 0x34f65a31
- (void)setContents:(id)contents;	// 0x34f64ebd
// declared property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x34f65af9
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x34f65ad5
// declared property setter: - (void)setLevelsOfDetail:(unsigned long)detail;	// 0x34f64b71
// declared property setter: - (void)setLevelsOfDetailBias:(unsigned long)detailBias;	// 0x34f64b61
// declared property setter: - (void)setMaximumTileScale:(float)scale;	// 0x34f65ae5
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x34f64f8d
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x34f65095
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x34f6574d
// declared property setter: - (void)setTileSize:(CGSize)size;	// 0x34f64b49
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x34f65039
// declared property getter: - (CGSize)tileSize;	// 0x34f64b51
@end

