/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixLocalization : XXUnknownSuperclass {
}
+ (id)fallbackLaungauegFor:(id)aFor;	// 0x533a8d
+ (void)initialize;	// 0x533515
+ (id)localizationTable:(id)table fromBundle:(id)bundle;	// 0x533d1d
+ (id)localizationTableForFilePath:(id)filePath;	// 0x533c81
+ (id)localizedStringForKey:(id)key value:(id)value table:(id)table bundle:(id)bundle;	// 0x53397d
+ (Class)lookupProviderClassFor:(id)aFor tableName:(id)name;	// 0x533f5d
+ (id)preferredLanguages;	// 0x533761
+ (id)preferredLocalizationsFromBundle:(id)bundle;	// 0x533771
+ (id)providerForTable:(id)table;	// 0x533ffd
+ (id)pseudoLocalizeString:(id)string withValue:(id)value;	// 0x533b85
+ (void)setPreferredLanguages:(id)languages;	// 0x533519
+ (void)setPseudoLocalization:(BOOL)localization;	// 0x533a7d
@end
