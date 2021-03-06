/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class XPCClient, ClientIdentity, NSString;

__attribute__((visibility("hidden")))
@interface RequestQueueOperation : ISOperation {
@private
	XPCClient *_client;	// 60 = 0x3c
	ClientIdentity *_clientIdentity;	// 64 = 0x40
	BOOL _disconnected;	// 68 = 0x44
	NSString *_requestGroupIdentifier;	// 72 = 0x48
	NSString *_requestIdentifier;	// 76 = 0x4c
}
@property(retain) XPCClient *client;	// G=0x33bf5135; S=0x33bf5289; 
@property(assign, getter=isClientConnected) BOOL clientConnected;	// G=0x33bf5245; S=0x33bf52f1; 
@property(retain) ClientIdentity *clientIdentity;	// G=0x33bf5339; S=0x33bf534d; @synthesize=_clientIdentity
@property(retain) NSString *requestGroupIdentifier;	// G=0x33bf5371; S=0x33bf5385; @synthesize=_requestGroupIdentifier
@property(retain) NSString *requestIdentifier;	// G=0x33bf53a9; S=0x33bf53bd; @synthesize=_requestIdentifier
- (id)initWithRequest:(id)request;	// 0x33bf5021
// declared property getter: - (id)client;	// 0x33bf5135
// declared property getter: - (id)clientIdentity;	// 0x33bf5339
- (id)copyRequest;	// 0x33bf5195
- (id)copyResponseDictionary;	// 0x33bf5199
- (void)dealloc;	// 0x33bf50ad
// declared property getter: - (BOOL)isClientConnected;	// 0x33bf5245
// declared property getter: - (id)requestGroupIdentifier;	// 0x33bf5371
// declared property getter: - (id)requestIdentifier;	// 0x33bf53a9
// declared property setter: - (void)setClient:(id)client;	// 0x33bf5289
// declared property setter: - (void)setClientConnected:(BOOL)connected;	// 0x33bf52f1
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x33bf534d
// declared property setter: - (void)setRequestGroupIdentifier:(id)identifier;	// 0x33bf5385
// declared property setter: - (void)setRequestIdentifier:(id)identifier;	// 0x33bf53bd
@end

