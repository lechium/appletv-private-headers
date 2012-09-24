/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "CFXPreferencesSource.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesSearchListSource : CFXPreferencesSource {
	CFArrayRef _sourceList;	// 16 = 0x10
}
- (id)init;	// 0x33a6c6a1
- (void)_removeValueForKey:(CFStringRef)key;	// 0x33aeb265
- (void)addSource:(id)source;	// 0x33a6d549
- (CFDictionaryRef)copyDictionary;	// 0x33a752c9
- (CFArrayRef)copyKeyList;	// 0x33a75449
- (void)dealloc;	// 0x33aeb42d
- (long)generationCount;	// 0x33a753dd
- (void *)getValueForKey:(CFStringRef)key;	// 0x33a48ae9
- (void)removeSource:(id)source;	// 0x33aeb3dd
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x33aeb31d
- (unsigned char)synchronize;	// 0x33a6d8b1
- (void)synchronizeInBackgroundWithCompletionBlock:(id)completionBlock;	// 0x33a61d95
@end
