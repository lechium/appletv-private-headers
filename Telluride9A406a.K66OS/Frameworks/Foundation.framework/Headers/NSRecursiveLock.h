/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSLocking.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSRecursiveLock : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x35e5d575; S=0x35e5d539; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x35de3949
- (id)init;	// 0x35de3951
- (void)dealloc;	// 0x35e14399
- (id)description;	// 0x35e5d46d
- (void)finalize;	// 0x35e5d1fd
- (BOOL)isLocking;	// 0x35e5d581
- (void)lock;	// 0x35dd3935
- (BOOL)lockBeforeDate:(id)date;	// 0x35e5d301
// converted property getter: - (id)name;	// 0x35e5d575
// converted property setter: - (void)setName:(id)name;	// 0x35e5d539
- (BOOL)tryLock;	// 0x35e5d441
- (void)unlock;	// 0x35dd3955
@end
