/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservationInfo : NSObject {
@private
	int _retainCountMinusOne;	// 4 = 0x4
	NSArray *_observances;	// 8 = 0x8
	unsigned _cachedHash;	// 12 = 0xc
	BOOL _cachedIsShareable;	// 16 = 0x10
	NSHashTable *_observables;	// 20 = 0x14
}
- (id)_initWithObservances:(id *)observances count:(unsigned)count;	// 0x319eee65
- (BOOL)_isDeallocating;	// 0x31a67c75
- (BOOL)_tryRetain;	// 0x31a67c25
- (void)dealloc;	// 0x319ef38d
- (id)description;	// 0x31a67d99
- (unsigned)hash;	// 0x31a67ca1
- (BOOL)isEqual:(id)equal;	// 0x31a67cb1
- (oneway void)release;	// 0x319ef319
- (id)retain;	// 0x319ef979
- (unsigned)retainCount;	// 0x31a67c11
@end

