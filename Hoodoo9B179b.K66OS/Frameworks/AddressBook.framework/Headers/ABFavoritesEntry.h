/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ABFavoritesEntry : NSObject {
@private
	int _abUid;	// 4 = 0x4
	int _abIdentifier;	// 8 = 0x8
	NSString *_value;	// 12 = 0xc
	int _property;	// 16 = 0x10
	int _type;	// 20 = 0x14
	unsigned _dirty : 1;	// 24 = 0x18
	NSString *_label;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSString *_abDatabaseUUID;	// 36 = 0x24
	void *_addressBook;	// 40 = 0x28
}
@property(readonly, retain) NSString *label;	// G=0x34ff157d; converted property
@property(readonly, assign) int property;	// G=0x34ff0c41; converted property
@property(readonly, assign) int type;	// G=0x34ff0c81; converted property
@property(readonly, retain) NSString *value;	// G=0x34ff0c61; converted property
+ (void)_runLookup;	// 0x34ff19a9
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x34ff0cc5
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation addressBook:(void *)book;	// 0x34ff1675
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x34ff0ca1
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier type:(int)type;	// 0x34ff13b5
- (void *)ABPerson;	// 0x34ff154d
- (int)_abUid;	// 0x34ff0c91
- (void)_lookupChanged:(id)changed;	// 0x34ff10e9
- (void)_lookupNotFound;	// 0x34ff102d
- (void)_postEntryChanged;	// 0x34ff0fe5
- (void)_queueLookup;	// 0x34ff1879
- (void)_unqueueLookup;	// 0x34ff0f91
- (void)dealloc;	// 0x34ff15c5
- (id)dictionaryRepresentation;	// 0x34ff0cd9
- (void)dictionaryRepresentation:(id *)representation isDirty:(BOOL *)dirty;	// 0x34ff0e75
- (id)displayName;	// 0x34ff0c09
- (int)identifier;	// 0x34ff0c71
- (BOOL)isEqual:(id)equal;	// 0x34ff0eb1
// converted property getter: - (id)label;	// 0x34ff157d
- (id)nonLocalizedLabel;	// 0x34ff0c51
// converted property getter: - (int)property;	// 0x34ff0c41
- (void)recheckAddressBook;	// 0x34ff0f81
// converted property getter: - (int)type;	// 0x34ff0c81
// converted property getter: - (id)value;	// 0x34ff0c61
@end

