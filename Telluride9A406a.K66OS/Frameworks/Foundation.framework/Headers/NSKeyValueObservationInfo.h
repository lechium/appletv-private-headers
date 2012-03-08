/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSHashTable, NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservationInfo : NSObject {
@private
	int _retainCountMinusOne;	// 4 = 0x4
	NSArray *_observances;	// 8 = 0x8
	unsigned _cachedHash;	// 12 = 0xc
	BOOL _cachedIsShareable;	// 16 = 0x10
	NSHashTable *_observables;	// 20 = 0x14
}
- (id)_initWithObservances:(id *)observances count:(unsigned)count;	// 0x35de0ced
- (BOOL)_isDeallocating;	// 0x35e552d5
- (BOOL)_tryRetain;	// 0x35e55279
- (void)dealloc;	// 0x35de121d
- (id)description;	// 0x35e553d5
- (unsigned)hash;	// 0x35e55301
- (BOOL)isEqual:(id)equal;	// 0x35e55311
- (oneway void)release;	// 0x35de11a1
- (id)retain;	// 0x35de1751
- (unsigned)retainCount;	// 0x35e55265
@end

