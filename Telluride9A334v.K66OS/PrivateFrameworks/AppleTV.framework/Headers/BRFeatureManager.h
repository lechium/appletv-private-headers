/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

@interface BRFeatureManager : BRSingleton {
@private
	NSMutableDictionary *_featureDatabase;	// 4 = 0x4
	NSMutableDictionary *_featureDatabaseOverrides;	// 8 = 0x8
	NSMutableDictionary *_featureCodeLookupTable;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x3329631d
+ (id)singleton;	// 0x3329630d
- (id)init;	// 0x3329632d
- (void)_buildFeatureCodeLookupTable;	// 0x33297015
- (id)_featureNameForCode:(id)code;	// 0x33296b9d
- (void)_loadSavedCodes;	// 0x33296c41
- (void)_markFeatureNamed:(id)named enabled:(BOOL)enabled inTable:(id)table;	// 0x33296a41
- (id)_merchantWithFeatureCode:(id)featureCode;	// 0x3329727d
- (void)_saveFeatureCodes:(id)codes;	// 0x33296ef5
- (id)allFeatures;	// 0x332965e5
- (id)availableFeatures;	// 0x3329670d
- (void)dealloc;	// 0x332963fd
- (void)disableFeatureNamed:(id)named;	// 0x3329649d
- (void)enableFeatureNamed:(id)named;	// 0x33296471
- (BOOL)isFeatureEnabled:(id)enabled;	// 0x332964c9
- (void)resetFeatures;	// 0x332967f9
- (void)toggleSettingForCode:(id)code;	// 0x332968ad
@end

