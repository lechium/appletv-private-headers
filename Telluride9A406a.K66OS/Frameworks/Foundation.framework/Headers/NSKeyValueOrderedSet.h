/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSOrderedSet.h> // Unknown library
#import "NSKeyValueProxyCaching.h"

@class NSObject, NSString, NSKeyValueNonmutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueOrderedSet : NSOrderedSet <NSKeyValueProxyCaching> {
@private
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSKeyValueNonmutatingOrderedSetMethodSet *_methods;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x35ed9d45
+ (id)_proxyShare;	// 0x35ed9d55
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x35ed9d85
- (XXStruct_OzJQfB)_proxyLocator;	// 0x35ed9e35
- (void)_proxyNonGCFinalize;	// 0x35ed9e59
- (unsigned)count;	// 0x35ed9f01
- (void)dealloc;	// 0x35ed9ec5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x35ed9f31
- (unsigned)indexOfObject:(id)object;	// 0x35ed9fa5
- (id)objectAtIndex:(unsigned)index;	// 0x35ed9fdd
- (id)objectsAtIndexes:(id)indexes;	// 0x35eda09d
@end

