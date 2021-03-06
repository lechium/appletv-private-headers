/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRLocalizedStringManager : BRSingleton {
	NSString *_currentLanguage;	// 4 = 0x4
	NSMutableDictionary *_stringFileCache;	// 8 = 0x8
}
+ (id)_backRowFramework;	// 0x3945c9
+ (id)accessibilityLocalizedStringForKey:(id)key;	// 0x394079
+ (id)appliance:(id)appliance localizedStringForKey:(id)key inFile:(id)file;	// 0x39414d
+ (id)applicationLocalizedStringForKey:(id)key inFile:(id)file;	// 0x394109
+ (id)backRowLocalizedStringForKey:(id)key inFile:(id)file;	// 0x3940c5
+ (id)localizedLanguageForCode:(id)code;	// 0x3944a9
+ (id)localizedLanguageForIdentifier:(id)identifier;	// 0x394539
+ (id)localizedStringForKey:(id)key inFile:(id)file fromBundle:(id)bundle;	// 0x3941e1
+ (id)pathForResource:(id)resource ofType:(id)type forBundle:(id)bundle;	// 0x394409
+ (void)setSingleton:(id)singleton;	// 0x393e89
+ (id)singleton;	// 0x393e79
- (id)init;	// 0x393e99
- (void)_bundleUpdated:(id)updated;	// 0x394785
- (id)_currentLanguageNameForBundle:(id)bundle;	// 0x3949f1
- (BOOL)_doesHashKey:(id)key belongToBundleWithPath:(id)path;	// 0x394af5
- (id)_hashKeyForStringKey:(id)stringKey inFile:(id)file fromBundlePath:(id)bundlePath;	// 0x394abd
- (void)_languageChanged:(id)changed;	// 0x3945e5
- (void)dealloc;	// 0x393fe9
@end

