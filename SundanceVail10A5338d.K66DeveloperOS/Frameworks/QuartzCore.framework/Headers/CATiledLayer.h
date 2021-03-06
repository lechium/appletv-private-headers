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
@property(assign, getter=isDrawingEnabled) BOOL drawingEnabled;	// G=0x3210d85d; S=0x3210d869; 
@property(assign) CGColorRef fillColor;	// G=0x3210d83d; S=0x3210d845; 
@property(assign) unsigned long levelsOfDetail;	// G=0x3210d3a5; S=0x3210d3ad; 
@property(assign) unsigned long levelsOfDetailBias;	// G=0x3210d3b5; S=0x3210d3bd; 
@property(assign) float maximumTileScale;	// G=0x3210d84d; S=0x3210d855; 
@property(assign) CGSize tileSize;	// G=0x3210d3c5; S=0x3210d3d5; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x3210d34d
+ (id)defaultValueForKey:(id)key;	// 0x3210c26d
+ (double)fadeDuration;	// 0x3210c261
+ (unsigned)prefetchedTiles;	// 0x3210d3e1
+ (BOOL)shouldDrawOnMainThread;	// 0x3210d3dd
- (BOOL)_canDisplayConcurrently;	// 0x3210d349
- (void)_dealloc;	// 0x3210cf81
- (void)_display;	// 0x3210d03d
- (BOOL)canDrawRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x3210d535
- (void)dealloc;	// 0x3210d009
- (void)didChangeValueForKey:(id)key;	// 0x3210c3e1
- (void)displayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x3210d5f9
// declared property getter: - (CGColorRef)fillColor;	// 0x3210d83d
- (void)invalidateContents;	// 0x3210cf6d
// declared property getter: - (BOOL)isDrawingEnabled;	// 0x3210d85d
// declared property getter: - (unsigned long)levelsOfDetail;	// 0x3210d3a5
// declared property getter: - (unsigned long)levelsOfDetailBias;	// 0x3210d3b5
// declared property getter: - (float)maximumTileScale;	// 0x3210d84d
- (BOOL)queueIsEmpty;	// 0x3210d79d
- (void)setContents:(id)contents;	// 0x3210c70d
// declared property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x3210d869
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x3210d845
// declared property setter: - (void)setLevelsOfDetail:(unsigned long)detail;	// 0x3210d3ad
// declared property setter: - (void)setLevelsOfDetailBias:(unsigned long)detailBias;	// 0x3210d3bd
// declared property setter: - (void)setMaximumTileScale:(float)scale;	// 0x3210d855
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3210c525
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x3210d4fd
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x3210d3e5
// declared property setter: - (void)setTileSize:(CGSize)size;	// 0x3210d3d5
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x3210c4cd
// declared property getter: - (CGSize)tileSize;	// 0x3210d3c5
@end

