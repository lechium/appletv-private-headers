/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, EDColorReference;

@interface EDBorder : NSObject {
	EDResources *mResources;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mDiagonalType;	// 16 = 0x10
}
@property(assign) int diagonalType;	// G=0x35010c6d; S=0x3507f041; converted property
@property(assign) int type;	// G=0x34f1ee9d; S=0x3507f031; converted property
+ (id)borderWithType:(int)type color:(id)color diagonalType:(int)type3 resources:(id)resources;	// 0x3507efd1
+ (id)borderWithType:(int)type color:(id)color resources:(id)resources;	// 0x3507ef71
+ (id)borderWithType:(int)type colorReference:(id)reference diagonalType:(int)type3 resources:(id)resources;	// 0x34ef24ed
+ (id)borderWithType:(int)type colorReference:(id)reference resources:(id)resources;	// 0x34ef23e9
+ (id)borderWithType:(int)type resources:(id)resources;	// 0x34ef2429
- (id)initWithResources:(id)resources;	// 0x34ef2485
- (id)color;	// 0x34f1efbd
- (id)colorReference;	// 0x35010c5d
- (void)dealloc;	// 0x34efca2d
// converted property getter: - (int)diagonalType;	// 0x35010c6d
- (unsigned)hash;	// 0x3507f005
- (BOOL)isEqual:(id)equal;	// 0x34ef273d
- (BOOL)isEqualToBorder:(id)border;	// 0x34ef2799
// converted property setter: - (void)setDiagonalType:(int)type;	// 0x3507f041
// converted property setter: - (void)setType:(int)type;	// 0x3507f031
// converted property getter: - (int)type;	// 0x34f1ee9d
@end

