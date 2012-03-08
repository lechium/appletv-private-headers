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
+ (void)initialize;	// 0x31d661a5
- (id)init;	// 0x31d64f9d
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x31d6613d
- (void)dealloc;	// 0x31d661bd
- (id)description;	// 0x31d66209
- (BOOL)isLockedByMe;	// 0x31d65cb9
- (void)lock;	// 0x31d663ad
- (BOOL)lockBeforeDate:(id)date;	// 0x31d662e1
- (BOOL)tryLock;	// 0x31d66349
- (void)unlock;	// 0x31d662ad
@end

