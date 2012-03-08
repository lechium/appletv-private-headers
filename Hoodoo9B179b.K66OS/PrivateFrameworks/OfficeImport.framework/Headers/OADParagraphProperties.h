/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADCharacterProperties.h"

@class OADBulletColor, NSMutableArray, OADBulletSize, OADBulletFont, OADBulletProperties, OADTextSpacing;

__attribute__((visibility("hidden")))
@interface OADParagraphProperties : OADCharacterProperties {
@private
	OADBulletSize *mBulletSize;	// 100 = 0x64
	OADBulletColor *mBulletColor;	// 104 = 0x68
	OADBulletFont *mBulletFont;	// 108 = 0x6c
	OADBulletProperties *mBulletProperties;	// 112 = 0x70
	OADTextSpacing *mLineSpacing;	// 116 = 0x74
	OADTextSpacing *mBeforeSpacing;	// 120 = 0x78
	OADTextSpacing *mAfterSpacing;	// 124 = 0x7c
	NSMutableArray *mTabStops;	// 128 = 0x80
	double mLeftMargin;	// 132 = 0x84
	double mRightMargin;	// 140 = 0x8c
	double mIndent;	// 148 = 0x94
	double mDefaultTab;	// 156 = 0x9c
	int mLevel;	// 164 = 0xa4
	int mBulletCharSet;	// 168 = 0xa8
	unsigned char mAlign;	// 172 = 0xac
	unsigned char mWrap;	// 173 = 0xad
	unsigned char mFontAlign;	// 174 = 0xae
	unsigned mIsRightToLeft : 1;	// 175 = 0xaf
	unsigned mIsLatinLineBreak : 1;	// 175 = 0xaf
	unsigned mIsHangingPunctuation : 1;	// 175 = 0xaf
	unsigned mHasTabStops : 1;	// 175 = 0xaf
	unsigned mHasLeftMargin : 1;	// 175 = 0xaf
	unsigned mHasRightMargin : 1;	// 175 = 0xaf
	unsigned mHasLevel : 1;	// 175 = 0xaf
	unsigned mHasIndent : 1;	// 175 = 0xaf
	unsigned mHasAlign : 1;	// 176 = 0xb0
	unsigned mHasDefaultTab : 1;	// 176 = 0xb0
	unsigned mHasIsRightToLeft : 1;	// 176 = 0xb0
	unsigned mHasWrap : 1;	// 176 = 0xb0
	unsigned mHasFontAlign : 1;	// 176 = 0xb0
	unsigned mHasIsLatinLineBreak : 1;	// 176 = 0xb0
	unsigned mHasIsHangingPunctuation : 1;	// 176 = 0xb0
	unsigned mHasBulletCharSet : 1;	// 176 = 0xb0
}
@property(retain) id afterSpacing;	// G=0x3273929d; S=0x327b4c35; converted property
@property(assign) int align;	// G=0x32738d81; S=0x327b4ca5; converted property
@property(retain) id beforeSpacing;	// G=0x327390fd; S=0x327b4bf5; converted property
@property(assign, nonatomic) int bulletCharSet;	// G=0x32881e3d; S=0x32881975; 
@property(retain) id bulletColor;	// G=0x327bc229; S=0x327b4aa9; converted property
@property(retain) id bulletFont;	// G=0x327bc2d9; S=0x327b4ae9; converted property
@property(retain) id bulletProperties;	// G=0x327bc351; S=0x327b4b29; converted property
@property(retain) id bulletSize;	// G=0x327bc179; S=0x327b4a69; converted property
@property(assign) double defaultTab;	// G=0x327bbfa5; S=0x327b4d21; converted property
@property(assign) int fontAlign;	// G=0x329d8ded; S=0x327df9c1; converted property
@property(assign, nonatomic) BOOL hasBulletCharSet;	// G=0x327bc109; S=0x32881985; 
@property(assign) double indent;	// G=0x32738e5d; S=0x327b4cf5; converted property
@property(assign) BOOL isHangingPunctuation;	// G=0x329d8d75; S=0x327dfa19; converted property
@property(assign) BOOL isLatinLineBreak;	// G=0x329d8db1; S=0x327df9e5; converted property
@property(assign) BOOL isRightToLeft;	// G=0x329d8e4d; S=0x327df969; converted property
@property(assign) double leftMargin;	// G=0x32738ded; S=0x327b4cc9; converted property
@property(assign) int level;	// G=0x327b89c9; S=0x327b4155; converted property
@property(retain) id lineSpacing;	// G=0x32738ecd; S=0x327b4bb5; converted property
@property(assign) double rightMargin;	// G=0x329d8e89; S=0x327df93d; converted property
@property(assign) int wrap;	// G=0x329d8e1d; S=0x327df99d; converted property
+ (id)defaultProperties;	// 0x327b3b11
- (id)init;	// 0x327b3ae5
- (id)initWithDefaults;	// 0x327dee25
- (id)addTabStop;	// 0x3288fbdd
// converted property getter: - (id)afterSpacing;	// 0x3273929d
// converted property getter: - (int)align;	// 0x32738d81
// converted property getter: - (id)beforeSpacing;	// 0x327390fd
// declared property getter: - (int)bulletCharSet;	// 0x32881e3d
// converted property getter: - (id)bulletColor;	// 0x327bc229
// converted property getter: - (id)bulletFont;	// 0x327bc2d9
// converted property getter: - (id)bulletProperties;	// 0x327bc351
// converted property getter: - (id)bulletSize;	// 0x327bc179
- (void)clearTabStops;	// 0x3292a99d
- (void)dealloc;	// 0x327c047d
// converted property getter: - (double)defaultTab;	// 0x327bbfa5
// converted property getter: - (int)fontAlign;	// 0x329d8ded
- (BOOL)hasAfterSpacing;	// 0x32739265
- (BOOL)hasAlign;	// 0x32738d45
- (BOOL)hasBeforeSpacing;	// 0x32739051
// declared property getter: - (BOOL)hasBulletCharSet;	// 0x327bc109
- (BOOL)hasBulletColor;	// 0x327bc1f1
- (BOOL)hasBulletFont;	// 0x327bc2a1
- (BOOL)hasBulletProperties;	// 0x32739a15
- (BOOL)hasBulletSize;	// 0x327bc141
- (BOOL)hasDefaultTab;	// 0x327bbf69
- (BOOL)hasFontAlign;	// 0x327bc055
- (BOOL)hasIndent;	// 0x32738e25
- (BOOL)hasIsHangingPunctuation;	// 0x327bc0cd
- (BOOL)hasIsLatinLineBreak;	// 0x327bc091
- (BOOL)hasIsRightToLeft;	// 0x327bbfdd
- (BOOL)hasLeftMargin;	// 0x32738db1
- (BOOL)hasLevel;	// 0x327b89f9
- (BOOL)hasLineSpacing;	// 0x32738e95
- (BOOL)hasRightMargin;	// 0x327bbf2d
- (BOOL)hasTabStops;	// 0x327bbf11
- (BOOL)hasWrap;	// 0x327bc019
- (unsigned)hash;	// 0x329d8afd
// converted property getter: - (double)indent;	// 0x32738e5d
- (BOOL)isEqual:(id)equal;	// 0x329d80b1
// converted property getter: - (BOOL)isHangingPunctuation;	// 0x329d8d75
// converted property getter: - (BOOL)isLatinLineBreak;	// 0x329d8db1
// converted property getter: - (BOOL)isRightToLeft;	// 0x329d8e4d
// converted property getter: - (double)leftMargin;	// 0x32738ded
// converted property getter: - (int)level;	// 0x327b89c9
// converted property getter: - (id)lineSpacing;	// 0x32738ecd
- (double)nonOveridenLeftMargin;	// 0x327bfa61
- (void)overrideWithProperties:(id)properties;	// 0x327f40f1
- (void)removeUnnecessaryOverrides;	// 0x327bb455
// converted property getter: - (double)rightMargin;	// 0x329d8e89
// converted property setter: - (void)setAfterSpacing:(id)spacing;	// 0x327b4c35
// converted property setter: - (void)setAlign:(int)align;	// 0x327b4ca5
// converted property setter: - (void)setBeforeSpacing:(id)spacing;	// 0x327b4bf5
// declared property setter: - (void)setBulletCharSet:(int)set;	// 0x32881975
// converted property setter: - (void)setBulletColor:(id)color;	// 0x327b4aa9
// converted property setter: - (void)setBulletFont:(id)font;	// 0x327b4ae9
// converted property setter: - (void)setBulletProperties:(id)properties;	// 0x327b4b29
// converted property setter: - (void)setBulletSize:(id)size;	// 0x327b4a69
// converted property setter: - (void)setDefaultTab:(double)tab;	// 0x327b4d21
// converted property setter: - (void)setFontAlign:(int)align;	// 0x327df9c1
// declared property setter: - (void)setHasBulletCharSet:(BOOL)set;	// 0x32881985
// converted property setter: - (void)setIndent:(double)indent;	// 0x327b4cf5
// converted property setter: - (void)setIsHangingPunctuation:(BOOL)punctuation;	// 0x327dfa19
// converted property setter: - (void)setIsLatinLineBreak:(BOOL)aBreak;	// 0x327df9e5
// converted property setter: - (void)setIsRightToLeft:(BOOL)left;	// 0x327df969
// converted property setter: - (void)setLeftMargin:(double)margin;	// 0x327b4cc9
// converted property setter: - (void)setLevel:(int)level;	// 0x327b4155
// converted property setter: - (void)setLineSpacing:(id)spacing;	// 0x327b4bb5
// converted property setter: - (void)setRightMargin:(double)margin;	// 0x327df93d
// converted property setter: - (void)setWrap:(int)wrap;	// 0x327df99d
- (id)tabStopAtIndex:(unsigned)index;	// 0x3292aa29
- (unsigned)tabStopCount;	// 0x3292aa09
- (id)tabStops;	// 0x3288fcb9
// converted property getter: - (int)wrap;	// 0x329d8e1d
@end

