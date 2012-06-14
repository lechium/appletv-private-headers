/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "WAKResponder.h"

@class CALayer;

@interface WAKWindow : WAKResponder {
@private
	WKWindow *_wkWindow;	// 4 = 0x4
	CALayer *_hostLayer;	// 8 = 0x8
	TileCache *_tileCache;	// 12 = 0xc
	CGRect _cachedVisibleRect;	// 16 = 0x10
	CALayer *_rootLayer;	// 32 = 0x20
}
@property(assign) CGSize availableScreenSize;	// G=0x335d070d; S=0x334f08a5; converted property
@property(retain) id contentView;	// G=0x3349d831; S=0x33690fd1; converted property
@property(assign) float currentTileScale;	// G=0x33b0df69; S=0x334eea41; converted property
@property(readonly, retain) CALayer *hostLayer;	// G=0x334756b9; converted property
@property(assign) BOOL keepsZoomedOutTiles;	// G=0x33b0dc69; S=0x334f0341; converted property
@property(retain) CALayer *rootLayer;	// G=0x33b0dc41; S=0x33690f65; converted property
@property(assign) float screenScale;	// G=0x334754e9; S=0x334f08c5; converted property
@property(assign) CGSize screenSize;	// G=0x33550265; S=0x334f0885; converted property
@property(assign) BOOL tilesOpaque;	// G=0x33b0dfb5; S=0x33476299; converted property
@property(assign) int tilingDirection;	// G=0x33b0df95; S=0x3364286d; converted property
@property(assign) int tilingMode;	// G=0x33b0dc51; S=0x334f070d; converted property
@property(assign) BOOL useOrientationDependentFontAntialiasing;	// G=0x3349e021; S=0x334f031d; converted property
@property(assign) float zoomedOutTileScale;	// G=0x335ccb9d; S=0x334ef67d; converted property
+ (id)_wrapperForWindowRef:(WKWindow *)windowRef;	// 0x33475ddd
+ (BOOL)hasLandscapeOrientation;	// 0x3349e039
+ (void)setOrientationProvider:(id)provider;	// 0x334f030d
- (id)initWithFrame:(CGRect)frame;	// 0x33690f75
- (id)initWithLayer:(id)layer;	// 0x33474f29
- (id)_newFirstResponderAfterResigning;	// 0x33664039
- (WKWindow *)_windowRef;	// 0x33475985
// converted property getter: - (CGSize)availableScreenSize;	// 0x335d070d
- (void)close;	// 0x33b0e11d
// converted property getter: - (id)contentView;	// 0x3349d831
- (CGPoint)convertBaseToScreen:(CGPoint)screen;	// 0x336198c1
- (CGPoint)convertScreenToBase:(CGPoint)base;	// 0x33b0dc35
// converted property getter: - (float)currentTileScale;	// 0x33b0df69
- (void)dealloc;	// 0x3368bbe5
- (id)description;	// 0x33b0dd0d
- (void)didRotate;	// 0x3368f8a5
- (void)dumpTiles;	// 0x33b0de45
- (id)firstResponder;	// 0x334a7f09
- (CGRect)frame;	// 0x33b0e0c9
- (BOOL)hasPendingDraw;	// 0x33b0df49
// converted property getter: - (id)hostLayer;	// 0x334756b9
- (void)hostLayerSizeChanged;	// 0x3357a091
- (BOOL)isKeyWindow;	// 0x33476181
// converted property getter: - (BOOL)keepsZoomedOutTiles;	// 0x33b0dc69
- (int)keyViewSelectionDirection;	// 0x33492bb1
- (void)layoutTiles;	// 0x334a3ba1
- (void)layoutTilesNow;	// 0x334f0921
- (void)layoutTilesNowForRect:(CGRect)rect;	// 0x33b0dfd5
- (BOOL)makeFirstResponder:(id)responder;	// 0x33b0dc3d
- (void)makeKeyWindow;	// 0x33b0dc85
- (id)recursiveDescription;	// 0x33b0dc95
- (void)removeAllNonVisibleTiles;	// 0x335ab2b1
- (void)removeAllTiles;	// 0x3360674d
- (void)removeForegroundTiles;	// 0x3368f8d9
// converted property getter: - (id)rootLayer;	// 0x33b0dc41
// converted property getter: - (float)screenScale;	// 0x334754e9
// converted property getter: - (CGSize)screenSize;	// 0x33550265
- (void)sendEvent:(id)event;	// 0x33b0e07d
- (void)sendEvent:(id)event contentChange:(int *)change;	// 0x33b0e01d
- (void)setAcceleratedDrawingEnabled:(BOOL)enabled;	// 0x33476161
// converted property setter: - (void)setAvailableScreenSize:(CGSize)size;	// 0x334f08a5
// converted property setter: - (void)setContentView:(id)view;	// 0x33690fd1
// converted property setter: - (void)setCurrentTileScale:(float)scale;	// 0x334eea41
- (void)setFrame:(CGRect)frame display:(BOOL)display;	// 0x33b0e0e1
// converted property setter: - (void)setKeepsZoomedOutTiles:(BOOL)tiles;	// 0x334f0341
- (void)setNeedsDisplay;	// 0x33509d39
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x33492235
// converted property setter: - (void)setRootLayer:(id)layer;	// 0x33690f65
// converted property setter: - (void)setScreenScale:(float)scale;	// 0x334f08c5
// converted property setter: - (void)setScreenSize:(CGSize)size;	// 0x334f0885
- (void)setTileBordersVisible:(BOOL)visible;	// 0x334760e1
- (void)setTilePaintCountsVisible:(BOOL)visible;	// 0x33476131
// converted property setter: - (void)setTilesOpaque:(BOOL)opaque;	// 0x33476299
// converted property setter: - (void)setTilingDirection:(int)direction;	// 0x3364286d
// converted property setter: - (void)setTilingMode:(int)mode;	// 0x334f070d
// converted property setter: - (void)setUseOrientationDependentFontAntialiasing:(BOOL)antialiasing;	// 0x334f031d
// converted property setter: - (void)setZoomedOutTileScale:(float)scale;	// 0x334ef67d
// converted property getter: - (BOOL)tilesOpaque;	// 0x33b0dfb5
// converted property getter: - (int)tilingDirection;	// 0x33b0df95
// converted property getter: - (int)tilingMode;	// 0x33b0dc51
// converted property getter: - (BOOL)useOrientationDependentFontAntialiasing;	// 0x3349e021
- (CGRect)visibleRect;	// 0x334c1a0d
- (void)willRotate;	// 0x3368f869
// converted property getter: - (float)zoomedOutTileScale;	// 0x335ccb9d
@end
