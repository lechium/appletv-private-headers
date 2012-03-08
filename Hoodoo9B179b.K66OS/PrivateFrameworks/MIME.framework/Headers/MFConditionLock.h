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
+ (void)initialize;	// 0x31d66735
- (id)init;	// 0x31d64ff5
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x31d64951
- (id)initWithName:(id)name condition:(int)condition andDelegate:(id)delegate;	// 0x31d666cd
- (void)dealloc;	// 0x31d6674d
- (id)description;	// 0x31d66799
- (BOOL)isLockedByMe;	// 0x31d65cd1
- (BOOL)lockBeforeDate:(id)date;	// 0x31d66915
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x31d668a9
- (void)unlock;	// 0x31d66875
- (void)unlockWithCondition:(int)condition;	// 0x31d6683d
@end

