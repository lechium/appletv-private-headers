/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSAttributeDescription;

__attribute__((visibility("hidden")))
@interface NSSQLBindVariable : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	id _value;	// 8 = 0x8
	unsigned _sqlType;	// 12 = 0xc
	unsigned _index;	// 16 = 0x10
	long long _int64;	// 20 = 0x14
	NSAttributeDescription *_attributeDescription;	// 28 = 0x1c
}
@property(readonly, retain) NSAttributeDescription *attributeDescription;	// G=0x32b86565; converted property
@property(assign) unsigned index;	// G=0x32b86555; S=0x32af24c1; converted property
@property(assign) long long int64;	// G=0x32b865f5; S=0x32b86529; converted property
@property(readonly, assign) unsigned sqlType;	// G=0x32af4175; converted property
@property(assign) unsigned unsignedInt;	// G=0x32b865bd; S=0x32b8653d; converted property
@property(retain) id value;	// G=0x32af41a5; S=0x32b86575; converted property
- (id)initWithInt64:(long long)int64 sqlType:(unsigned)type;	// 0x32b866f9
- (id)initWithUnsignedInt:(unsigned)unsignedInt sqlType:(unsigned)type;	// 0x32b866b9
- (id)initWithValue:(id)value sqlType:(unsigned)type attributeDescription:(id)description;	// 0x32af1585
- (BOOL)_isDeallocating;	// 0x32b86635
- (BOOL)_tryRetain;	// 0x32b8665d
// converted property getter: - (id)attributeDescription;	// 0x32b86565
- (void)dealloc;	// 0x32af4a15
- (BOOL)hasObjectValue;	// 0x32af4185
// converted property getter: - (unsigned)index;	// 0x32b86555
// converted property getter: - (long long)int64;	// 0x32b865f5
- (oneway void)release;	// 0x32af1671
- (id)retain;	// 0x32af1639
- (unsigned)retainCount;	// 0x32b86515
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x32af24c1
// converted property setter: - (void)setInt64:(long long)a64;	// 0x32b86529
// converted property setter: - (void)setUnsignedInt:(unsigned)int;	// 0x32b8653d
// converted property setter: - (void)setValue:(id)value;	// 0x32b86575
// converted property getter: - (unsigned)sqlType;	// 0x32af4175
// converted property getter: - (unsigned)unsignedInt;	// 0x32b865bd
// converted property getter: - (id)value;	// 0x32af41a5
@end

