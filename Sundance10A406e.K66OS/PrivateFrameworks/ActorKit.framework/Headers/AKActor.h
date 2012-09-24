/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import <NSObject.h> // Unknown library
#import "AKActor.h"

@class AKMailbox;

@protocol AKActor
- (id)mailbox;
- (id)send;
@end

@interface AKActor : NSObject <AKActor> {
	AKMailbox *_mailbox;	// 4 = 0x4
}
@property(readonly, retain) AKMailbox *mailbox;	// G=0x356d2b7d; converted property
- (id)init;	// 0x356d29f5
- (void)dealloc;	// 0x356d2b09
- (id)deferredReply;	// 0x356d2b8d
// converted property getter: - (id)mailbox;	// 0x356d2b7d
- (id)send;	// 0x356d2b6d
- (id)startMigrantDispatchQueue;	// 0x356d2bc5
- (id)startThreadDispatchQueue;	// 0x356d2c21
@end
