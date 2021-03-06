/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library

@class NSString, SSURLConnectionRequest;

@interface HSAccountStore : NSObject {
	int _defaultsDidChangeToken;	// 4 = 0x4
	SSURLConnectionRequest *_groupIDRequest;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *appleID;	// G=0x340dd285; S=0x340dd3ad; @dynamic
@property(copy, nonatomic) NSString *groupID;	// G=0x340dd481; S=0x340ddcf1; @dynamic
@property(retain, nonatomic) SSURLConnectionRequest *groupIDRequest;	// G=0x340ddd45; S=0x340ddd55; @synthesize=_groupIDRequest
@property(copy, nonatomic) NSString *password;	// G=0x340dd4b1; S=0x340dd4c9; @dynamic
+ (id)defaultStore;	// 0x340dcfe9
- (id)init;	// 0x340dd099
// declared property getter: - (id)appleID;	// 0x340dd285
- (BOOL)canDetermineGroupID;	// 0x340dd565
- (void)clearAllCredentials;	// 0x340ddc55
- (void)clearCaches;	// 0x340ddc9d
- (void)clearGroupID;	// 0x340ddcdd
- (void)dealloc;	// 0x340dd211
- (void)determineGroupIDWithCompletionHandler:(id)completionHandler;	// 0x340dd5a1
// declared property getter: - (id)groupID;	// 0x340dd481
// declared property getter: - (id)groupIDRequest;	// 0x340ddd45
// declared property getter: - (id)password;	// 0x340dd4b1
// declared property setter: - (void)setAppleID:(id)anId;	// 0x340dd3ad
// declared property setter: - (void)setGroupID:(id)anId;	// 0x340ddcf1
// declared property setter: - (void)setGroupIDRequest:(id)request;	// 0x340ddd55
// declared property setter: - (void)setPassword:(id)password;	// 0x340dd4c9
@end

