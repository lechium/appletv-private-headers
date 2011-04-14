/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDListLevel, WDDocument;

__attribute__((visibility("hidden")))
@interface WDListLevelOverride : NSObject {
@private
	WDListLevel *mListLevel;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	unsigned char mLevel;	// 12 = 0xc
	int mStartNumber;	// 16 = 0x10
	BOOL mStartNumberOverridden;	// 20 = 0x14
}
@property(assign) unsigned char level;	// G=0x31b00671; S=0x31a00b2d; converted property
@property(assign) long startNumber;	// G=0x31b00681; S=0x31a00b3d; converted property
- (id)initWithDocument:(id)document;	// 0x31a00a55
- (void)dealloc;	// 0x31a016fd
- (id)document;	// 0x31b00661
- (BOOL)isListLevelOverridden;	// 0x31b006b1
- (BOOL)isStartNumberOverridden;	// 0x31b00691
// converted property getter: - (unsigned char)level;	// 0x31b00671
- (id)listLevel;	// 0x31b006a1
- (id)mutableListLevel;	// 0x31a56099
// converted property setter: - (void)setLevel:(unsigned char)level;	// 0x31a00b2d
// converted property setter: - (void)setStartNumber:(long)number;	// 0x31a00b3d
// converted property getter: - (long)startNumber;	// 0x31b00681
@end

