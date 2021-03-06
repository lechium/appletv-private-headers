/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOrthography.h"

@class NSString, NSDictionary;

@interface NSComplexOrthography : NSOrthography {
	NSString *_dominantScript;	// 4 = 0x4
	NSDictionary *_languageMap;	// 8 = 0x8
	unsigned _orthographyFlags;	// 12 = 0xc
}
@property(readonly, retain) NSString *dominantScript;	// G=0x306e07a9; converted property
@property(readonly, retain) NSDictionary *languageMap;	// G=0x306e07e1; converted property
@property(readonly, assign) unsigned orthographyFlags;	// G=0x306e0819; converted property
+ (void)initialize;	// 0x306e0609
- (id)initWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x306e0649
- (void)dealloc;	// 0x306e0749
// converted property getter: - (id)dominantScript;	// 0x306e07a9
// converted property getter: - (id)languageMap;	// 0x306e07e1
// converted property getter: - (unsigned)orthographyFlags;	// 0x306e0819
@end

