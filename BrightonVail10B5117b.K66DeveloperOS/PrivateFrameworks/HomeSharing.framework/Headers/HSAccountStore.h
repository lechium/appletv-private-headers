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
@property(copy, nonatomic) NSString *appleID;	// G=0x342bcd65; S=0x342bce8d; @dynamic
@property(copy, nonatomic) NSString *groupID;	// G=0x342bcf61; S=0x342bd7d1; @dynamic
@property(retain, nonatomic) SSURLConnectionRequest *groupIDRequest;	// G=0x342bd825; S=0x342bd835; @synthesize=_groupIDRequest
@property(copy, nonatomic) NSString *password;	// G=0x342bcf91; S=0x342bcfa9; @dynamic
+ (id)defaultStore;	// 0x342bcac9
- (id)init;	// 0x342bcb79
// declared property getter: - (id)appleID;	// 0x342bcd65
- (BOOL)canDetermineGroupID;	// 0x342bd045
- (void)clearAllCredentials;	// 0x342bd735
- (void)clearCaches;	// 0x342bd77d
- (void)clearGroupID;	// 0x342bd7bd
- (void)dealloc;	// 0x342bccf1
- (void)determineGroupIDWithCompletionHandler:(id)completionHandler;	// 0x342bd081
// declared property getter: - (id)groupID;	// 0x342bcf61
// declared property getter: - (id)groupIDRequest;	// 0x342bd825
// declared property getter: - (id)password;	// 0x342bcf91
// declared property setter: - (void)setAppleID:(id)anId;	// 0x342bce8d
// declared property setter: - (void)setGroupID:(id)anId;	// 0x342bd7d1
// declared property setter: - (void)setGroupIDRequest:(id)request;	// 0x342bd835
// declared property setter: - (void)setPassword:(id)password;	// 0x342bcfa9
@end
