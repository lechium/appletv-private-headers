/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class EDResources;

@interface EDBorders : NSObject <NSCopying> {
	EDResources *mResources;	// 4 = 0x4
	unsigned mLeftBorderIndex;	// 8 = 0x8
	unsigned mRightBorderIndex;	// 12 = 0xc
	unsigned mTopBorderIndex;	// 16 = 0x10
	unsigned mBottomBorderIndex;	// 20 = 0x14
	unsigned mDiagonalBorderIndex;	// 24 = 0x18
	unsigned mVerticalBorderIndex;	// 28 = 0x1c
	unsigned mHorizontalBorderIndex;	// 32 = 0x20
}
@property(retain) id bottomBorder;	// G=0x317ab8d5; S=0x317916bd; converted property
@property(retain) id diagonalBorder;	// G=0x3188cad9; S=0x31791709; converted property
@property(retain) id horizontalBorder;	// G=0x3188d221; S=0x3182ab5d; converted property
@property(retain) id leftBorder;	// G=0x317ab63d; S=0x3179145d; converted property
@property(retain) id rightBorder;	// G=0x317ab91d; S=0x317914b9; converted property
@property(retain) id topBorder;	// G=0x317ab49d; S=0x31791671; converted property
@property(retain) id verticalBorder;	// G=0x3188c9b1; S=0x3182ab11; converted property
+ (id)bordersWithLeft:(id)left right:(id)right top:(id)top bottom:(id)bottom diagonal:(id)diagonal resources:(id)resources;	// 0x317912e9
+ (id)bordersWithLeft:(id)left right:(id)right top:(id)top bottom:(id)bottom diagonal:(id)diagonal vertical:(id)vertical horizontal:(id)horizontal resources:(id)resources;	// 0x3182aab1
+ (id)bordersWithResources:(id)resources;	// 0x3179136d
- (id)initWithResources:(id)resources;	// 0x317913b9
// converted property getter: - (id)bottomBorder;	// 0x317ab8d5
- (id)copyWithZone:(NSZone *)zone;	// 0x318cfb25
// converted property getter: - (id)diagonalBorder;	// 0x3188cad9
- (unsigned)hash;	// 0x318cfb2d
// converted property getter: - (id)horizontalBorder;	// 0x3188d221
- (BOOL)isEqual:(id)equal;	// 0x31791ec5
- (BOOL)isEqualToBorders:(id)borders;	// 0x31791f21
// converted property getter: - (id)leftBorder;	// 0x317ab63d
// converted property getter: - (id)rightBorder;	// 0x317ab91d
// converted property setter: - (void)setBottomBorder:(id)border;	// 0x317916bd
// converted property setter: - (void)setDiagonalBorder:(id)border;	// 0x31791709
// converted property setter: - (void)setHorizontalBorder:(id)border;	// 0x3182ab5d
// converted property setter: - (void)setLeftBorder:(id)border;	// 0x3179145d
// converted property setter: - (void)setRightBorder:(id)border;	// 0x317914b9
// converted property setter: - (void)setTopBorder:(id)border;	// 0x31791671
// converted property setter: - (void)setVerticalBorder:(id)border;	// 0x3182ab11
// converted property getter: - (id)topBorder;	// 0x317ab49d
// converted property getter: - (id)verticalBorder;	// 0x3188c9b1
@end

