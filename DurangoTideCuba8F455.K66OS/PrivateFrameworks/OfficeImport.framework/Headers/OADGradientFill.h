/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADFill.h"
#import "OfficeImport-Structs.h"

@class OADShade, NSMutableArray, OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADGradientFill : OADFill {
@private
	NSMutableArray *mStops;	// 12 = 0xc
	BOOL mAreStopsOverridden;	// 16 = 0x10
	OADRelativeRect *mTileRect;	// 20 = 0x14
	BOOL mIsTileRectOverridden;	// 24 = 0x18
	int mFlipMode;	// 28 = 0x1c
	BOOL mIsFlipModeOverridden;	// 32 = 0x20
	BOOL mRotateWithShape;	// 33 = 0x21
	BOOL mIsRotateWithShapeOverridden;	// 34 = 0x22
	OADShade *mShade;	// 36 = 0x24
	BOOL mIsShadeOverridden;	// 40 = 0x28
}
@property(assign) int flipMode;	// G=0x32cd4cbd; S=0x32bf77fd; converted property
@property(assign) BOOL rotateWithShape;	// G=0x32cd4c5d; S=0x32bf7819; converted property
@property(retain) id shade;	// G=0x32bf8021; S=0x32b8f205; converted property
@property(retain) id stops;	// G=0x32b199a5; S=0x32c81ba1; converted property
@property(retain) id tileRect;	// G=0x32cd4ce9; S=0x32bf77b5; converted property
+ (id)defaultProperties;	// 0x32b8e6ad
- (id)initWithDefaults;	// 0x32bf7649
- (void)addStopColor:(id)color position:(float)position;	// 0x32b8f075
- (BOOL)areStopsOverridden;	// 0x32b199d1
- (void)clearStops;	// 0x32b8edf9
- (id)copyWithZone:(NSZone *)zone;	// 0x32c81995
- (void)dealloc;	// 0x32ba90e9
// converted property getter: - (int)flipMode;	// 0x32cd4cbd
- (unsigned)hash;	// 0x32cd55e9
- (BOOL)isEqual:(id)equal;	// 0x32b95c9d
- (BOOL)isFlipModeOverridden;	// 0x32cd4c89
- (BOOL)isRotateWithShapeOverridden;	// 0x32cd4c29
- (BOOL)isShadeOverridden;	// 0x32bf804d
- (BOOL)isTileRectOverridden;	// 0x32cb1569
// converted property getter: - (BOOL)rotateWithShape;	// 0x32cd4c5d
// converted property setter: - (void)setFlipMode:(int)mode;	// 0x32bf77fd
- (void)setParent:(id)parent;	// 0x32b8e6f1
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x32bf7819
// converted property setter: - (void)setShade:(id)shade;	// 0x32b8f205
// converted property setter: - (void)setStops:(id)stops;	// 0x32c81ba1
- (void)setStyleColor:(id)color;	// 0x32c81c79
// converted property setter: - (void)setTileRect:(id)rect;	// 0x32bf77b5
// converted property getter: - (id)shade;	// 0x32bf8021
- (id)stopColorAtIndex:(unsigned)index;	// 0x32b19a05
- (unsigned)stopCount;	// 0x32b19981
- (float)stopPositionAtIndex:(unsigned)index;	// 0x32cd4d15
// converted property getter: - (id)stops;	// 0x32b199a5
// converted property getter: - (id)tileRect;	// 0x32cd4ce9
@end
