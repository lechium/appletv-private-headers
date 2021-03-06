/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSBlock, NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionReplyInfo : NSObject {
@private
	NSBlock *_replyBlock;	// 4 = 0x4
	id _errorBlock;	// 8 = 0x8
	id _cleanupBlock;	// 12 = 0xc
	NSString *_selector;	// 16 = 0x10
	NSXPCInterface *_interface;	// 20 = 0x14
}
@property(copy) id cleanupBlock;	// G=0x31b40e95; S=0x31b40ea9; @synthesize=_cleanupBlock
@property(copy) id errorBlock;	// G=0x31b40e71; S=0x31b40e85; @synthesize=_errorBlock
@property(retain) NSXPCInterface *interface;	// G=0x31b40eb9; S=0x31b40ecd; @synthesize=_interface
@property(copy) NSBlock *replyBlock;	// G=0x31b40e4d; S=0x31b40e61; @synthesize=_replyBlock
@property(copy) NSString *selector;	// G=0x31b40e29; S=0x31b40e3d; @synthesize=_selector
// declared property getter: - (id)cleanupBlock;	// 0x31b40e95
- (void)dealloc;	// 0x31b40d89
// declared property getter: - (id)errorBlock;	// 0x31b40e71
// declared property getter: - (id)interface;	// 0x31b40eb9
// declared property getter: - (id)replyBlock;	// 0x31b40e4d
// declared property getter: - (id)selector;	// 0x31b40e29
// declared property setter: - (void)setCleanupBlock:(id)block;	// 0x31b40ea9
// declared property setter: - (void)setErrorBlock:(id)block;	// 0x31b40e85
// declared property setter: - (void)setInterface:(id)interface;	// 0x31b40ecd
// declared property setter: - (void)setReplyBlock:(id)block;	// 0x31b40e61
// declared property setter: - (void)setSelector:(id)selector;	// 0x31b40e3d
@end

