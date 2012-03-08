/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"


@interface BRBlockBackgroundTask : BRBackgroundTask {
@private
	id _block;	// 44 = 0x2c
}
+ (id)backgroundTaskWithInterval:(double)interval delay:(double)delay taskType:(int)type withBlock:(id)block;	// 0x30359911
- (id)initWithInterval:(double)interval delay:(double)delay taskType:(int)type withBlock:(id)block;	// 0x30359971
- (void)dealloc;	// 0x303599f5
- (BOOL)perform:(id)perform;	// 0x30359a41
@end

