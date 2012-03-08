/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAAction.h"

@class NSString;

@interface DAMoveAction : DAAction {
	NSString *_sourceContainerId;	// 20 = 0x14
	NSString *_sourceServerId;	// 24 = 0x18
	NSString *_destinationContainerId;	// 28 = 0x1c
}
@property(readonly, assign) NSString *destinationContainerId;	// G=0x31192439; @synthesize=_destinationContainerId
@property(readonly, assign) NSString *sourceContainerId;	// G=0x31192419; @synthesize=_sourceContainerId
@property(readonly, assign) NSString *sourceServerId;	// G=0x31192429; @synthesize=_sourceServerId
- (id)initWithCoder:(id)coder;	// 0x31192199
- (id)initWithItemChangeType:(int)itemChangeType changedItem:(id)item sourceContainerId:(id)anId sourceServerId:(id)anId4 destinationContainerId:(id)anId5;	// 0x31192095
- (void)dealloc;	// 0x31192125
// declared property getter: - (id)destinationContainerId;	// 0x31192439
- (void)encodeWithCoder:(id)coder;	// 0x311922ed
// declared property getter: - (id)sourceContainerId;	// 0x31192419
// declared property getter: - (id)sourceServerId;	// 0x31192429
@end

