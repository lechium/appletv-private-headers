/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSString, NSMutableDictionary;

@interface BRLocalizedStringManager : BRSingleton {
@private
	NSString *_currentLanguage;	// 4 = 0x4
	NSMutableDictionary *_stringFileCache;	// 8 = 0x8
}
+ (id)_backRowFramework;	// 0x332d6da9
+ (id)accessibilityLocalizedStringForKey:(id)key;	// 0x332d697d
+ (id)appliance:(id)appliance localizedStringForKey:(id)key inFile:(id)file;	// 0x332d6a21
+ (id)applicationLocalizedStringForKey:(id)key inFile:(id)file;	// 0x332d69dd
+ (id)backRowLocalizedStringForKey:(id)key inFile:(id)file;	// 0x332d69b1
+ (id)localizedLanguageForCode:(id)code;	// 0x332d6d19
+ (id)localizedStringForKey:(id)key inFile:(id)file fromBundle:(id)bundle;	// 0x332d6a79
+ (id)pathForResource:(id)resource ofType:(id)type forBundle:(id)bundle;	// 0x332d6c91
+ (void)setSingleton:(id)singleton;	// 0x332d67f1
+ (id)singleton;	// 0x332d67e1
- (id)init;	// 0x332d6801
- (id)_currentLanguageNameForBundle:(id)bundle;	// 0x332d6f49
- (id)_hashKeyForStringKey:(id)stringKey inFile:(id)file fromBundlePath:(id)bundlePath;	// 0x332d7025
- (void)_languageChanged:(id)changed;	// 0x332d6dad
- (void)dealloc;	// 0x332d68ed
@end
