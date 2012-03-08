/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, BRMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ClientIdentity : NSObject {
@private
	unsigned _applicationState;	// 4 = 0x4
	BOOL _appleSigned;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	int _clientType;	// 16 = 0x10
	BOOL _isListening;	// 20 = 0x14
	NSLock *_lock;	// 24 = 0x18
	int _pid;	// 28 = 0x1c
}
@property(readonly, assign, getter=isAppleSigned) BOOL appleSigned;	// G=0x331c5aa5; 
@property(assign) unsigned applicationState;	// G=0x331c5845; S=0x331c5bd5; 
@property(readonly, assign) BOOL canReceiveMessages;	// G=0x331c5895; 
@property(readonly, assign) NSString *clientIdentifier;	// G=0x331c5971; 
@property(readonly, assign) NSString *clientIdentifierHeader;	// G=0x331c59dd; 
@property(readonly, assign) int clientType;	// G=0x331c5921; 
@property(assign, getter=isListening) BOOL listening;	// G=0x331c5b3d; S=0x331c5c21; 
@property(readonly, assign, nonatomic) BRMerchant *merchant;	// G=0x331e9ee9; 
@property(assign) int processIdentifier;	// G=0x331c5b89; S=0x331c5c6d; 
- (id)init;	// 0x331c55e9
- (id)initWithApplicationIdentifier:(id)applicationIdentifier isAppleSigned:(BOOL)aSigned;	// 0x331c5701
- (id)initWithAuditToken:(XXStruct_kUSYWB *)auditToken;	// 0x331c55fd
- (id)initWithMerchant:(id)merchant;	// 0x331e9d79
- (id)_initCommon;	// 0x331c5559
- (unsigned)_ntsApplicationState;	// 0x331c5d39
- (int)_ntsClientType;	// 0x331c5d79
// declared property getter: - (unsigned)applicationState;	// 0x331c5845
// declared property getter: - (BOOL)canReceiveMessages;	// 0x331c5895
// declared property getter: - (id)clientIdentifier;	// 0x331c5971
// declared property getter: - (id)clientIdentifierHeader;	// 0x331c59dd
// declared property getter: - (int)clientType;	// 0x331c5921
- (void)dealloc;	// 0x331c57e5
// declared property getter: - (BOOL)isAppleSigned;	// 0x331c5aa5
- (BOOL)isEqual:(id)equal;	// 0x331c5cb9
// declared property getter: - (BOOL)isListening;	// 0x331c5b3d
// declared property getter: - (id)merchant;	// 0x331e9ee9
// declared property getter: - (int)processIdentifier;	// 0x331c5b89
// declared property setter: - (void)setApplicationState:(unsigned)state;	// 0x331c5bd5
// declared property setter: - (void)setListening:(BOOL)listening;	// 0x331c5c21
// declared property setter: - (void)setProcessIdentifier:(int)identifier;	// 0x331c5c6d
@end

