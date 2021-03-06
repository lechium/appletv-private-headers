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
@property(retain, nonatomic) NSString *currentLanguage;	// G=0x410cf5; S=0x410d05; @synthesize=_currentLanguage
@property(retain, nonatomic) NSMutableDictionary *stringFileCache;	// G=0x410d2d; S=0x410d3d; @synthesize=_stringFileCache
+ (id)accessibilityLocalizedStringForKey:(id)key;	// 0x4101e9
+ (id)appliance:(id)appliance localizedStringForKey:(id)key inFile:(id)file;	// 0x472ab5
+ (id)applicationLocalizedStringForKey:(id)key inFile:(id)file;	// 0x4102f9
+ (id)backRowLocalizedStringForKey:(id)key inFile:(id)file;	// 0x41026d
+ (id)localizedLanguageForCode:(id)code;	// 0x4107b9
+ (id)localizedLanguageForIdentifier:(id)identifier;	// 0x410839
+ (id)localizedStringForKey:(id)key inFile:(id)file fromBundle:(id)bundle;	// 0x410385
+ (id)pathForResource:(id)resource ofType:(id)type forBundle:(id)bundle;	// 0x4106a5
+ (void)setSingleton:(id)singleton;	// 0x40ff85
+ (id)singleton;	// 0x40ff75
- (id)init;	// 0x40ffa9
- (void).cxx_destruct;	// 0x410d65
- (id)_currentLanguageNameForBundle:(id)bundle;	// 0x410b0d
- (BOOL)_doesHashKey:(id)key belongToBundleWithPath:(id)path;	// 0x410c99
- (id)_hashKeyForStringKey:(id)stringKey inFile:(id)file fromBundlePath:(id)bundlePath;	// 0x410c45
- (void)_systemLanguageUpdated:(id)updated;	// 0x4100e5
// declared property getter: - (id)currentLanguage;	// 0x410cf5
- (void)dealloc;	// 0x410079
- (void)resouceBundleHasChangedAtPath:(id)path;	// 0x4108b9
// declared property setter: - (void)setCurrentLanguage:(id)language;	// 0x410d05
// declared property setter: - (void)setStringFileCache:(id)cache;	// 0x410d3d
// declared property getter: - (id)stringFileCache;	// 0x410d2d
@end

