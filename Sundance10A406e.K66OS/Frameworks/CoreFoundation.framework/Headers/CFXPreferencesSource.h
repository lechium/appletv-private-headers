/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesSource : NSObject {
	CFDictionaryRef _dict;	// 4 = 0x4
	long _generationCount;	// 8 = 0x8
	BOOL _disabled;	// 12 = 0xc
}
@property(readonly, assign) long generationCount;	// G=0x33a75439; converted property
- (id)init;	// 0x33a6c701
- (CFDictionaryRef)copyDictionary;	// 0x33a9ec4d
- (CFArrayRef)copyKeyList;	// 0x33a74ecd
- (void)dealloc;	// 0x33aeb1d5
- (void)finalize;	// 0x33aeb21d
// converted property getter: - (long)generationCount;	// 0x33a75439
- (void *)getValueForKey:(CFStringRef)key;	// 0x33a48b41
- (void)setDisabled:(BOOL)disabled;	// 0x33a6d381
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x33a76cbd
- (unsigned char)synchronize;	// 0x33a61fe9
@end

