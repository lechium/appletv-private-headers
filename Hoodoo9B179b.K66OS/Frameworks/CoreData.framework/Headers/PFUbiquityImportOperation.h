/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSOperation.h> // Unknown library

@class NSObject, NSLock;

__attribute__((visibility("hidden")))
@interface PFUbiquityImportOperation : NSOperation {
@private
	NSLock *_delegateLock;	// 12 = 0xc
	BOOL _lockedDelegateLock;	// 16 = 0x10
	NSObject *_delegate;	// 20 = 0x14
}
@property(assign) NSObject *delegate;	// G=0x32c2c295; S=0x32c2c395; @synthesize=_delegate
- (id)init;	// 0x32c2c2a5
- (void)dealloc;	// 0x32c2c3d1
// declared property getter: - (id)delegate;	// 0x32c2c295
- (void)lockDelegateLock;	// 0x32c2c35d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32c2c395
- (void)unlockDelegateLock;	// 0x32c2c31d
@end

