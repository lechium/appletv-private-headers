/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSArray.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFEncodedArray : NSArray {
@private
	NSData *_sourceData;	// 4 = 0x4
	int _cd_rc;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
}
@property(readonly, assign) unsigned count;	// G=0x32b18c85; converted property
- (id)init;	// 0x32b1c66d
- (BOOL)_isDeallocating;	// 0x32b1ba5d
- (void)_replaceObject:(id)object atIndex:(unsigned)index;	// 0x32b19a3d
- (BOOL)_tryRetain;	// 0x32b1bbe1
- (const id *)_values;	// 0x32b18c9d
- (Class)classForCoder:(id)coder;	// 0x32b199d9
- (id)copy;	// 0x32b199c9
// converted property getter: - (unsigned)count;	// 0x32b18c85
- (void)dealloc;	// 0x32b19945
- (id)description;	// 0x32b199a1
- (id)mutableCopy;	// 0x32b199f5
- (id)objectAtIndex:(unsigned)index;	// 0x32b18c95
- (oneway void)release;	// 0x32b1bb61
- (id)retain;	// 0x32b1ba25
- (unsigned)retainCount;	// 0x32b18c71
@end

