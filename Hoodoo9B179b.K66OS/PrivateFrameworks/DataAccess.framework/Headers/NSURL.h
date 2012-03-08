/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSURL.h> // Unknown library


@interface NSURL (DAKeychainAddition)
- (id)URLByRemovingLastPathComponent;	// 0x31193525
- (id)URLWithUsername:(id)username;	// 0x31193815
- (id)URLWithUsername:(id)username withPassword:(id)password;	// 0x3119361d
- (id)URLWithoutUsername;	// 0x31193471
- (id)uri;	// 0x311933d9
@end

@interface NSURL (DAExtensions)
+ (id)URLWithDirtyString:(id)dirtyString;	// 0x3119a061
+ (id)URLWithScheme:(id)scheme host:(id)host port:(int)port uri:(id)uri;	// 0x3119a251
+ (id)URLWithScheme:(id)scheme host:(id)host user:(id)user port:(int)port uri:(id)uri;	// 0x3119a125
+ (int)classicPortForScheme:(id)scheme;	// 0x3119a27d
- (BOOL)isEqualToDAVURL:(id)davurl;	// 0x311997b5
- (id)pathWithoutTrailingRemovingSlash;	// 0x31199fd9
- (id)rawPath;	// 0x31199fbd
- (id)urlBySettingHost:(id)host;	// 0x31199f81
- (id)urlBySettingHost:(id)host keepUsername:(BOOL)username;	// 0x31199ad1
- (id)urlBySettingPath:(id)path;	// 0x31199fa9
- (id)urlBySettingPath:(id)path keepUsername:(BOOL)username;	// 0x31199d29
- (id)urlBySettingPort:(id)port;	// 0x31199f95
- (id)urlBySettingPort:(id)port keepUsername:(BOOL)username;	// 0x31199bf5
- (id)urlBySettingScheme:(id)scheme;	// 0x31199f6d
- (id)urlBySettingScheme:(id)scheme keepUsername:(BOOL)username;	// 0x311999ad
- (id)urlBySettingUsername:(id)username;	// 0x31199e51
@end

