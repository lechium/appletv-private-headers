/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "NetflixLocalizedStringProvider.h"

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface NetflixEmbeddedLocalizedStringsProvider : NSObject <NetflixLocalizedStringProvider> {
@private
	NSString *stringsTableName;	// 4 = 0x4
	NSString *localeIdentifier;	// 8 = 0x8
	NSDictionary *stringsTable;	// 12 = 0xc
}
@property(readonly, assign) NSString *localeIdentifier;	// G=0x30504dcd; @synthesize
@property(readonly, assign) NSString *stringsTableName;	// G=0x30504dbd; @synthesize
- (id)initWithLocaleIdentifier:(id)localeIdentifier tableName:(id)name dictionary:(id)dictionary;	// 0x30504c41
- (void)dealloc;	// 0x30504d49
// declared property getter: - (id)localeIdentifier;	// 0x30504dcd
- (id)localizedString:(id)string;	// 0x30504d19
// declared property getter: - (id)stringsTableName;	// 0x30504dbd
@end

