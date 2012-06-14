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
@private
	NSString *name;	// 4 = 0x4
	NSString *_baseName;	// 8 = 0x8
	int width;	// 12 = 0xc
	int height;	// 16 = 0x10
	int leftMargin;	// 20 = 0x14
	int topMargin;	// 24 = 0x18
	int rightMargin;	// 28 = 0x1c
	int bottomMargin;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *baseName;	// G=0x314e35ed; @dynamic
@property(assign, nonatomic) int bottomMargin;	// G=0x314e41d5; S=0x314e41e5; @synthesize
@property(assign, nonatomic) int height;	// G=0x314e4155; S=0x314e4165; @synthesize
@property(readonly, assign, nonatomic) float imageableArea;	// G=0x314e3419; @dynamic
@property(readonly, assign, nonatomic) CGRect imageableAreaRect;	// G=0x314e32d1; 
@property(readonly, assign, nonatomic) BOOL isBorderless;	// G=0x314e34f1; 
@property(assign, nonatomic) int leftMargin;	// G=0x314e4175; S=0x314e4185; @synthesize
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x314e39f5; @dynamic
@property(retain, nonatomic) NSString *name;	// G=0x314e4115; S=0x314e4125; @synthesize
@property(readonly, assign, nonatomic) CGSize paperSize;	// G=0x314e3259; 
@property(assign, nonatomic) int rightMargin;	// G=0x314e41b5; S=0x314e41c5; @synthesize
@property(assign, nonatomic) int topMargin;	// G=0x314e4195; S=0x314e41a5; @synthesize
@property(assign, nonatomic) int width;	// G=0x314e4135; S=0x314e4145; @synthesize
+ (id)documentPapers;	// 0x314e40b5
+ (id)generic3_5x5Paper;	// 0x314e3add
+ (id)generic4x6Paper;	// 0x314e3b49
+ (id)genericA4Paper;	// 0x314e3a9d
+ (id)genericA6Paper;	// 0x314e3bb5
+ (id)genericBorderlessWithName:(id)name;	// 0x314e3d35
+ (id)genericHagakiPaper;	// 0x314e3c21
+ (id)genericLetterPaper;	// 0x314e3abd
+ (id)genericPRC32KPaper;	// 0x314e3c8d
+ (id)genericWithName:(id)name;	// 0x314e3cf9
+ (id)photoPapers;	// 0x314e3fbd
+ (BOOL)willAdjustMarginsForDuplexMode:(id)duplexMode;	// 0x314e3db5
- (id)initWithPWGSize:(pwg_size_s *)pwgsize localizedName:(id)name codeName:(id)name3;	// 0x314e3191
- (id)initWithWidth:(int)width Height:(int)height Left:(int)left Top:(int)top Right:(int)right Bottom:(int)bottom localizedName:(id)name codeName:(id)name8;	// 0x314e30b9
// declared property getter: - (id)baseName;	// 0x314e35ed
// declared property getter: - (int)bottomMargin;	// 0x314e41d5
- (void)dealloc;	// 0x314e36e9
- (unsigned)hash;	// 0x314e3f95
// declared property getter: - (int)height;	// 0x314e4155
// declared property getter: - (float)imageableArea;	// 0x314e3419
// declared property getter: - (CGRect)imageableAreaRect;	// 0x314e32d1
// declared property getter: - (BOOL)isBorderless;	// 0x314e34f1
- (BOOL)isEqual:(id)equal;	// 0x314e3f19
// declared property getter: - (int)leftMargin;	// 0x314e4175
// declared property getter: - (id)localizedName;	// 0x314e39f5
- (id)localizedNameFromDimensions;	// 0x314e3749
// declared property getter: - (id)name;	// 0x314e4115
- (id)nameWithoutSuffixes:(id)suffixes;	// 0x314e3555
// declared property getter: - (CGSize)paperSize;	// 0x314e3259
- (id)paperWithMarginsAdjustedForDuplexMode:(id)duplexMode;	// 0x314e3ddd
// declared property getter: - (int)rightMargin;	// 0x314e41b5
// declared property setter: - (void)setBottomMargin:(int)margin;	// 0x314e41e5
// declared property setter: - (void)setHeight:(int)height;	// 0x314e4165
// declared property setter: - (void)setLeftMargin:(int)margin;	// 0x314e4185
// declared property setter: - (void)setName:(id)name;	// 0x314e4125
// declared property setter: - (void)setRightMargin:(int)margin;	// 0x314e41c5
// declared property setter: - (void)setTopMargin:(int)margin;	// 0x314e41a5
// declared property setter: - (void)setWidth:(int)width;	// 0x314e4145
// declared property getter: - (int)topMargin;	// 0x314e4195
// declared property getter: - (int)width;	// 0x314e4135
@end

