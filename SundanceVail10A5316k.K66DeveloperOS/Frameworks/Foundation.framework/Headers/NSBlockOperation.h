/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"


@interface NSBlockOperation : NSOperation {
@private
	id _private2;	// 12 = 0xc
	void *_reserved2;	// 16 = 0x10
}
+ (id)blockOperationWithBlock:(id)block;	// 0x31a23125
- (id)init;	// 0x31a23175
- (void)addExecutionBlock:(id)block;	// 0x31a231d5
- (void)dealloc;	// 0x31a2a299
- (id)executionBlocks;	// 0x31a772a1
- (void)main;	// 0x31a29d99
@end

