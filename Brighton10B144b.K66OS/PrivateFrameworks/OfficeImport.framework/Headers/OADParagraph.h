/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADCharacterProperties, OADParagraphProperties, NSMutableArray;

@interface OADParagraph : NSObject {
	OADParagraphProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mTextRuns;	// 8 = 0x8
	OADCharacterProperties *mParagraphEndCharacterProperties;	// 12 = 0xc
}
@property(retain) id paragraphEndCharacterProperties;	// G=0x3486b159; S=0x34a4e2b5; converted property
@property(retain) id properties;	// G=0x34869c11; S=0x34a4e1bd; converted property
- (id)init;	// 0x3486978d
- (id)addDateTimeField;	// 0x34939591
- (id)addFooterField;	// 0x3495671d
- (id)addGenericTextField;	// 0x34a4e219
- (id)addRegularTextRun;	// 0x3486a129
- (id)addSlideNumberField;	// 0x3486b191
- (id)addTextLineBreak;	// 0x34875eed
- (void)applyProperties:(id)properties;	// 0x34a4e36d
- (id)bulletCharacterProperties;	// 0x34a4e341
- (void)dealloc;	// 0x34888b49
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x34956a55
- (BOOL)hasBulletCharacterProperties;	// 0x34a4e2f1
- (BOOL)isEmpty;	// 0x3487c3fd
// converted property getter: - (id)paragraphEndCharacterProperties;	// 0x3486b159
- (id)plainText;	// 0x34963edd
// converted property getter: - (id)properties;	// 0x34869c11
- (void)removeAllTextRuns;	// 0x34a4e1f9
- (void)removeUnnecessaryOverrides;	// 0x3486dc05
// converted property setter: - (void)setParagraphEndCharacterProperties:(id)properties;	// 0x34a4e2b5
- (void)setParentTextListStyle:(id)style;	// 0x3486b9b1
// converted property setter: - (void)setProperties:(id)properties;	// 0x34a4e1bd
- (id)textRunAtIndex:(unsigned)index;	// 0x3486a2ad
- (unsigned)textRunCount;	// 0x3486a109
@end
