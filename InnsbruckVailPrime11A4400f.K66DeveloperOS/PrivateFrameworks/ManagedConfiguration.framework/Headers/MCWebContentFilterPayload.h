/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray;

@interface MCWebContentFilterPayload : MCPayload {
	BOOL _autoFilterEnabled;	// 44 = 0x2c
	NSArray *_permittedURLStrings;	// 48 = 0x30
	NSArray *_whitelistedBookmarks;	// 52 = 0x34
	NSArray *_blacklistedURLStrings;	// 56 = 0x38
}
@property(assign, nonatomic) BOOL autoFilterEnabled;	// G=0x313d4f0d; S=0x313d4f1d; @synthesize=_autoFilterEnabled
@property(retain, nonatomic) NSArray *blacklistedURLStrings;	// G=0x313d4f9d; S=0x313d4fad; @synthesize=_blacklistedURLStrings
@property(retain, nonatomic) NSArray *permittedURLStrings;	// G=0x313d4f2d; S=0x313d4f3d; @synthesize=_permittedURLStrings
@property(retain, nonatomic) NSArray *whitelistedBookmarks;	// G=0x313d4f65; S=0x313d4f75; @synthesize=_whitelistedBookmarks
+ (id)localizedPluralForm;	// 0x313d3821
+ (id)localizedSingularForm;	// 0x313d380d
+ (id)typeStrings;	// 0x313d37d5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x313d3835
- (void).cxx_destruct;	// 0x313d4fd5
// declared property getter: - (BOOL)autoFilterEnabled;	// 0x313d4f0d
// declared property getter: - (id)blacklistedURLStrings;	// 0x313d4f9d
- (id)description;	// 0x313d4ba9
// declared property getter: - (id)permittedURLStrings;	// 0x313d4f2d
- (id)restrictions;	// 0x313d4731
// declared property setter: - (void)setAutoFilterEnabled:(BOOL)enabled;	// 0x313d4f1d
// declared property setter: - (void)setBlacklistedURLStrings:(id)strings;	// 0x313d4fad
// declared property setter: - (void)setPermittedURLStrings:(id)strings;	// 0x313d4f3d
// declared property setter: - (void)setWhitelistedBookmarks:(id)bookmarks;	// 0x313d4f75
- (id)stubDictionary;	// 0x313d45a5
- (id)subtitle1Description;	// 0x313d4d65
- (id)subtitle1Label;	// 0x313d4d51
- (id)title;	// 0x313d4d3d
// declared property getter: - (id)whitelistedBookmarks;	// 0x313d4f65
@end

