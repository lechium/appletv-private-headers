/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRUserPasswordAccount.h> // Unknown library
#import "ATVReadOnlyFeedResource.h"

@class NSString;

@interface ATVFlagstaffAccount : BRUserPasswordAccount <ATVReadOnlyFeedResource> {
@private
	NSString *ipid;	// 28 = 0x1c
	NSString *fingerprint;	// 32 = 0x20
	int statusCode;	// 36 = 0x24
	NSString *statusMessage;	// 40 = 0x28
}
@property(retain, nonatomic) NSString *fingerprint;	// G=0x33709b91; S=0x33709d5d; @synthesize
@property(retain, nonatomic) NSString *ipid;	// G=0x33709ba1; S=0x33709d35; @synthesize
@property(assign, nonatomic) int statusCode;	// G=0x33709b71; S=0x33709b81; @synthesize
@property(retain, nonatomic) NSString *statusMessage;	// G=0x33709b61; S=0x33709d85; @synthesize
- (void)clearAllProperties;	// 0x33709c45
- (void)dealloc;	// 0x33709cd1
- (id)feedResourceNamed:(id)named;	// 0x33709bb1
// declared property getter: - (id)fingerprint;	// 0x33709b91
// declared property getter: - (id)ipid;	// 0x33709ba1
- (BOOL)isAuthenticated;	// 0x33709c09
- (void)resetAccountOptions;	// 0x33709c95
// declared property setter: - (void)setFingerprint:(id)fingerprint;	// 0x33709d5d
// declared property setter: - (void)setIpid:(id)ipid;	// 0x33709d35
// declared property setter: - (void)setStatusCode:(int)code;	// 0x33709b81
// declared property setter: - (void)setStatusMessage:(id)message;	// 0x33709d85
// declared property getter: - (int)statusCode;	// 0x33709b71
// declared property getter: - (id)statusMessage;	// 0x33709b61
- (id)type;	// 0x33709c25
@end

