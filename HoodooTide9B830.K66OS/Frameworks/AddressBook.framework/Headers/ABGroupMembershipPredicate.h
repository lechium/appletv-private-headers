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
@private
	void *_group;	// 8 = 0x8
	void *_store;	// 12 = 0xc
	NSString *_accountIdentifier;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x34ec44e5; S=0x34ec458d; @synthesize=_accountIdentifier
@property(assign, nonatomic) void *group;	// G=0x34ec4505; S=0x34ec486d; @synthesize=_group
@property(assign, nonatomic) void *store;	// G=0x34ec44f5; S=0x34ec4839; @synthesize=_store
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x34ec469d
// declared property getter: - (id)accountIdentifier;	// 0x34ec44e5
- (void)dealloc;	// 0x34ec4515
- (id)description;	// 0x34ec45b1
// declared property getter: - (void *)group;	// 0x34ec4505
- (BOOL)isValid;	// 0x34ec44a5
- (id)queryWhereString;	// 0x34ec474d
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x34ec458d
// declared property setter: - (void)setGroup:(void *)group;	// 0x34ec486d
// declared property setter: - (void)setStore:(void *)store;	// 0x34ec4839
// declared property getter: - (void *)store;	// 0x34ec44f5
@end

