/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import </libobjc.A.h>

@class NSMutableArray;

@interface ABFavoritesListManager : NSObject {
	void *_addressBook;	// 4 = 0x4
	NSMutableArray *_list;	// 8 = 0x8
	CFDictionaryRef _uidToEntry;	// 12 = 0xc
	struct {
		unsigned dirty : 1;
		unsigned postCount : 1;
		unsigned needsReload : 1;
		unsigned unused : 29;
	} _flags;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x2c9e19f9
+ (id)sharedInstanceWithAddressBook:(void *)addressBook;	// 0x2c9e1a19
- (id)initWithAddressBook:(void *)addressBook;	// 0x2c9e1d09
- (void)_addEntryToMap:(id)map;	// 0x2c9e2475
- (void)_delayedLookup;	// 0x2c9e2e41
- (void)_entryIdentityChanged:(id)changed;	// 0x2c9e2771
- (void)_listChangedExternally;	// 0x2c9e2861
- (void)_loadList;	// 0x2c9e1ce9
- (void)_loadListWithAddressBook:(void *)addressBook;	// 0x2c9e1a65
- (void)_postChangeNotification;	// 0x2c9e281d
- (void)_removeEntryFromMap:(id)map withUid:(int)uid;	// 0x2c9e25b9
- (void)_scheduleSave;	// 0x2c9e1eb9
- (BOOL)_writeFavoritesToFile:(id)file;	// 0x2c9e2b45
- (void)addEntry:(id)entry;	// 0x2c9e28f9
- (BOOL)addEntryForPerson:(void *)person property:(int)property withIdentifier:(int)identifier;	// 0x2c9e23d9
- (BOOL)containsEntryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x2c9e2395
- (BOOL)containsEntryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x2c9e23b1
- (void)dealloc;	// 0x2c9e1dfd
- (id)entries;	// 0x2c9e1f39
- (id)entriesForPeople:(id)people;	// 0x2c9e1fcd
- (id)entriesForPerson:(void *)person;	// 0x2c9e215d
- (id)entryFromEntries:(id)entries type:(int)type property:(int)property identifier:(int)identifier value:(id)value label:(id)label;	// 0x2c9e21a1
- (id)entryFromEntries:(id)entries type:(int)type property:(int)property value:(id)value label:(id)label;	// 0x2c9e22e1
- (BOOL)entryIsDuplicateAndThusRemoved:(id)removed oldUid:(int)uid;	// 0x2c9e2e6d
- (id)entryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x2c9e2365
- (id)entryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x2c9e2319
- (BOOL)isFull;	// 0x2c9e1f75
- (void)moveEntryAtIndex:(int)index toIndex:(int)index2;	// 0x2c9e2aa1
- (void)recacheIdentitiesSoon;	// 0x2c9e2e09
- (void)removeAllEntries;	// 0x2c9e3019
- (void)removeEntryAtIndex:(int)index;	// 0x2c9e29e5
- (void)save;	// 0x2c9e2c9d
- (void)saveImmediately;	// 0x2c9e2711
@end
