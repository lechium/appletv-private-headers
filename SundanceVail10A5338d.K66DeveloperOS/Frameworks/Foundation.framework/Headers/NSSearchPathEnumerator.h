/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSEnumerator.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSSearchPathEnumerator : NSEnumerator {
	long state;	// 4 = 0x4
	unsigned directory;	// 8 = 0x8
	unsigned domainMask;	// 12 = 0xc
}
- (id)initWithDirectory:(unsigned)directory domains:(unsigned)domains;	// 0x3739f299
- (id)nextObject;	// 0x3739f301
@end
