/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDDocument, WDListLevel;

__attribute__((visibility("hidden")))
@interface WDListLevelOverride : NSObject {
@private
	WDListLevel *mListLevel;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	unsigned char mLevel;	// 12 = 0xc
	long mStartNumber;	// 16 = 0x10
	BOOL mStartNumberOverridden;	// 20 = 0x14
}
@property(assign) unsigned char level;	// G=0x312b24ad; S=0x311484e1; converted property
@property(assign) long startNumber;	// G=0x312b24bd; S=0x311484f1; converted property
- (id)initWithDocument:(id)document;	// 0x31148401
- (void)dealloc;	// 0x3114d019
- (id)document;	// 0x312b249d
- (BOOL)isListLevelOverridden;	// 0x312b24ed
- (BOOL)isStartNumberOverridden;	// 0x312b24cd
// converted property getter: - (unsigned char)level;	// 0x312b24ad
- (id)listLevel;	// 0x312b24dd
- (id)mutableListLevel;	// 0x31148511
// converted property setter: - (void)setLevel:(unsigned char)level;	// 0x311484e1
// converted property setter: - (void)setStartNumber:(long)number;	// 0x311484f1
// converted property getter: - (long)startNumber;	// 0x312b24bd
@end

