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
@property(assign, getter=isBold) bool bold;	// G=0x348be64d; S=0x3489800d; converted property
@property(assign) int charSet;	// G=0x34a2a919; S=0x34897d81; converted property
@property(retain) id color;	// G=0x348be6f5; S=0x349716f1; converted property
@property(retain) id colorReference;	// G=0x349ba111; S=0x34897fb5; converted property
@property(assign) int family;	// G=0x34a2a929; S=0x34897da9; converted property
@property(assign) double height;	// G=0x348be82d; S=0x34897d09; converted property
@property(assign, getter=isItalic) bool italic;	// G=0x348be675; S=0x34898045; converted property
@property(retain) id name;	// G=0x348be419; S=0x34897cb1; converted property
@property(assign, getter=isOutline) bool outline;	// G=0x34a2a905; S=0x348980dd; converted property
@property(assign) int script;	// G=0x34a2a8e1; S=0x34898111; converted property
@property(assign, getter=isShadow) bool shadow;	// G=0x34a2a8f1; S=0x348980b5; converted property
@property(assign, getter=isStrike) bool strike;	// G=0x348be69d; S=0x3489807d; converted property
@property(assign) int underline;	// G=0x348be6c5; S=0x34898155; converted property
@property(assign) unsigned weight;	// G=0x34a2a939; S=0x34897d49; converted property
+ (id)filterFontName:(id)name;	// 0x34a2a7bd
+ (id)fontNameWithFamilyName:(id)familyName bold:(bool)bold italic:(bool)italic;	// 0x34a2a95d
+ (id)fontWithResources:(id)resources;	// 0x34a2a771
+ (id)lassoNameForFontName:(id)fontName bold:(bool)bold italic:(bool)italic;	// 0x34a2a8a5
- (id)initWithResources:(id)resources;	// 0x34897b19
// converted property getter: - (int)charSet;	// 0x34a2a919
// converted property getter: - (id)color;	// 0x348be6f5
// converted property getter: - (id)colorReference;	// 0x349ba111
- (id)copyWithZone:(NSZone *)zone;	// 0x34971675
- (void)dealloc;	// 0x348c3aad
// converted property getter: - (int)family;	// 0x34a2a929
- (id)filteredName;	// 0x34a2a815
// converted property getter: - (double)height;	// 0x348be82d
// converted property getter: - (bool)isBold;	// 0x348be64d
- (bool)isBoldOverridden;	// 0x348be639
- (BOOL)isEqual:(id)equal;	// 0x3490dfa5
- (BOOL)isEqualToFont:(id)font;	// 0x3490e001
- (bool)isHeightOverridden;	// 0x348be819
// converted property getter: - (bool)isItalic;	// 0x348be675
- (bool)isItalicOverridden;	// 0x348be661
// converted property getter: - (bool)isOutline;	// 0x34a2a905
// converted property getter: - (bool)isShadow;	// 0x34a2a8f1
// converted property getter: - (bool)isStrike;	// 0x348be69d
- (bool)isStrikeOverridden;	// 0x348be689
- (bool)isUnderlineOverridden;	// 0x348be6b1
- (bool)isWeightOverridden;	// 0x34a2a949
- (id)lassoName;	// 0x34a2a841
// converted property getter: - (id)name;	// 0x348be419
// converted property getter: - (int)script;	// 0x34a2a8e1
// converted property setter: - (void)setBold:(bool)bold;	// 0x3489800d
// converted property setter: - (void)setCharSet:(int)set;	// 0x34897d81
// converted property setter: - (void)setColor:(id)color;	// 0x349716f1
// converted property setter: - (void)setColorReference:(id)reference;	// 0x34897fb5
- (void)setDoNotModify:(bool)modify;	// 0x3489818d
// converted property setter: - (void)setFamily:(int)family;	// 0x34897da9
// converted property setter: - (void)setHeight:(double)height;	// 0x34897d09
// converted property setter: - (void)setItalic:(bool)italic;	// 0x34898045
// converted property setter: - (void)setName:(id)name;	// 0x34897cb1
// converted property setter: - (void)setOutline:(bool)outline;	// 0x348980dd
// converted property setter: - (void)setScript:(int)script;	// 0x34898111
// converted property setter: - (void)setShadow:(bool)shadow;	// 0x348980b5
// converted property setter: - (void)setStrike:(bool)strike;	// 0x3489807d
// converted property setter: - (void)setUnderline:(int)underline;	// 0x34898155
// converted property setter: - (void)setWeight:(unsigned)weight;	// 0x34897d49
// converted property getter: - (int)underline;	// 0x348be6c5
// converted property getter: - (unsigned)weight;	// 0x34a2a939
@end

