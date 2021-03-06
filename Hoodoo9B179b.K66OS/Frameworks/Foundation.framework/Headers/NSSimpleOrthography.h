/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOrthography.h"


@interface NSSimpleOrthography : NSOrthography {
	unsigned _orthographyFlags;	// 4 = 0x4
}
@property(readonly, assign) unsigned orthographyFlags;	// G=0x310eab5d; converted property
+ (void)initialize;	// 0x310ea819
+ (id)orthographyWithFlags:(unsigned)flags;	// 0x310ea865
- (id)initWithCoder:(id)coder;	// 0x310eaa35
- (id)initWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x310ea939
- (id)initWithFlags:(unsigned)flags;	// 0x310ea8a5
- (id)allLanguages;	// 0x310eac55
- (id)allScripts;	// 0x310eac39
- (Class)classForCoder;	// 0x310ea9b5
- (id)dominantLanguage;	// 0x310eac19
- (id)dominantLanguageForScript:(id)script;	// 0x310eabd5
- (id)dominantScript;	// 0x310eab21
- (void)encodeWithCoder:(id)coder;	// 0x310ea9c5
- (id)languageMap;	// 0x310eab41
- (id)languagesForScript:(id)script;	// 0x310eab6d
// converted property getter: - (unsigned)orthographyFlags;	// 0x310eab5d
@end

