/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSEnumerator.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _SCRCStackQueueEnumerator : NSEnumerator {
@private
	SCRCStackNode *_currentListMemeber;	// 4 = 0x4
}
- (id)initWithListMember:(SCRCStackNode *)listMember;	// 0x30f623c1
- (id)nextObject;	// 0x30f62401
@end

