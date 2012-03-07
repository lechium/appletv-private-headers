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
@property(readonly, retain) NSString *label;	// G=0x35aaf641; converted property
@property(readonly, assign) int property;	// G=0x35aaed05; converted property
@property(readonly, assign) int type;	// G=0x35aaed45; converted property
@property(readonly, retain) NSString *value;	// G=0x35aaed25; converted property
+ (void)_runLookup;	// 0x35aafa6d
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x35aaed89
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation addressBook:(void *)book;	// 0x35aaf739
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x35aaed65
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier type:(int)type;	// 0x35aaf479
- (void *)ABPerson;	// 0x35aaf611
- (int)_abUid;	// 0x35aaed55
- (void)_lookupChanged:(id)changed;	// 0x35aaf1ad
- (void)_lookupNotFound;	// 0x35aaf0f1
- (void)_postEntryChanged;	// 0x35aaf0a9
- (void)_queueLookup;	// 0x35aaf93d
- (void)_unqueueLookup;	// 0x35aaf055
- (void)dealloc;	// 0x35aaf689
- (id)dictionaryRepresentation;	// 0x35aaed9d
- (void)dictionaryRepresentation:(id *)representation isDirty:(BOOL *)dirty;	// 0x35aaef39
- (id)displayName;	// 0x35aaeccd
- (int)identifier;	// 0x35aaed35
- (BOOL)isEqual:(id)equal;	// 0x35aaef75
// converted property getter: - (id)label;	// 0x35aaf641
- (id)nonLocalizedLabel;	// 0x35aaed15
// converted property getter: - (int)property;	// 0x35aaed05
- (void)recheckAddressBook;	// 0x35aaf045
// converted property getter: - (int)type;	// 0x35aaed45
// converted property getter: - (id)value;	// 0x35aaed25
@end
