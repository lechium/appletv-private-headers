/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSEnumerator.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSSearchPathEnumerator : NSEnumerator {
@private
	long state;	// 4 = 0x4
	unsigned directory;	// 8 = 0x8
	unsigned domainMask;	// 12 = 0xc
}
- (id)initWithDirectory:(unsigned)directory domains:(unsigned)domains;	// 0x31a7ab49
- (id)nextObject;	// 0x31a7abb1
@end

