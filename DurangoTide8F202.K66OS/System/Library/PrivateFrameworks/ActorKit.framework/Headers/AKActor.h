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
@private
	AKMailbox *_mailbox;	// 4 = 0x4
}
@property(readonly, retain) AKMailbox *mailbox;	// G=0x318a9af9; converted property
- (id)init;	// 0x318a9c35
- (void)dealloc;	// 0x318a9bd9
- (id)deferredReply;	// 0x318a9ba9
// converted property getter: - (id)mailbox;	// 0x318a9af9
- (id)send;	// 0x318a9ae9
- (id)startMigrantDispatchQueue;	// 0x318a9b59
- (id)startThreadDispatchQueue;	// 0x318a9b09
@end

