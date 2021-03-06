/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface ABPersonLinker : NSObject {
	void *_addressBook;	// 4 = 0x4
	NSMutableDictionary *_peopleByFirstName;	// 8 = 0x8
	NSMutableDictionary *_peopleByLastName;	// 12 = 0xc
	NSMutableDictionary *_peopleByOrganization;	// 16 = 0x10
}
+ (BOOL)isLinkDataValidForAddressBook:(void *)addressBook;	// 0x31b4e60d
+ (void)startAutoLinkingNewPeopleInAddressBook:(void *)addressBook inProcess:(BOOL)process;	// 0x31b4e62d
- (id)init;	// 0x31b4e779
- (id)initWithAddressBook:(void *)addressBook;	// 0x31b4e72d
- (void)addPerson:(void *)person toDictionary:(id)dictionary withProperty:(int)property;	// 0x31b4f841
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)rowidgreatThan withLimit:(int)limit;	// 0x31b501fd
- (void)dealloc;	// 0x31b4e7f5
- (void)linkNewlyAddedPerson:(void *)person;	// 0x31b50409
- (void)linkRecentlyAddedPeople;	// 0x31b503f5
- (BOOL)linkRecentlyAddedPeopleWithLimit:(int)limit;	// 0x31b502a5
- (void)makeInitialLinks;	// 0x31b501e9
- (void)makeInitialLinksCountingOuterIterations:(int *)iterations;	// 0x31b501c9
- (void)makeLinksForAddedPeople:(id)addedPeople inInitialLinking:(BOOL)initialLinking countingOuterIterations:(int *)iterations;	// 0x31b4fac9
- (id)otherPeopleInArray:(id)array matchingPerson:(void *)person;	// 0x31b4f071
- (id)otherPeopleInDatabaseMatchingPerson:(void *)databaseMatchingPerson notIncludingPeople:(id)people;	// 0x31b4e881
- (void)presortPeople:(id)people;	// 0x31b4f901
- (void)removeAllLinks;	// 0x31b50091
- (BOOL)shouldLinkPerson:(void *)person toPeopleInDatabase:(id)database andNewlyAddedPeople:(id)people inInitialLinking:(BOOL)initialLinking;	// 0x31b4f3dd
- (id)suggestedPeopleToLinkWithPerson:(void *)person isInitialLinking:(BOOL)linking;	// 0x31b4f7ed
@end

