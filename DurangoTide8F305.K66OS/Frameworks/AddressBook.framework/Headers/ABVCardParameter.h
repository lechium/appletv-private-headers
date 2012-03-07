/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString;

@interface ABVCardParameter : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_grouping;	// 8 = 0x8
	id _value;	// 12 = 0xc
	NSMutableArray *_types;	// 16 = 0x10
	BOOL _primary;	// 20 = 0x14
}
@property(retain) NSString *grouping;	// G=0x336fb3bd; S=0x336fb501; converted property
@property(assign) BOOL isPrimary;	// G=0x336fb3dd; S=0x336fb3ed; converted property
@property(readonly, retain) NSString *name;	// G=0x336fb3ad; converted property
@property(readonly, retain) NSMutableArray *types;	// G=0x336fb39d; converted property
@property(retain) id value;	// G=0x336fb3cd; S=0x336fb565; converted property
- (id)initWithName:(id)name;	// 0x336fd935
- (void)addType:(id)type;	// 0x336fb545
- (void)addTypes:(id)types;	// 0x336fb525
- (void)dealloc;	// 0x336fd8b5
- (id)description;	// 0x336fb47d
- (void)finalize;	// 0x336fd889
// converted property getter: - (id)grouping;	// 0x336fb3bd
// converted property getter: - (BOOL)isPrimary;	// 0x336fb3dd
// converted property getter: - (id)name;	// 0x336fb3ad
// converted property setter: - (void)setGrouping:(id)grouping;	// 0x336fb501
// converted property setter: - (void)setIsPrimary:(BOOL)primary;	// 0x336fb3ed
// converted property setter: - (void)setValue:(id)value;	// 0x336fb565
// converted property getter: - (id)types;	// 0x336fb39d
// converted property getter: - (id)value;	// 0x336fb3cd
@end
