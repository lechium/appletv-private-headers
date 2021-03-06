/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBKUniversalPlaybackPositionTransactionContext.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVUPPClientState, NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVUniversalPlaybackPositionTransactionContext : XXUnknownSuperclass <SBKUniversalPlaybackPositionTransactionContext> {
	NSString *_capturedDomainVersion;	// 4 = 0x4
	ATVUPPClientState *_clientState;	// 8 = 0x8
	NSDictionary *_changes;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSDictionary *changes;	// G=0x1b7cb5; @synthesize=_changes
@property(readonly, assign, nonatomic) ATVUPPClientState *clientState;	// G=0x1b7ca5; @synthesize=_clientState
- (id)initWithClientState:(id)clientState changes:(id)changes;	// 0x1b7bb5
- (void).cxx_destruct;	// 0x1b7cc5
// declared property getter: - (id)changes;	// 0x1b7cb5
// declared property getter: - (id)clientState;	// 0x1b7ca5
- (id)lastSyncedDomainVersion;	// 0x1b7c91
@end

