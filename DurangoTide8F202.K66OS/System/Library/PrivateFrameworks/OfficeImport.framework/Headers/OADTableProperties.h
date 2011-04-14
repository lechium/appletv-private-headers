/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class NSString, OADTableStyle, NSArray;

__attribute__((visibility("hidden")))
@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
@private
	NSString *mStyleId;	// 28 = 0x1c
	OADTableStyle *mStyle;	// 32 = 0x20
	BOOL mRightToLeft;	// 36 = 0x24
	BOOL mFirstRow;	// 37 = 0x25
	BOOL mFirstColumn;	// 38 = 0x26
	BOOL mLastRow;	// 39 = 0x27
	BOOL mLastColumn;	// 40 = 0x28
	BOOL mBandRow;	// 41 = 0x29
	BOOL mBandColumn;	// 42 = 0x2a
	NSArray *mEffects;	// 44 = 0x2c
}
@property(assign) BOOL bandColumn;	// G=0x31ab7cf5; S=0x31a76e29; converted property
@property(assign) BOOL bandRow;	// G=0x31a77b71; S=0x31a76e39; converted property
@property(retain) id effects;	// G=0x31ab7e11; S=0x31a76e59; converted property
@property(assign) BOOL firstColumn;	// G=0x31ab7cc5; S=0x31a76de9; converted property
@property(assign) BOOL firstRow;	// G=0x319f6171; S=0x31a76df9; converted property
@property(assign) BOOL lastColumn;	// G=0x31ab7ce5; S=0x31a76e09; converted property
@property(assign) BOOL lastRow;	// G=0x31ab7cd5; S=0x31a76e19; converted property
@property(assign) BOOL rightToLeft;	// G=0x31ab7cb5; S=0x31a76e49; converted property
@property(retain) id style;	// G=0x319f5d01; S=0x31a76e91; converted property
@property(retain) id styleId;	// G=0x31ab7ca5; S=0x319f4031; converted property
+ (id)defaultProperties;	// 0x319f3e45
- (id)initWithDefaults;	// 0x319f3e89
// converted property getter: - (BOOL)bandColumn;	// 0x31ab7cf5
// converted property getter: - (BOOL)bandRow;	// 0x31a77b71
- (void)dealloc;	// 0x319f77d5
// converted property getter: - (id)effects;	// 0x31ab7e11
// converted property getter: - (BOOL)firstColumn;	// 0x31ab7cc5
// converted property getter: - (BOOL)firstRow;	// 0x319f6171
- (BOOL)hasBandsNormalToDir:(int)dir;	// 0x31ab7e79
- (BOOL)hasEffects;	// 0x31ab7ddd
- (BOOL)hasVectorNormalToDir:(int)dir atExtremePos:(int)extremePos;	// 0x31ab7e3d
// converted property getter: - (BOOL)lastColumn;	// 0x31ab7ce5
// converted property getter: - (BOOL)lastRow;	// 0x31ab7cd5
// converted property getter: - (BOOL)rightToLeft;	// 0x31ab7cb5
// converted property setter: - (void)setBandColumn:(BOOL)column;	// 0x31a76e29
// converted property setter: - (void)setBandRow:(BOOL)row;	// 0x31a76e39
// converted property setter: - (void)setEffects:(id)effects;	// 0x31a76e59
// converted property setter: - (void)setFirstColumn:(BOOL)column;	// 0x31a76de9
// converted property setter: - (void)setFirstRow:(BOOL)row;	// 0x31a76df9
// converted property setter: - (void)setLastColumn:(BOOL)column;	// 0x31a76e09
// converted property setter: - (void)setLastRow:(BOOL)row;	// 0x31a76e19
// converted property setter: - (void)setRightToLeft:(BOOL)left;	// 0x31a76e49
// converted property setter: - (void)setStyle:(id)style;	// 0x31a76e91
// converted property setter: - (void)setStyleId:(id)anId;	// 0x319f4031
// converted property getter: - (id)style;	// 0x319f5d01
// converted property getter: - (id)styleId;	// 0x31ab7ca5
@end

