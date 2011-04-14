/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSData, NSString, NSNumber;

@interface FTAcceptMessage : FTMessage {
	NSData *_selfPushToken;	// 24 = 0x18
	NSNumber *_selfNATType;	// 28 = 0x1c
	NSData *_selfBlob;	// 32 = 0x20
	NSData *_selfNATIP;	// 36 = 0x24
	NSString *_peerID;	// 40 = 0x28
	NSData *_peerPushToken;	// 44 = 0x2c
	NSNumber *_peerNATType;	// 48 = 0x30
	NSData *_peerBlob;	// 52 = 0x34
	NSData *_peerNATIP;	// 56 = 0x38
	NSNumber *_relayType;	// 60 = 0x3c
	NSData *_relayConnectionId;	// 64 = 0x40
	NSData *_relayTransactionIdAlloc;	// 68 = 0x44
	NSData *_relayTokenAllocReq;	// 72 = 0x48
	NSData *_selfRelayIP;	// 76 = 0x4c
	NSNumber *_selfRelayPort;	// 80 = 0x50
	NSData *_peerRelayIP;	// 84 = 0x54
	NSNumber *_peerRelayPort;	// 88 = 0x58
}
@property(copy) NSData *peerBlob;	// G=0x3472f61d; S=0x3472f825; @synthesize=_peerBlob
@property(copy) NSString *peerID;	// G=0x3472f5d5; S=0x3472f7ad; @synthesize=_peerID
@property(copy) NSData *peerNATIP;	// G=0x3472f635; S=0x3472f84d; @synthesize=_peerNATIP
@property(copy) NSNumber *peerNATType;	// G=0x3472f605; S=0x3472f7fd; @synthesize=_peerNATType
@property(copy) NSData *peerPushToken;	// G=0x3472f5ed; S=0x3472f7d5; @synthesize=_peerPushToken
@property(copy) NSData *peerRelayIP;	// G=0x3472f6dd; S=0x3472f965; @synthesize=_peerRelayIP
@property(copy) NSNumber *peerRelayPort;	// G=0x3472f6f5; S=0x3472f98d; @synthesize=_peerRelayPort
@property(copy) NSData *relayConnectionId;	// G=0x3472f665; S=0x3472f89d; @synthesize=_relayConnectionId
@property(copy) NSData *relayTokenAllocReq;	// G=0x3472f695; S=0x3472f8ed; @synthesize=_relayTokenAllocReq
@property(copy) NSData *relayTransactionIdAlloc;	// G=0x3472f67d; S=0x3472f8c5; @synthesize=_relayTransactionIdAlloc
@property(copy) NSNumber *relayType;	// G=0x3472f64d; S=0x3472f875; @synthesize=_relayType
@property(copy) NSData *selfBlob;	// G=0x3472f5a5; S=0x3472f75d; @synthesize=_selfBlob
@property(copy) NSData *selfNATIP;	// G=0x3472f5bd; S=0x3472f785; @synthesize=_selfNATIP
@property(copy) NSNumber *selfNATType;	// G=0x3472f58d; S=0x3472f735; @synthesize=_selfNATType
@property(copy) NSData *selfPushToken;	// G=0x3472f575; S=0x3472f70d; @synthesize=_selfPushToken
@property(copy) NSData *selfRelayIP;	// G=0x3472f6ad; S=0x3472f915; @synthesize=_selfRelayIP
@property(copy) NSNumber *selfRelayPort;	// G=0x3472f6c5; S=0x3472f93d; @synthesize=_selfRelayPort
- (id)bagKey;	// 0x3472ed39
- (void)dealloc;	// 0x3472efd5
- (void)handleResponseDictionary:(id)dictionary;	// 0x3472ed45
- (id)messageBody;	// 0x3472f0ad
// declared property getter: - (id)peerBlob;	// 0x3472f61d
// declared property getter: - (id)peerID;	// 0x3472f5d5
// declared property getter: - (id)peerNATIP;	// 0x3472f635
// declared property getter: - (id)peerNATType;	// 0x3472f605
// declared property getter: - (id)peerPushToken;	// 0x3472f5ed
// declared property getter: - (id)peerRelayIP;	// 0x3472f6dd
// declared property getter: - (id)peerRelayPort;	// 0x3472f6f5
// declared property getter: - (id)relayConnectionId;	// 0x3472f665
// declared property getter: - (id)relayTokenAllocReq;	// 0x3472f695
// declared property getter: - (id)relayTransactionIdAlloc;	// 0x3472f67d
// declared property getter: - (id)relayType;	// 0x3472f64d
- (id)requiredKeys;	// 0x3472eef1
// declared property getter: - (id)selfBlob;	// 0x3472f5a5
// declared property getter: - (id)selfNATIP;	// 0x3472f5bd
// declared property getter: - (id)selfNATType;	// 0x3472f58d
// declared property getter: - (id)selfPushToken;	// 0x3472f575
// declared property getter: - (id)selfRelayIP;	// 0x3472f6ad
// declared property getter: - (id)selfRelayPort;	// 0x3472f6c5
// declared property setter: - (void)setPeerBlob:(id)blob;	// 0x3472f825
// declared property setter: - (void)setPeerID:(id)anId;	// 0x3472f7ad
// declared property setter: - (void)setPeerNATIP:(id)natip;	// 0x3472f84d
// declared property setter: - (void)setPeerNATType:(id)type;	// 0x3472f7fd
// declared property setter: - (void)setPeerPushToken:(id)token;	// 0x3472f7d5
// declared property setter: - (void)setPeerRelayIP:(id)ip;	// 0x3472f965
// declared property setter: - (void)setPeerRelayPort:(id)port;	// 0x3472f98d
// declared property setter: - (void)setRelayConnectionId:(id)anId;	// 0x3472f89d
// declared property setter: - (void)setRelayTokenAllocReq:(id)req;	// 0x3472f8ed
// declared property setter: - (void)setRelayTransactionIdAlloc:(id)alloc;	// 0x3472f8c5
// declared property setter: - (void)setRelayType:(id)type;	// 0x3472f875
// declared property setter: - (void)setSelfBlob:(id)blob;	// 0x3472f75d
// declared property setter: - (void)setSelfNATIP:(id)natip;	// 0x3472f785
// declared property setter: - (void)setSelfNATType:(id)type;	// 0x3472f735
// declared property setter: - (void)setSelfPushToken:(id)token;	// 0x3472f70d
// declared property setter: - (void)setSelfRelayIP:(id)ip;	// 0x3472f915
// declared property setter: - (void)setSelfRelayPort:(id)port;	// 0x3472f93d
@end

