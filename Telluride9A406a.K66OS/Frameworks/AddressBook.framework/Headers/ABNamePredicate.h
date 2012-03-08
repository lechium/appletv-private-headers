/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSString;

@interface ABNamePredicate : ABPredicate {
@private
	void *_addressBook;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	void *_source;	// 16 = 0x10
	void *_group;	// 20 = 0x14
	NSString *_accountIdentifier;	// 24 = 0x18
	BOOL _showPersonLinks;	// 28 = 0x1c
	BOOL _matchWholeWords;	// 29 = 0x1d
	BOOL _matchNameOnly;	// 30 = 0x1e
	CFArrayRef _tokenizations;	// 32 = 0x20
	CFArrayRef _tokenizationSortKeys;	// 36 = 0x24
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x31912b85; S=0x31912be1; @synthesize=_accountIdentifier
@property(assign, nonatomic) void *addressBook;	// G=0x31912b95; S=0x31913161; @synthesize=_addressBook
@property(assign, nonatomic) void *group;	// G=0x31912b15; S=0x319130c9; @synthesize=_group
@property(assign, nonatomic) BOOL matchNameOnly;	// G=0x31912b25; S=0x31912b35; @synthesize=_matchNameOnly
@property(assign, nonatomic) BOOL matchWholeWords;	// G=0x31912b45; S=0x31912b55; @synthesize=_matchWholeWords
@property(copy, nonatomic) NSString *name;	// G=0x31912ba5; S=0x319130fd; @synthesize=_name
@property(assign, nonatomic) BOOL showPersonLinks;	// G=0x31912b65; S=0x31912b75; @synthesize=_showPersonLinks
@property(assign, nonatomic) void *source;	// G=0x31912b05; S=0x31913095; @synthesize=_source
@property(readonly, assign) CFArrayRef tokenizations;	// G=0x31913055; converted property
- (id)init;	// 0x31912bb5
- (void)_doBindingWithStatement:(CPSqliteStatement *)statement bindingOffset:(int *)offset;	// 0x31912ced
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x31912ca9
// declared property getter: - (id)accountIdentifier;	// 0x31912b85
// declared property getter: - (void *)addressBook;	// 0x31912b95
- (void)dealloc;	// 0x31913195
// declared property getter: - (void *)group;	// 0x31912b15
- (BOOL)isValid;	// 0x31913029
// declared property getter: - (BOOL)matchNameOnly;	// 0x31912b25
// declared property getter: - (BOOL)matchWholeWords;	// 0x31912b45
// declared property getter: - (id)name;	// 0x31912ba5
- (id)predicateFormat;	// 0x31912c05
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x31913001
- (id)queryWhereString;	// 0x31912dad
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x31912be1
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x31913161
// declared property setter: - (void)setGroup:(void *)group;	// 0x319130c9
// declared property setter: - (void)setMatchNameOnly:(BOOL)only;	// 0x31912b35
// declared property setter: - (void)setMatchWholeWords:(BOOL)words;	// 0x31912b55
// declared property setter: - (void)setName:(id)name;	// 0x319130fd
// declared property setter: - (void)setShowPersonLinks:(BOOL)links;	// 0x31912b75
// declared property setter: - (void)setSource:(void *)source;	// 0x31913095
// declared property getter: - (BOOL)showPersonLinks;	// 0x31912b65
// declared property getter: - (void *)source;	// 0x31912b05
// converted property getter: - (CFArrayRef)tokenizations;	// 0x31913055
@end

