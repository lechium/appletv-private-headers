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
@property(assign) unsigned char level;	// G=0x34e0b8e1; S=0x34cd2b4d; converted property
@property(assign) long startNumber;	// G=0x34e0b8f1; S=0x34cd2b5d; converted property
- (id)initWithDocument:(id)document;	// 0x34cd2a69
- (void)dealloc;	// 0x34cd4831
- (id)document;	// 0x34e0b8d1
- (BOOL)isListLevelOverridden;	// 0x34e0b921
- (BOOL)isStartNumberOverridden;	// 0x34e0b901
// converted property getter: - (unsigned char)level;	// 0x34e0b8e1
- (id)listLevel;	// 0x34e0b911
- (id)mutableListLevel;	// 0x34d3d3c1
// converted property setter: - (void)setLevel:(unsigned char)level;	// 0x34cd2b4d
// converted property setter: - (void)setStartNumber:(long)number;	// 0x34cd2b5d
// converted property getter: - (long)startNumber;	// 0x34e0b8f1
@end
