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
@property(readonly, assign, nonatomic) NSString *baseName;	// G=0x34d5d4b1; @dynamic
@property(assign, nonatomic) int bottomMargin;	// G=0x34d5cb35; S=0x34d5cb45; @synthesize
@property(assign, nonatomic) int height;	// G=0x34d5cbb5; S=0x34d5cbc5; @synthesize
@property(readonly, assign, nonatomic) float imageableArea;	// G=0x34d5d6b9; @dynamic
@property(readonly, assign, nonatomic) CGRect imageableAreaRect;	// G=0x34d5d795; 
@property(readonly, assign, nonatomic) BOOL isBorderless;	// G=0x34d5d655; 
@property(assign, nonatomic) int leftMargin;	// G=0x34d5cb95; S=0x34d5cba5; @synthesize
@property(readonly, retain, nonatomic) NSString *localizedName;	// G=0x34d5d3c9; @dynamic
@property(retain, nonatomic) NSString *name;	// G=0x34d5cbf5; S=0x34d5d1b5; @synthesize
@property(readonly, assign, nonatomic) CGSize paperSize;	// G=0x34d5d8c5; 
@property(assign, nonatomic) int rightMargin;	// G=0x34d5cb55; S=0x34d5cb65; @synthesize
@property(assign, nonatomic) int topMargin;	// G=0x34d5cb75; S=0x34d5cb85; @synthesize
@property(assign, nonatomic) int width;	// G=0x34d5cbd5; S=0x34d5cbe5; @synthesize
+ (id)documentPapers;	// 0x34d5ccdd
+ (id)generic3_5x5Paper;	// 0x34d5d0fd
+ (id)generic4x6Paper;	// 0x34d5d085
+ (id)genericA4Paper;	// 0x34d5d195
+ (id)genericA6Paper;	// 0x34d5d00d
+ (id)genericBorderlessWithName:(id)name;	// 0x34d5ce69
+ (id)genericHagakiPaper;	// 0x34d5cf95
+ (id)genericLetterPaper;	// 0x34d5d175
+ (id)genericPRC32KPaper;	// 0x34d5cf1d
+ (id)genericWithName:(id)name;	// 0x34d5cee5
+ (id)photoPapers;	// 0x34d5cd49
+ (BOOL)willAdjustMarginsForDuplexMode:(id)duplexMode;	// 0x34d5ce41
- (id)initWithPWGSize:(pwg_size_s *)pwgsize localizedName:(id)name codeName:(id)name3;	// 0x34d5d939
- (id)initWithWidth:(int)width Height:(int)height Left:(int)left Top:(int)top Right:(int)right Bottom:(int)bottom localizedName:(id)name codeName:(id)name8;	// 0x34d5cc05
// declared property getter: - (id)baseName;	// 0x34d5d4b1
// declared property getter: - (int)bottomMargin;	// 0x34d5cb35
- (void)dealloc;	// 0x34d5d451
- (unsigned)hash;	// 0x34d5d1dd
// declared property getter: - (int)height;	// 0x34d5cbb5
// declared property getter: - (float)imageableArea;	// 0x34d5d6b9
// declared property getter: - (CGRect)imageableAreaRect;	// 0x34d5d795
// declared property getter: - (BOOL)isBorderless;	// 0x34d5d655
- (BOOL)isEqual:(id)equal;	// 0x34d5d205
// declared property getter: - (int)leftMargin;	// 0x34d5cb95
// declared property getter: - (id)localizedName;	// 0x34d5d3c9
// declared property getter: - (id)name;	// 0x34d5cbf5
- (id)nameWithoutSuffixes:(id)suffixes;	// 0x34d5d5b9
// declared property getter: - (CGSize)paperSize;	// 0x34d5d8c5
- (id)paperWithMarginsAdjustedForDuplexMode:(id)duplexMode;	// 0x34d5d289
// declared property getter: - (int)rightMargin;	// 0x34d5cb55
// declared property setter: - (void)setBottomMargin:(int)margin;	// 0x34d5cb45
// declared property setter: - (void)setHeight:(int)height;	// 0x34d5cbc5
// declared property setter: - (void)setLeftMargin:(int)margin;	// 0x34d5cba5
// declared property setter: - (void)setName:(id)name;	// 0x34d5d1b5
// declared property setter: - (void)setRightMargin:(int)margin;	// 0x34d5cb65
// declared property setter: - (void)setTopMargin:(int)margin;	// 0x34d5cb85
// declared property setter: - (void)setWidth:(int)width;	// 0x34d5cbe5
// declared property getter: - (int)topMargin;	// 0x34d5cb75
// declared property getter: - (int)width;	// 0x34d5cbd5
@end
