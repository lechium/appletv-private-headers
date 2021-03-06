/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface PKPaper : NSObject {
	NSString *name;	// 4 = 0x4
	NSString *_baseName;	// 8 = 0x8
	int width;	// 12 = 0xc
	int height;	// 16 = 0x10
	int leftMargin;	// 20 = 0x14
	int topMargin;	// 24 = 0x18
	int rightMargin;	// 28 = 0x1c
	int bottomMargin;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *baseName;	// G=0x354effbd; @dynamic
@property(assign, nonatomic) int bottomMargin;	// G=0x354f0bf5; S=0x354f0c05; @synthesize
@property(assign, nonatomic) int height;	// G=0x354f0b75; S=0x354f0b85; @synthesize
@property(readonly, assign, nonatomic) float imageableArea;	// G=0x354efde9; @dynamic
@property(readonly, assign, nonatomic) CGRect imageableAreaRect;	// G=0x354efca1; 
@property(readonly, assign, nonatomic) BOOL isBorderless;	// G=0x354efec1; 
@property(assign, nonatomic) int leftMargin;	// G=0x354f0b95; S=0x354f0ba5; @synthesize
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x354f03c5; @dynamic
@property(retain, nonatomic) NSString *name;	// G=0x354f0b35; S=0x354f0b45; @synthesize
@property(readonly, assign, nonatomic) CGSize paperSize;	// G=0x354efc29; 
@property(assign, nonatomic) int rightMargin;	// G=0x354f0bd5; S=0x354f0be5; @synthesize
@property(assign, nonatomic) int topMargin;	// G=0x354f0bb5; S=0x354f0bc5; @synthesize
@property(assign, nonatomic) int width;	// G=0x354f0b55; S=0x354f0b65; @synthesize
+ (id)documentPapers;	// 0x354f0ad5
+ (id)generic3_5x5Paper;	// 0x354f04ad
+ (id)generic4x6Paper;	// 0x354f0519
+ (id)genericA4Paper;	// 0x354f046d
+ (id)genericA6Paper;	// 0x354f0585
+ (id)genericBorderlessWithName:(id)name;	// 0x354f0705
+ (id)genericHagakiPaper;	// 0x354f05f1
+ (id)genericLetterPaper;	// 0x354f048d
+ (id)genericPRC32KPaper;	// 0x354f065d
+ (id)genericWithName:(id)name;	// 0x354f06c9
+ (id)photoPapers;	// 0x354f09dd
+ (BOOL)willAdjustMarginsForDuplexMode:(id)duplexMode;	// 0x354f0785
- (id)initWithPWGSize:(pwg_size_s *)pwgsize localizedName:(id)name codeName:(id)name3;	// 0x354efb61
- (id)initWithWidth:(int)width Height:(int)height Left:(int)left Top:(int)top Right:(int)right Bottom:(int)bottom localizedName:(id)name codeName:(id)name8;	// 0x354efa89
// declared property getter: - (id)baseName;	// 0x354effbd
// declared property getter: - (int)bottomMargin;	// 0x354f0bf5
- (void)dealloc;	// 0x354f00b9
- (unsigned)hash;	// 0x354f09b5
// declared property getter: - (int)height;	// 0x354f0b75
// declared property getter: - (float)imageableArea;	// 0x354efde9
// declared property getter: - (CGRect)imageableAreaRect;	// 0x354efca1
// declared property getter: - (BOOL)isBorderless;	// 0x354efec1
- (BOOL)isEqual:(id)equal;	// 0x354f0939
// declared property getter: - (int)leftMargin;	// 0x354f0b95
// declared property getter: - (id)localizedName;	// 0x354f03c5
- (id)localizedNameFromDimensions;	// 0x354f0119
// declared property getter: - (id)name;	// 0x354f0b35
- (id)nameWithoutSuffixes:(id)suffixes;	// 0x354eff25
// declared property getter: - (CGSize)paperSize;	// 0x354efc29
- (id)paperWithMarginsAdjustedForDuplexMode:(id)duplexMode;	// 0x354f07b9
// declared property getter: - (int)rightMargin;	// 0x354f0bd5
// declared property setter: - (void)setBottomMargin:(int)margin;	// 0x354f0c05
// declared property setter: - (void)setHeight:(int)height;	// 0x354f0b85
// declared property setter: - (void)setLeftMargin:(int)margin;	// 0x354f0ba5
// declared property setter: - (void)setName:(id)name;	// 0x354f0b45
// declared property setter: - (void)setRightMargin:(int)margin;	// 0x354f0be5
// declared property setter: - (void)setTopMargin:(int)margin;	// 0x354f0bc5
// declared property setter: - (void)setWidth:(int)width;	// 0x354f0b65
// declared property getter: - (int)topMargin;	// 0x354f0bb5
// declared property getter: - (int)width;	// 0x354f0b55
@end

