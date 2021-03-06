/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class WAKWindow;

@interface UIWebTiledView : UIView {
	WAKWindow *_wakWindow;	// 44 = 0x2c
	int _inGestureType;	// 48 = 0x30
	int _tilingArea;	// 52 = 0x34
	BOOL _didFirstTileLayout;	// 56 = 0x38
	BOOL _layoutTilesInMainThread;	// 57 = 0x39
	BOOL _tilingModeIsLocked;	// 58 = 0x3a
}
@property(assign) BOOL drawsGrid;	// G=0x302c4d1d; S=0x302c4d19; converted property
@property(assign) BOOL layoutTilesInMainThread;	// G=0x302c4d39; S=0x302c4d49; converted property
@property(assign) BOOL logsTilingChanges;	// G=0x302c4d31; S=0x302c4d2d; converted property
@property(assign) unsigned maxTileCount;	// G=0x302c4d21; S=0x30108af5; converted property
@property(assign) BOOL tileDrawingEnabled;	// G=0x302c4d35; S=0x302c4d8d; converted property
@property(assign) CGSize tileSize;	// G=0x302c4d0d; S=0x30108af1; converted property
@property(assign) BOOL tilesOpaque;	// G=0x302c4d69; S=0x30108d91; converted property
@property(assign) int tilingArea;	// G=0x302c4ced; S=0x3010d289; converted property
@property(assign, getter=isTilingEnabled) BOOL tilingEnabled;	// G=0x302c4d29; S=0x30108af9; converted property
@property(readonly, retain) WAKWindow *wakWindow;	// G=0x302c4d59; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x300fc435
- (void)_didScroll;	// 0x30183ab9
- (void)_screenChanged:(id)changed;	// 0x302c4e05
- (void)_updateForScreen:(id)screen;	// 0x300ff851
- (unsigned)adjustedMaxTileCount;	// 0x302c4d25
- (void)dealloc;	// 0x302c4efd
// converted property getter: - (BOOL)drawsGrid;	// 0x302c4d1d
// converted property getter: - (BOOL)isTilingEnabled;	// 0x302c4d29
- (void)layoutSubviews;	// 0x30100955
// converted property getter: - (BOOL)layoutTilesInMainThread;	// 0x302c4d39
- (void)layoutTilesNow;	// 0x30183105
- (void)layoutTilesNowForRect:(CGRect)rect;	// 0x302c4fad
- (void)layoutTilesNowOnWebThread;	// 0x302c4e91
- (void)lockTilingMode;	// 0x302c4cfd
// converted property getter: - (BOOL)logsTilingChanges;	// 0x302c4d31
// converted property getter: - (unsigned)maxTileCount;	// 0x302c4d21
- (void)removeAllNonVisibleTiles;	// 0x301818a9
- (void)removeAllTiles;	// 0x30183bcd
// converted property setter: - (void)setDrawsGrid:(BOOL)grid;	// 0x302c4d19
- (void)setInGesture:(int)gesture;	// 0x302c4ddd
// converted property setter: - (void)setLayoutTilesInMainThread:(BOOL)mainThread;	// 0x302c4d49
// converted property setter: - (void)setLogsTilingChanges:(BOOL)changes;	// 0x302c4d2d
// converted property setter: - (void)setMaxTileCount:(unsigned)count;	// 0x30108af5
- (void)setNeedsDisplay;	// 0x302c4f6d
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x301094e5
- (void)setNeedsLayout;	// 0x300fc881
// converted property setter: - (void)setTileDrawingEnabled:(BOOL)enabled;	// 0x302c4d8d
- (void)setTileMinificationFilter:(id)filter;	// 0x300fe265
// converted property setter: - (void)setTileSize:(CGSize)size;	// 0x30108af1
// converted property setter: - (void)setTilesOpaque:(BOOL)opaque;	// 0x30108d91
// converted property setter: - (void)setTilingArea:(int)area;	// 0x3010d289
// converted property setter: - (void)setTilingEnabled:(BOOL)enabled;	// 0x30108af9
- (void)setTransform:(CGAffineTransform)transform;	// 0x302c4eb1
// converted property getter: - (BOOL)tileDrawingEnabled;	// 0x302c4d35
// converted property getter: - (CGSize)tileSize;	// 0x302c4d0d
// converted property getter: - (BOOL)tilesOpaque;	// 0x302c4d69
// converted property getter: - (int)tilingArea;	// 0x302c4ced
- (void)unlockTilingMode;	// 0x302c4db9
- (void)updateTilingMode;	// 0x3010d2bd
- (CGRect)visibleRect;	// 0x30186981
// converted property getter: - (id)wakWindow;	// 0x302c4d59
- (void)willMoveToWindow:(id)window;	// 0x300ff825
- (WKWindow *)wkWindow;	// 0x300fc8f9
@end

