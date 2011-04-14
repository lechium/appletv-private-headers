/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CFXPreferencesSource.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesSearchListSource : CFXPreferencesSource {
@private
	CFArrayRef _sourceList;	// 16 = 0x10
}
- (id)init;	// 0x31ca577d
- (void)addSource:(id)source;	// 0x31ca5b29
- (CFDictionaryRef)copyDictionary;	// 0x31ca8c0d
- (CFArrayRef)copyKeyList;	// 0x31ca8d75
- (void)dealloc;	// 0x31d0a8f9
- (void)finalize;	// 0x31d0a8ad
- (long)generationCount;	// 0x31ca8d01
- (void *)getValueForKey:(CFStringRef)key;	// 0x31c83af5
- (void)removeSource:(id)source;	// 0x31d0bccd
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x31d0a625
- (unsigned char)synchronize;	// 0x31c93969
@end

