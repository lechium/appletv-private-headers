/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString;

@interface NSSortDescriptor : NSObject <NSCoding, NSCopying> {
@private
	unsigned _sortDescriptorFlags;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	SEL _selector;	// 12 = 0xc
	id _selectorOrBlock;	// 16 = 0x10
}
@property(readonly, retain) NSString *key;	// G=0x35dd7815; converted property
@property(readonly, assign) SEL selector;	// G=0x35dd77c1; converted property
+ (id)_defaultSelectorName;	// 0x35e707f9
+ (void)initialize;	// 0x35df4981
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending;	// 0x35e10aed
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;	// 0x35e707b1
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;	// 0x35e10b19
- (id)initWithCoder:(id)coder;	// 0x35e70a2d
- (id)initWithKey:(id)key ascending:(BOOL)ascending;	// 0x35df28d1
- (id)initWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;	// 0x35e70805
- (id)initWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;	// 0x35dd71ed
- (BOOL)_isEqualToSortDescriptor:(id)sortDescriptor;	// 0x35e70e0d
- (id)_selectorName;	// 0x35e70c21
- (void)_setAscending:(BOOL)ascending;	// 0x35e70b71
- (void)_setKey:(id)key;	// 0x35e70b2d
- (void)_setSelectorName:(id)name;	// 0x35e70bb9
- (BOOL)ascending;	// 0x35dd77ad
- (id)comparator;	// 0x35e70b91
- (int)compareObject:(id)object toObject:(id)object2;	// 0x35e21e91
- (id)copyWithZone:(NSZone *)zone;	// 0x35e70b1d
- (void)dealloc;	// 0x35dd7b21
- (id)description;	// 0x35e70c69
- (void)encodeWithCoder:(id)coder;	// 0x35e708e5
- (BOOL)isEqual:(id)equal;	// 0x35e70f0d
// converted property getter: - (id)key;	// 0x35dd7815
- (id)reversedSortDescriptor;	// 0x35e70d55
// converted property getter: - (SEL)selector;	// 0x35dd77c1
@end

