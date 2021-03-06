/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDResources, EDColorReference, NSString;

@interface EDFont : NSObject <NSCopying, EDImmutableObject> {
	EDResources *mResources;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mUnderline;	// 16 = 0x10
	int mScript;	// 20 = 0x14
	double mHeightInTwips;	// 24 = 0x18
	int mCharSet;	// 32 = 0x20
	int mFamily;	// 36 = 0x24
	unsigned mWeight;	// 40 = 0x28
	bool mBold;	// 44 = 0x2c
	bool mItalic;	// 45 = 0x2d
	bool mShadow;	// 46 = 0x2e
	bool mStrike;	// 47 = 0x2f
	bool mOutline;	// 48 = 0x30
	bool mUnderlineOverridden;	// 49 = 0x31
	bool mStrikeOverridden;	// 50 = 0x32
	bool mBoldOverridden;	// 51 = 0x33
	bool mWeightOverridden;	// 52 = 0x34
	bool mItalicOverridden;	// 53 = 0x35
	bool mHeightOverridden;	// 54 = 0x36
	bool mDoNotModify;	// 55 = 0x37
}
@property(assign, getter=isBold) bool bold;	// G=0x34a9864d; S=0x34a7200d; converted property
@property(assign) int charSet;	// G=0x34c04919; S=0x34a71d81; converted property
@property(retain) id color;	// G=0x34a986f5; S=0x34b4b6f1; converted property
@property(retain) id colorReference;	// G=0x34b94111; S=0x34a71fb5; converted property
@property(assign) int family;	// G=0x34c04929; S=0x34a71da9; converted property
@property(assign) double height;	// G=0x34a9882d; S=0x34a71d09; converted property
@property(assign, getter=isItalic) bool italic;	// G=0x34a98675; S=0x34a72045; converted property
@property(retain) id name;	// G=0x34a98419; S=0x34a71cb1; converted property
@property(assign, getter=isOutline) bool outline;	// G=0x34c04905; S=0x34a720dd; converted property
@property(assign) int script;	// G=0x34c048e1; S=0x34a72111; converted property
@property(assign, getter=isShadow) bool shadow;	// G=0x34c048f1; S=0x34a720b5; converted property
@property(assign, getter=isStrike) bool strike;	// G=0x34a9869d; S=0x34a7207d; converted property
@property(assign) int underline;	// G=0x34a986c5; S=0x34a72155; converted property
@property(assign) unsigned weight;	// G=0x34c04939; S=0x34a71d49; converted property
+ (id)filterFontName:(id)name;	// 0x34c047bd
+ (id)fontNameWithFamilyName:(id)familyName bold:(bool)bold italic:(bool)italic;	// 0x34c0495d
+ (id)fontWithResources:(id)resources;	// 0x34c04771
+ (id)lassoNameForFontName:(id)fontName bold:(bool)bold italic:(bool)italic;	// 0x34c048a5
- (id)initWithResources:(id)resources;	// 0x34a71b19
// converted property getter: - (int)charSet;	// 0x34c04919
// converted property getter: - (id)color;	// 0x34a986f5
// converted property getter: - (id)colorReference;	// 0x34b94111
- (id)copyWithZone:(NSZone *)zone;	// 0x34b4b675
- (void)dealloc;	// 0x34a9daad
// converted property getter: - (int)family;	// 0x34c04929
- (id)filteredName;	// 0x34c04815
// converted property getter: - (double)height;	// 0x34a9882d
// converted property getter: - (bool)isBold;	// 0x34a9864d
- (bool)isBoldOverridden;	// 0x34a98639
- (BOOL)isEqual:(id)equal;	// 0x34ae7fa5
- (BOOL)isEqualToFont:(id)font;	// 0x34ae8001
- (bool)isHeightOverridden;	// 0x34a98819
// converted property getter: - (bool)isItalic;	// 0x34a98675
- (bool)isItalicOverridden;	// 0x34a98661
// converted property getter: - (bool)isOutline;	// 0x34c04905
// converted property getter: - (bool)isShadow;	// 0x34c048f1
// converted property getter: - (bool)isStrike;	// 0x34a9869d
- (bool)isStrikeOverridden;	// 0x34a98689
- (bool)isUnderlineOverridden;	// 0x34a986b1
- (bool)isWeightOverridden;	// 0x34c04949
- (id)lassoName;	// 0x34c04841
// converted property getter: - (id)name;	// 0x34a98419
// converted property getter: - (int)script;	// 0x34c048e1
// converted property setter: - (void)setBold:(bool)bold;	// 0x34a7200d
// converted property setter: - (void)setCharSet:(int)set;	// 0x34a71d81
// converted property setter: - (void)setColor:(id)color;	// 0x34b4b6f1
// converted property setter: - (void)setColorReference:(id)reference;	// 0x34a71fb5
- (void)setDoNotModify:(bool)modify;	// 0x34a7218d
// converted property setter: - (void)setFamily:(int)family;	// 0x34a71da9
// converted property setter: - (void)setHeight:(double)height;	// 0x34a71d09
// converted property setter: - (void)setItalic:(bool)italic;	// 0x34a72045
// converted property setter: - (void)setName:(id)name;	// 0x34a71cb1
// converted property setter: - (void)setOutline:(bool)outline;	// 0x34a720dd
// converted property setter: - (void)setScript:(int)script;	// 0x34a72111
// converted property setter: - (void)setShadow:(bool)shadow;	// 0x34a720b5
// converted property setter: - (void)setStrike:(bool)strike;	// 0x34a7207d
// converted property setter: - (void)setUnderline:(int)underline;	// 0x34a72155
// converted property setter: - (void)setWeight:(unsigned)weight;	// 0x34a71d49
// converted property getter: - (int)underline;	// 0x34a986c5
// converted property getter: - (unsigned)weight;	// 0x34c04939
@end

