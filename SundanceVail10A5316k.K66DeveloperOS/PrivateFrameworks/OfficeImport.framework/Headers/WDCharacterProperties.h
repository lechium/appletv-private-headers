/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDCharacterProperties : NSObject {
@private
	WDDocument *mDocument;	// 4 = 0x4
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_F4yHWB *mOriginalProperties;	// 12 = 0xc
	XXStruct_F4yHWB *mTrackedProperties;	// 16 = 0x10
}
@property(retain) id baseStyle;	// G=0x31107a89; S=0x310e90dd; converted property
@property(assign) int bold;	// G=0x3110347d; S=0x310d9ded; converted property
@property(assign) int bracketTwoLinesInOne;	// G=0x312af8b5; S=0x312af951; converted property
@property(assign) int caps;	// G=0x31107285; S=0x310da991; converted property
@property(assign) long charPositionOfPictureBulletInBookmark;	// G=0x311d6001; S=0x311590cd; converted property
@property(retain) id color;	// G=0x310e6789; S=0x310da479; converted property
@property(assign, getter=isColorAuto) BOOL colorAuto;	// G=0x312ae009; S=0x310e6821; converted property
@property(assign) BOOL compressHorizontalInVertical;	// G=0x312af4f1; S=0x312af58d; converted property
@property(assign) int deleted;	// G=0x311c79d1; S=0x311c78ad; converted property
@property(assign) int doubleStrikeThrough;	// G=0x311c9469; S=0x310da2d1; converted property
@property(assign) int edited;	// G=0x312ae3f5; S=0x311c7801; converted property
@property(assign) BOOL embeddedObject;	// G=0x312aebb1; S=0x312aec4d; converted property
@property(assign) int embossed;	// G=0x312ac8b1; S=0x310d9fed; converted property
@property(assign) int emphasisMark;	// G=0x312ade35; S=0x312aded1; converted property
@property(retain) id extendedFont;	// G=0x312ac10d; S=0x310dae69; converted property
@property(retain) id farEastFont;	// G=0x312ac25d; S=0x310dadbd; converted property
@property(retain) id font;	// G=0x3110303d; S=0x310dad11; converted property
@property(assign) unsigned short fontSize;	// G=0x31102e31; S=0x310dac11; converted property
@property(assign) unsigned short fontSizeForBiText;	// G=0x312aea5d; S=0x3114d46d; converted property
@property(assign) int formattingChanged;	// G=0x312ae549; S=0x312ae5e5; converted property
@property(assign) int hidden;	// G=0x31154231; S=0x310daa11; converted property
@property(assign, getter=isHighlight) BOOL highlight;	// G=0x312ad125; S=0x311aea91; converted property
@property(assign) int highlightColor;	// G=0x312ad26d; S=0x310da891; converted property
@property(assign) BOOL horizontalInVertical;	// G=0x312af30d; S=0x312af3a9; converted property
@property(assign) int imprint;	// G=0x312ac9f9; S=0x310da06d; converted property
@property(assign) int italic;	// G=0x31134ff1; S=0x310d9e6d; converted property
@property(assign) unsigned short kerning;	// G=0x312acfd1; S=0x310dac91; converted property
@property(assign) int languageForBiText;	// G=0x312ae90d; S=0x310db0c1; converted property
@property(assign) int languageForDefaultText;	// G=0x312ae15d; S=0x310dafc1; converted property
@property(assign) int languageForFarEast;	// G=0x312ae7b9; S=0x310db041; converted property
@property(assign) int ligature;	// G=0x312ad3c1; S=0x312ad45d; converted property
@property(assign, getter=isListCharacterPictureBullet) BOOL listCharacterPictureBullet;	// G=0x3115914d; S=0x3115903d; converted property
@property(assign, getter=isLowerCase) BOOL lowerCase;	// G=0x312ad595; S=0x312ad631; converted property
@property(assign) long objectIDForOle2;	// G=0x312aef79; S=0x312af00d; converted property
@property(assign) long offsetToPictureData;	// G=0x312af13d; S=0x312af1d5; converted property
@property(assign) BOOL ole2;	// G=0x312aed95; S=0x312aee31; converted property
@property(assign) int outline;	// G=0x312ac75d; S=0x310d9eed; converted property
@property(assign) short position;	// G=0x312ad8bd; S=0x310dab11; converted property
@property(retain) id reflection;	// G=0x312ada0d; S=0x312adaa5; converted property
@property(assign) int resolveMode;	// G=0x312aa921; S=0x310d9d81; converted property
@property(assign) int rightToLeft;	// G=0x312ae2a1; S=0x31197949; converted property
@property(assign) int shadow;	// G=0x312acb4d; S=0x310d9f6d; converted property
@property(retain) id shadow2010;	// G=0x312adbed; S=0x312adc85; converted property
@property(assign) float shadow2010Opacity;	// G=0x312acca1; S=0x312acd45; converted property
@property(assign) int smallCaps;	// G=0x31198c21; S=0x310da911; converted property
@property(assign) short spacing;	// G=0x312ad779; S=0x310daa91; converted property
@property(assign, getter=isSpecialCharacter) BOOL specialCharacter;	// G=0x312ae665; S=0x310f25c9; converted property
@property(assign) int strikeThrough;	// G=0x311b5ee1; S=0x310da251; converted property
@property(assign) unsigned short symbolCharacter;	// G=0x312ac609; S=0x311473cd; converted property
@property(retain) id symbolFont;	// G=0x312ac3ad; S=0x310daf15; converted property
@property(assign) BOOL twoLinesInOne;	// G=0x312af6d5; S=0x312af771; converted property
@property(assign) int underline;	// G=0x310e77e1; S=0x310da0ed; converted property
@property(retain) id underlineColor;	// G=0x312ace81; S=0x310da1a9; converted property
@property(assign) int verticalAlign;	// G=0x31108a09; S=0x310dab91; converted property
+ (SEL)fontOverriddenSelectorForLanguageType:(int)languageType;	// 0x312ac5c5
+ (SEL)fontSelectorForLanguageType:(int)languageType;	// 0x312ac581
+ (int)languageFromString:(id)string;	// 0x310e36fd
+ (BOOL)languageIsArabicOrHebrew:(int)hebrew;	// 0x312affb9
+ (BOOL)languageIsCJK:(int)cjk;	// 0x312aff89
+ (BOOL)languageIsChinese:(int)chinese;	// 0x312aff3d
- (id)initWithDocument:(id)document;	// 0x310d9ce9
- (void)applyPropertiesFrom:(id)from ifOverriddenIn:(id)anIn;	// 0x312aa969
// converted property getter: - (id)baseStyle;	// 0x31107a89
// converted property getter: - (int)bold;	// 0x3110347d
- (id)border;	// 0x312abfbd
// converted property getter: - (int)bracketTwoLinesInOne;	// 0x312af8b5
// converted property getter: - (int)caps;	// 0x31107285
// converted property getter: - (long)charPositionOfPictureBulletInBookmark;	// 0x311d6001
- (void)clearBaseStyle;	// 0x31128389
// converted property getter: - (id)color;	// 0x310e6789
// converted property getter: - (BOOL)compressHorizontalInVertical;	// 0x312af4f1
- (void)copyPropertiesInto:(id)into;	// 0x312afc6d
- (id)copyWithZone:(NSZone *)zone;	// 0x312afa89
- (void)dealloc;	// 0x3110985d
// converted property getter: - (int)deleted;	// 0x311c79d1
- (id)document;	// 0x310e36dd
// converted property getter: - (int)doubleStrikeThrough;	// 0x311c9469
// converted property getter: - (int)edited;	// 0x312ae3f5
// converted property getter: - (BOOL)embeddedObject;	// 0x312aebb1
// converted property getter: - (int)embossed;	// 0x312ac8b1
// converted property getter: - (int)emphasisMark;	// 0x312ade35
// converted property getter: - (id)extendedFont;	// 0x312ac10d
// converted property getter: - (id)farEastFont;	// 0x312ac25d
// converted property getter: - (id)font;	// 0x3110303d
- (id)fontForLanguageType:(int)languageType;	// 0x312ac4f1
// converted property getter: - (unsigned short)fontSize;	// 0x31102e31
// converted property getter: - (unsigned short)fontSizeForBiText;	// 0x312aea5d
// converted property getter: - (int)formattingChanged;	// 0x312ae549
// converted property getter: - (int)hidden;	// 0x31154231
// converted property getter: - (int)highlightColor;	// 0x312ad26d
// converted property getter: - (BOOL)horizontalInVertical;	// 0x312af30d
// converted property getter: - (int)imprint;	// 0x312ac9f9
- (BOOL)isAnythingOverridden;	// 0x312aa86d
- (BOOL)isAnythingOverriddenIn:(XXStruct_F4yHWB *)anIn;	// 0x312b0099
- (BOOL)isBaseStyleOverridden;	// 0x31102165
- (BOOL)isBoldOverridden;	// 0x31102a99
- (BOOL)isBooleanProbablyDifferent:(int)different than:(int)than;	// 0x312b0175
- (BOOL)isBorderOverridden;	// 0x312ac055
- (BOOL)isBracketTwoLinesInOneOverridden;	// 0x312af9d1
- (BOOL)isCapsOverridden;	// 0x31103255
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;	// 0x311d5f51
// converted property getter: - (BOOL)isColorAuto;	// 0x312ae009
- (BOOL)isColorAutoOverridden;	// 0x312ae0a5
- (BOOL)isColorOverridden;	// 0x3110330d
- (BOOL)isCompressHorizontalInVerticalOverridden;	// 0x312af61d
- (BOOL)isDeletedOverridden;	// 0x31103961
- (BOOL)isDoubleStrikeThroughOverridden;	// 0x31102cc1
- (BOOL)isEditedOverridden;	// 0x312ae491
- (BOOL)isEmbeddedObjectOverridden;	// 0x312aecdd
- (BOOL)isEmbossedOverridden;	// 0x312ac949
- (BOOL)isEmphasisMarkOverridden;	// 0x312adf51
- (BOOL)isExtendedFontOverridden;	// 0x312ac1a5
- (BOOL)isFarEastFontOverridden;	// 0x312ac2f5
- (BOOL)isFontOverridden;	// 0x31102f85
- (BOOL)isFontOverriddenForLanguageType:(int)languageType;	// 0x312ac535
- (BOOL)isFontSizeForBiTextOverridden;	// 0x312aeaf9
- (BOOL)isFontSizeOverridden;	// 0x31102d79
- (BOOL)isFormattingChangedOverridden;	// 0x310e4b99
- (BOOL)isHiddenOverridden;	// 0x31103a19
// converted property getter: - (BOOL)isHighlight;	// 0x312ad125
- (BOOL)isHighlightColorOverridden;	// 0x312ad309
- (BOOL)isHighlightOverridden;	// 0x312ad1bd
- (BOOL)isHorizontalInVerticalOverridden;	// 0x312af439
- (BOOL)isImprintOverridden;	// 0x312aca95
- (BOOL)isItalicOverridden;	// 0x31102b51
- (BOOL)isKerningOverridden;	// 0x312ad06d
- (BOOL)isLanguageForBiTextOverridden;	// 0x312ae9a5
- (BOOL)isLanguageForDefaultTextOverridden;	// 0x312ae1f1
- (BOOL)isLanguageForFarEastOverridden;	// 0x312ae855
- (BOOL)isLigatureOverridden;	// 0x312ad4dd
// converted property getter: - (BOOL)isListCharacterPictureBullet;	// 0x3115914d
- (BOOL)isListCharacterPictureBulletOverridden;	// 0x3112c291
// converted property getter: - (BOOL)isLowerCase;	// 0x312ad595
- (BOOL)isLowerCaseOverridden;	// 0x312ad6c1
- (BOOL)isObjectIDForOle2Overridden;	// 0x312af08d
- (BOOL)isOffsetToPictureDataOverridden;	// 0x312af255
- (BOOL)isOle2Overridden;	// 0x312aeec1
- (BOOL)isOutlineOverridden;	// 0x312ac7f9
- (BOOL)isPositionOverridden;	// 0x312ad955
- (BOOL)isReflectionOverridden;	// 0x312adb35
- (BOOL)isRightToLeftOverridden;	// 0x312ae33d
- (BOOL)isShadingOverridden;	// 0x311033c5
- (BOOL)isShadow2010OpacityOverridden;	// 0x312acdc9
- (BOOL)isShadow2010Overridden;	// 0x312add7d
- (BOOL)isShadowOverridden;	// 0x312acbe9
- (BOOL)isSmallCapsOverridden;	// 0x3110319d
- (BOOL)isSpacingOverridden;	// 0x312ad80d
// converted property getter: - (BOOL)isSpecialCharacter;	// 0x312ae665
- (BOOL)isSpecialCharacterOverridden;	// 0x312ae701
- (BOOL)isStrikeThroughOverridden;	// 0x31102c09
- (BOOL)isSymbolCharacterOverridden;	// 0x312ac6a5
- (BOOL)isSymbolFontOverridden;	// 0x312ac441
- (BOOL)isTwoLinesInOneOverridden;	// 0x312af7fd
- (BOOL)isUnderlineColorOverridden;	// 0x312acf19
- (BOOL)isUnderlineOverridden;	// 0x311030e5
- (BOOL)isVerticalAlignOverridden;	// 0x31102ecd
// converted property getter: - (int)italic;	// 0x31134ff1
// converted property getter: - (unsigned short)kerning;	// 0x312acfd1
// converted property getter: - (int)languageForBiText;	// 0x312ae90d
// converted property getter: - (int)languageForDefaultText;	// 0x312ae15d
// converted property getter: - (int)languageForFarEast;	// 0x312ae7b9
// converted property getter: - (int)ligature;	// 0x312ad3c1
- (id)mutableBorder;	// 0x310da351
- (id)mutableShading;	// 0x310da521
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x310e3b1d
// converted property getter: - (long)objectIDForOle2;	// 0x312aef79
// converted property getter: - (long)offsetToPictureData;	// 0x312af13d
// converted property getter: - (BOOL)ole2;	// 0x312aed95
// converted property getter: - (int)outline;	// 0x312ac75d
// converted property getter: - (short)position;	// 0x312ad8bd
// converted property getter: - (id)reflection;	// 0x312ada0d
- (void)removeEmptyFormattingChanges:(id)changes;	// 0x312ab591
// converted property getter: - (int)resolveMode;	// 0x312aa921
- (int)reverseBooleanProperty:(int)property;	// 0x312b0199
// converted property getter: - (int)rightToLeft;	// 0x312ae2a1
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x310e90dd
// converted property setter: - (void)setBold:(int)bold;	// 0x310d9ded
// converted property setter: - (void)setBracketTwoLinesInOne:(int)one;	// 0x312af951
// converted property setter: - (void)setCaps:(int)caps;	// 0x310da991
// converted property setter: - (void)setCharPositionOfPictureBulletInBookmark:(long)bookmark;	// 0x311590cd
// converted property setter: - (void)setColor:(id)color;	// 0x310da479
// converted property setter: - (void)setColorAuto:(BOOL)auto;	// 0x310e6821
// converted property setter: - (void)setCompressHorizontalInVertical:(BOOL)vertical;	// 0x312af58d
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x311c78ad
// converted property setter: - (void)setDoubleStrikeThrough:(int)through;	// 0x310da2d1
// converted property setter: - (void)setEdited:(int)edited;	// 0x311c7801
// converted property setter: - (void)setEmbeddedObject:(BOOL)object;	// 0x312aec4d
// converted property setter: - (void)setEmbossed:(int)embossed;	// 0x310d9fed
// converted property setter: - (void)setEmphasisMark:(int)mark;	// 0x312aded1
// converted property setter: - (void)setExtendedFont:(id)font;	// 0x310dae69
// converted property setter: - (void)setFarEastFont:(id)font;	// 0x310dadbd
// converted property setter: - (void)setFont:(id)font;	// 0x310dad11
// converted property setter: - (void)setFontSize:(unsigned short)size;	// 0x310dac11
// converted property setter: - (void)setFontSizeForBiText:(unsigned short)biText;	// 0x3114d46d
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x312ae5e5
// converted property setter: - (void)setHidden:(int)hidden;	// 0x310daa11
// converted property setter: - (void)setHighlight:(BOOL)highlight;	// 0x311aea91
// converted property setter: - (void)setHighlightColor:(int)color;	// 0x310da891
// converted property setter: - (void)setHorizontalInVertical:(BOOL)vertical;	// 0x312af3a9
// converted property setter: - (void)setImprint:(int)imprint;	// 0x310da06d
// converted property setter: - (void)setItalic:(int)italic;	// 0x310d9e6d
// converted property setter: - (void)setKerning:(unsigned short)kerning;	// 0x310dac91
// converted property setter: - (void)setLanguageForBiText:(int)biText;	// 0x310db0c1
// converted property setter: - (void)setLanguageForDefaultText:(int)defaultText;	// 0x310dafc1
// converted property setter: - (void)setLanguageForFarEast:(int)farEast;	// 0x310db041
// converted property setter: - (void)setLigature:(int)ligature;	// 0x312ad45d
// converted property setter: - (void)setListCharacterPictureBullet:(BOOL)bullet;	// 0x3115903d
// converted property setter: - (void)setLowerCase:(BOOL)aCase;	// 0x312ad631
// converted property setter: - (void)setObjectIDForOle2:(long)ole2;	// 0x312af00d
// converted property setter: - (void)setOffsetToPictureData:(long)pictureData;	// 0x312af1d5
// converted property setter: - (void)setOle2:(BOOL)a2;	// 0x312aee31
// converted property setter: - (void)setOutline:(int)outline;	// 0x310d9eed
// converted property setter: - (void)setPosition:(short)position;	// 0x310dab11
// converted property setter: - (void)setReflection:(id)reflection;	// 0x312adaa5
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x310d9d81
// converted property setter: - (void)setRightToLeft:(int)left;	// 0x31197949
// converted property setter: - (void)setShadow2010:(id)a2010;	// 0x312adc85
// converted property setter: - (void)setShadow2010Opacity:(float)opacity;	// 0x312acd45
// converted property setter: - (void)setShadow:(int)shadow;	// 0x310d9f6d
// converted property setter: - (void)setSmallCaps:(int)caps;	// 0x310da911
// converted property setter: - (void)setSpacing:(short)spacing;	// 0x310daa91
// converted property setter: - (void)setSpecialCharacter:(BOOL)character;	// 0x310f25c9
// converted property setter: - (void)setStrikeThrough:(int)through;	// 0x310da251
// converted property setter: - (void)setSymbolCharacter:(unsigned short)character;	// 0x311473cd
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x310daf15
// converted property setter: - (void)setTwoLinesInOne:(BOOL)one;	// 0x312af771
// converted property setter: - (void)setUnderline:(int)underline;	// 0x310da0ed
// converted property setter: - (void)setUnderlineColor:(id)color;	// 0x310da1a9
// converted property setter: - (void)setVerticalAlign:(int)align;	// 0x310dab91
- (id)shading;	// 0x311c7939
// converted property getter: - (int)shadow;	// 0x312acb4d
// converted property getter: - (id)shadow2010;	// 0x312adbed
// converted property getter: - (float)shadow2010Opacity;	// 0x312acca1
// converted property getter: - (int)smallCaps;	// 0x31198c21
// converted property getter: - (short)spacing;	// 0x312ad779
// converted property getter: - (int)strikeThrough;	// 0x311b5ee1
// converted property getter: - (unsigned short)symbolCharacter;	// 0x312ac609
// converted property getter: - (id)symbolFont;	// 0x312ac3ad
// converted property getter: - (BOOL)twoLinesInOne;	// 0x312af6d5
// converted property getter: - (int)underline;	// 0x310e77e1
// converted property getter: - (id)underlineColor;	// 0x312ace81
// converted property getter: - (int)verticalAlign;	// 0x31108a09
@end

