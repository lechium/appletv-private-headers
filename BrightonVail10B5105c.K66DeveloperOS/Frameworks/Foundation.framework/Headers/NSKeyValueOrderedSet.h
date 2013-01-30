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
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSKeyValueNonmutatingOrderedSetMethodSet *_methods;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x36180a45
+ (id)_proxyShare;	// 0x36180a55
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x36180a85
- (XXStruct_OzJQfB)_proxyLocator;	// 0x36180b31
- (void)_proxyNonGCFinalize;	// 0x36180b55
- (unsigned)count;	// 0x36180bf9
- (void)dealloc;	// 0x36180bc1
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x36180c29
- (unsigned)indexOfObject:(id)object;	// 0x36180ca1
- (id)objectAtIndex:(unsigned)index;	// 0x36180cd9
- (id)objectsAtIndexes:(id)indexes;	// 0x36180d9d
@end
