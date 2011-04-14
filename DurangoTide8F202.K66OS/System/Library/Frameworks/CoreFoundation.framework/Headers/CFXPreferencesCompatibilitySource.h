/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CFXPreferencesSource.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesCompatibilitySource : CFXPreferencesSource {
}
- (CFDictionaryRef)copyDictionary;	// 0x31d0a769
- (CFArrayRef)copyKeyList;	// 0x31d0aa35
- (void *)getValueForKey:(CFStringRef)key;	// 0x31d0c019
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x31d0a62d
- (unsigned char)synchronize;	// 0x31d0a68d
@end

