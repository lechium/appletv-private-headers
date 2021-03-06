/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray;

@interface MCAppWhitelistPayload : MCPayload {
	NSArray *_whitelistedAppsAndOptions;	// 40 = 0x28
}
@property(retain, nonatomic) NSArray *whitelistedAppsAndOptions;	// G=0x344e10a9; S=0x344e10b9; @synthesize=_whitelistedAppsAndOptions
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x344e09b1
+ (id)typeStrings;	// 0x344e0989
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x344e0a39
- (void).cxx_destruct;	// 0x344e10e1
- (id)description;	// 0x344e1011
// declared property setter: - (void)setWhitelistedAppsAndOptions:(id)options;	// 0x344e10b9
- (id)stubDictionary;	// 0x344e0e9d
- (id)subtitle1Description;	// 0x344e0f4d
- (id)subtitle1Label;	// 0x344e0f39
// declared property getter: - (id)whitelistedAppsAndOptions;	// 0x344e10a9
@end

