/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDDocument, WDStyle, WDParagraphProperties, NSMutableArray, NSMutableDictionary, WDCharacterProperties;

@interface WDStyleSheet : NSObject {
	NSMutableDictionary *mStyleDictionary;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	WDCharacterProperties *mDefaultCharacterProperties;	// 12 = 0xc
	WDParagraphProperties *mDefaultParagraphProperties;	// 16 = 0x10
	WDStyle *mDefaultParagraphStyle;	// 20 = 0x14
	WDStyle *mDefaultCharacterStyle;	// 24 = 0x18
	WDStyle *mDefaultTableStyle;	// 28 = 0x1c
	WDStyle *mDefaultListStyle;	// 32 = 0x20
	NSMutableArray *mStylesInOrder;	// 36 = 0x24
	NSMutableDictionary *mIdDictionaryForName;	// 40 = 0x28
}
@property(retain) id defaultCharacterStyle;	// G=0x34c9373d; S=0x34abf219; converted property
@property(retain) id defaultListStyle;	// G=0x34ac194d; S=0x34abffd1; converted property
@property(retain) id defaultParagraphStyle;	// G=0x34abc465; S=0x34abac81; converted property
@property(retain) id defaultTableStyle;	// G=0x34c9374d; S=0x34abf481; converted property
- (id)initWithDocument:(id)document;	// 0x34ab1f0d
- (void)addStyle:(id)style name:(id)name;	// 0x34abecbd
- (void)createDefaultStyles;	// 0x34c933f5
- (id)createStyleWithId:(id)anId type:(int)type;	// 0x34aba445
- (id)createStyleWithName:(id)name type:(int)type;	// 0x34c9331d
- (void)dealloc;	// 0x34ae1e9d
- (id)defaultCharacterProperties;	// 0x34abade5
// converted property getter: - (id)defaultCharacterStyle;	// 0x34c9373d
// converted property getter: - (id)defaultListStyle;	// 0x34ac194d
- (id)defaultParagraphProperties;	// 0x34b7fb29
// converted property getter: - (id)defaultParagraphStyle;	// 0x34abc465
// converted property getter: - (id)defaultTableStyle;	// 0x34c9374d
- (id)document;	// 0x34ab2641
- (void)initializeDefaultProperties;	// 0x34ab1ff5
- (id)paragraphStyleWithStartingName:(id)startingName;	// 0x34c93259
- (void)removeStyleWithId:(id)anId;	// 0x34c93351
// converted property setter: - (void)setDefaultCharacterStyle:(id)style;	// 0x34abf219
// converted property setter: - (void)setDefaultListStyle:(id)style;	// 0x34abffd1
// converted property setter: - (void)setDefaultParagraphStyle:(id)style;	// 0x34abac81
// converted property setter: - (void)setDefaultTableStyle:(id)style;	// 0x34abf481
- (void)setName:(id)name forId:(id)anId;	// 0x34abada5
- (int)styleCount;	// 0x34c93209
- (id)styleIdForName:(id)name;	// 0x34abed15
- (id)styleNameToId:(id)anId;	// 0x34aff945
- (id)styleWithId:(id)anId;	// 0x34ac0815
- (id)styleWithName:(id)name;	// 0x34c93229
- (id)styles;	// 0x34c931e9
@end
