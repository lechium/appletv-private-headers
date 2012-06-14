/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSRecursiveLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x366d49fd
- (id)init;	// 0x366d4a6d
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x366d4a99
- (void)dealloc;	// 0x366d5009
- (id)description;	// 0x366d4f71
- (BOOL)isLockedByMe;	// 0x366d4afd
- (void)lock;	// 0x366d4b55
- (BOOL)lockBeforeDate:(id)date;	// 0x366d4cf9
- (BOOL)tryLock;	// 0x366d4c99
- (void)unlock;	// 0x366d4d5d
@end

