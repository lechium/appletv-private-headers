/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate {
	void *_group;	// 8 = 0x8
	void *_store;	// 12 = 0xc
	NSString *_accountIdentifier;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x31b49e61; S=0x31b49e75; @synthesize=_accountIdentifier
@property(assign, nonatomic) void *group;	// G=0x31b49e41; S=0x31b49b49; @synthesize=_group
@property(assign, nonatomic) void *store;	// G=0x31b49e51; S=0x31b49b7d; @synthesize=_store
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x31b49ca5
// declared property getter: - (id)accountIdentifier;	// 0x31b49e61
- (void)dealloc;	// 0x31b49a95
- (id)description;	// 0x31b49d61
// declared property getter: - (void *)group;	// 0x31b49e41
- (BOOL)isValid;	// 0x31b49b0d
- (id)queryWhereString;	// 0x31b49bb1
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x31b49e75
// declared property setter: - (void)setGroup:(void *)group;	// 0x31b49b49
// declared property setter: - (void)setStore:(void *)store;	// 0x31b49b7d
// declared property getter: - (void *)store;	// 0x31b49e51
@end
