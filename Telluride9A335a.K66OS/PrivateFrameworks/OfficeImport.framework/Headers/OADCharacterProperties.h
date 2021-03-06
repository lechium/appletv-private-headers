/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"
#import "OADEffectsParent.h"

@class OADColor, NSString, OADHyperlink, OADStroke, OADFill, NSArray, OADUnderline;

__attribute__((visibility("hidden")))
@interface OADCharacterProperties : OADProperties <OADEffectsParent> {
@private
	NSString *mLatinFont;	// 12 = 0xc
	NSString *mEastAsianFont;	// 16 = 0x10
	NSString *mBidiFont;	// 20 = 0x14
	NSString *mHAnsiFont;	// 24 = 0x18
	NSString *mSymbolFont;	// 28 = 0x1c
	OADHyperlink *mClickHyperlink;	// 32 = 0x20
	OADHyperlink *mHoverHyperlink;	// 36 = 0x24
	OADStroke *mStroke;	// 40 = 0x28
	OADFill *mFill;	// 44 = 0x2c
	OADColor *mHighlight;	// 48 = 0x30
	NSArray *mEffects;	// 52 = 0x34
	OADUnderline *mUnderline;	// 56 = 0x38
	double mOpacity;	// 60 = 0x3c
	double mSize;	// 68 = 0x44
	double mSpacing;	// 76 = 0x4c
	double mBaseline;	// 84 = 0x54
	unsigned char mFormatType;	// 92 = 0x5c
	unsigned char mFormatKerningType;	// 93 = 0x5d
	unsigned char mStrikeThroughType;	// 94 = 0x5e
	unsigned char mCaps;	// 95 = 0x5f
	unsigned mHasOpacity : 1;	// 96 = 0x60
	unsigned mHasIsBold : 1;	// 96 = 0x60
	unsigned mIsBold : 1;	// 96 = 0x60
	unsigned mHasIsItalic : 1;	// 96 = 0x60
	unsigned mIsItalic : 1;	// 96 = 0x60
	unsigned mHasFormatType : 1;	// 96 = 0x60
	unsigned mHasFormatKerningType : 1;	// 96 = 0x60
	unsigned mHasStrikeThroughType : 1;	// 96 = 0x60
	unsigned mHasSize : 1;	// 97 = 0x61
	unsigned mHasSpacing : 1;	// 97 = 0x61
	unsigned mHasKerning : 1;	// 97 = 0x61
	unsigned mHasIsVerticalText : 1;	// 97 = 0x61
	unsigned mIsVerticalText : 1;	// 97 = 0x61
	unsigned mHasBaseline : 1;	// 97 = 0x61
	unsigned mHasIsHorizontalNormalized : 1;	// 97 = 0x61
	unsigned mIsHorizontalNormalized : 1;	// 97 = 0x61
	unsigned mHasCaps : 1;	// 98 = 0x62
	unsigned mHasIsShadowed : 1;	// 98 = 0x62
	unsigned mIsShadowed : 1;	// 98 = 0x62
}
@property(assign) double baseline;	// G=0x3512c55d; S=0x351a7585; converted property
@property(retain) id bidiFont;	// G=0x353c540d; S=0x351d183d; converted property
@property(assign) int caps;	// G=0x3512dac5; S=0x351d17d5; converted property
@property(retain) id clickHyperlink;	// G=0x351ad435; S=0x352dd12d; converted property
@property(retain) id eastAsianFont;	// G=0x351e6fb9; S=0x351d17fd; converted property
@property(retain) id effects;	// G=0x351ad205; S=0x351a751d; converted property
@property(retain) id fill;	// G=0x3512c5a5; S=0x351a7759; converted property
@property(assign) int formatKerningType;	// G=0x353c54c9; S=0x351d1721; converted property
@property(assign) int formatType;	// G=0x351ad271; S=0x351a7561; converted property
@property(retain) id highlight;	// G=0x353c54f9; S=0x351d16e1; converted property
@property(retain) id hoverHyperlink;	// G=0x351ad445; S=0x35326881; converted property
@property(assign) BOOL isBold;	// G=0x3512d87d; S=0x351a73d1; converted property
@property(assign) BOOL isHorizontalNormalized;	// G=0x353c5459; S=0x351d17a5; converted property
@property(assign) BOOL isItalic;	// G=0x3512d8b9; S=0x351a7405; converted property
@property(assign) BOOL isShadowed;	// G=0x3512d931; S=0x351a74c5; converted property
@property(assign) BOOL isVerticalText;	// G=0x353c548d; S=0x351d1771; converted property
@property(retain) id latinFont;	// G=0x3512b635; S=0x351a7681; converted property
@property(assign) double opacity;	// G=0x353c5529; S=0x351d1625; converted property
@property(assign) double size;	// G=0x3512b089; S=0x351a75b1; converted property
@property(assign) double spacing;	// G=0x3512db31; S=0x351d1745; converted property
@property(assign) int strikeThroughType;	// G=0x3512da59; S=0x351a74f9; converted property
@property(retain) id stroke;	// G=0x352e5161; S=0x352a5c71; converted property
@property(retain) id symbolFont;	// G=0x351e7005; S=0x351d18bd; converted property
@property(retain) id underline;	// G=0x3512d9a9; S=0x351a7485; converted property
+ (void)initialize;	// 0x351d0d81
- (id)initWithDefaults;	// 0x351d1179
// converted property getter: - (double)baseline;	// 0x3512c55d
// converted property getter: - (id)bidiFont;	// 0x353c540d
// converted property getter: - (int)caps;	// 0x3512dac5
// converted property getter: - (id)clickHyperlink;	// 0x351ad435
- (void)dealloc;	// 0x351b2555
// converted property getter: - (id)eastAsianFont;	// 0x351e6fb9
// converted property getter: - (id)effects;	// 0x351ad205
// converted property getter: - (id)fill;	// 0x3512c5a5
// converted property getter: - (int)formatKerningType;	// 0x353c54c9
// converted property getter: - (int)formatType;	// 0x351ad271
- (id)hansiFont;	// 0x351f53b5
- (BOOL)hasBaseline;	// 0x3512c521
- (BOOL)hasBidiFont;	// 0x351ad38d
- (BOOL)hasCaps;	// 0x3512da89
- (BOOL)hasEastAsianFont;	// 0x351ad355
- (BOOL)hasEffects;	// 0x351ad1cd
- (BOOL)hasFill;	// 0x3512c5d5
- (BOOL)hasFormatKerningType;	// 0x351ad2a1
- (BOOL)hasFormatType;	// 0x351ad235
- (BOOL)hasHAnsiFont;	// 0x351ad3c5
- (BOOL)hasHighlight;	// 0x351ad195
- (BOOL)hasIsBold;	// 0x3512d841
- (BOOL)hasIsHorizontalNormalized;	// 0x351ad319
- (BOOL)hasIsItalic;	// 0x3512d8f5
- (BOOL)hasIsShadowed;	// 0x3512d96d
- (BOOL)hasIsVerticalText;	// 0x351ad2dd
- (BOOL)hasLatinFont;	// 0x3512b5fd
- (BOOL)hasOpacity;	// 0x351acff5
- (BOOL)hasSize;	// 0x3512b0c1
- (BOOL)hasSpacing;	// 0x3512daf5
- (BOOL)hasStrikeThroughType;	// 0x3512da21
- (BOOL)hasStroke;	// 0x351ac8c1
- (BOOL)hasSymbolFont;	// 0x351ad3fd
- (BOOL)hasUnderline;	// 0x3512d9d9
- (unsigned)hash;	// 0x353c5121
// converted property getter: - (id)highlight;	// 0x353c54f9
// converted property getter: - (id)hoverHyperlink;	// 0x351ad445
// converted property getter: - (BOOL)isBold;	// 0x3512d87d
- (BOOL)isEqual:(id)equal;	// 0x353c44d1
// converted property getter: - (BOOL)isHorizontalNormalized;	// 0x353c5459
// converted property getter: - (BOOL)isItalic;	// 0x3512d8b9
// converted property getter: - (BOOL)isShadowed;	// 0x3512d931
// converted property getter: - (BOOL)isVerticalText;	// 0x353c548d
// converted property getter: - (id)latinFont;	// 0x3512b635
// converted property getter: - (double)opacity;	// 0x353c5529
- (void)overrideWithProperties:(id)properties;	// 0x351e6749
- (void)removeUnnecessaryOverrides;	// 0x351abd25
// converted property setter: - (void)setBaseline:(double)baseline;	// 0x351a7585
// converted property setter: - (void)setBidiFont:(id)font;	// 0x351d183d
// converted property setter: - (void)setCaps:(int)caps;	// 0x351d17d5
// converted property setter: - (void)setClickHyperlink:(id)hyperlink;	// 0x352dd12d
// converted property setter: - (void)setEastAsianFont:(id)font;	// 0x351d17fd
// converted property setter: - (void)setEffects:(id)effects;	// 0x351a751d
// converted property setter: - (void)setFill:(id)fill;	// 0x351a7759
// converted property setter: - (void)setFormatKerningType:(int)type;	// 0x351d1721
// converted property setter: - (void)setFormatType:(int)type;	// 0x351a7561
- (void)setHAnsiFont:(id)font;	// 0x351d187d
// converted property setter: - (void)setHighlight:(id)highlight;	// 0x351d16e1
// converted property setter: - (void)setHoverHyperlink:(id)hyperlink;	// 0x35326881
// converted property setter: - (void)setIsBold:(BOOL)bold;	// 0x351a73d1
// converted property setter: - (void)setIsHorizontalNormalized:(BOOL)normalized;	// 0x351d17a5
// converted property setter: - (void)setIsItalic:(BOOL)italic;	// 0x351a7405
// converted property setter: - (void)setIsShadowed:(BOOL)shadowed;	// 0x351a74c5
// converted property setter: - (void)setIsVerticalText:(BOOL)text;	// 0x351d1771
// converted property setter: - (void)setLatinFont:(id)font;	// 0x351a7681
// converted property setter: - (void)setOpacity:(double)opacity;	// 0x351d1625
// converted property setter: - (void)setSize:(double)size;	// 0x351a75b1
// converted property setter: - (void)setSpacing:(double)spacing;	// 0x351d1745
// converted property setter: - (void)setStrikeThroughType:(int)type;	// 0x351a74f9
// converted property setter: - (void)setStroke:(id)stroke;	// 0x352a5c71
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x351d18bd
// converted property setter: - (void)setUnderline:(id)underline;	// 0x351a7485
// converted property getter: - (double)size;	// 0x3512b089
// converted property getter: - (double)spacing;	// 0x3512db31
// converted property getter: - (int)strikeThroughType;	// 0x3512da59
// converted property getter: - (id)stroke;	// 0x352e5161
// converted property getter: - (id)symbolFont;	// 0x351e7005
// converted property getter: - (id)underline;	// 0x3512d9a9
@end

