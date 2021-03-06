/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSConditionLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x31b25e11
- (id)init;	// 0x31b25e29
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x31b25e55
- (id)initWithName:(id)name condition:(int)condition andDelegate:(id)delegate;	// 0x31b25e75
- (void)dealloc;	// 0x31b260b9
- (id)description;	// 0x31b26021
- (BOOL)isLockedByMe;	// 0x31b25edd
- (BOOL)lockBeforeDate:(id)date;	// 0x31b25ee9
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x31b25f4d
- (void)unlock;	// 0x31b25fb5
- (void)unlockWithCondition:(int)condition;	// 0x31b25fe9
@end

