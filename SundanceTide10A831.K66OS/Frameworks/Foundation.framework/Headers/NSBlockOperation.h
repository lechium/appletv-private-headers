/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"


@interface NSBlockOperation : NSOperation {
	id _private2;	// 12 = 0xc
	void *_reserved2;	// 16 = 0x10
}
+ (id)blockOperationWithBlock:(id)block;	// 0x3252c07d
- (id)init;	// 0x3252c0cd
- (void)addExecutionBlock:(id)block;	// 0x3252c12d
- (void)dealloc;	// 0x32534e91
- (id)executionBlocks;	// 0x32599fb9
- (void)main;	// 0x3252c471
@end
