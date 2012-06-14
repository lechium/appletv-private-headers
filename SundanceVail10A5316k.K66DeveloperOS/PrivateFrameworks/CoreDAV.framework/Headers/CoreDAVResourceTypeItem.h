/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_addressBook;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_searchAddressBook;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_shared;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_principal;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_collection;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_unauthenticated;	// 44 = 0x2c
}
@property(retain) CoreDAVItemWithNoChildren *addressBook;	// G=0x35f777a9; S=0x35f777bd; @synthesize=_addressBook
@property(retain) CoreDAVItemWithNoChildren *collection;	// G=0x35f77839; S=0x35f7784d; @synthesize=_collection
@property(retain) CoreDAVItemWithNoChildren *principal;	// G=0x35f77815; S=0x35f77829; @synthesize=_principal
@property(retain) CoreDAVItemWithNoChildren *searchAddressBook;	// G=0x35f777cd; S=0x35f777e1; @synthesize=_searchAddressBook
@property(retain) CoreDAVItemWithNoChildren *shared;	// G=0x35f777f1; S=0x35f77805; @synthesize=_shared
@property(readonly, assign) NSSet *stringSet;	// G=0x35f7707d; 
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x35f7785d; S=0x35f77871; @synthesize=_unauthenticated
+ (id)copyParseRules;	// 0x35f76a65
- (id)init;	// 0x35f76811
// declared property getter: - (id)addressBook;	// 0x35f777a9
// declared property getter: - (id)collection;	// 0x35f77839
- (void)dealloc;	// 0x35f7683d
- (id)description;	// 0x35f768f1
- (BOOL)isTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35f77541
// declared property getter: - (id)principal;	// 0x35f77815
// declared property getter: - (id)searchAddressBook;	// 0x35f777cd
// declared property setter: - (void)setAddressBook:(id)book;	// 0x35f777bd
// declared property setter: - (void)setCollection:(id)collection;	// 0x35f7784d
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x35f77829
// declared property setter: - (void)setSearchAddressBook:(id)book;	// 0x35f777e1
// declared property setter: - (void)setShared:(id)shared;	// 0x35f77805
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x35f77871
// declared property getter: - (id)shared;	// 0x35f777f1
// declared property getter: - (id)stringSet;	// 0x35f7707d
// declared property getter: - (id)unauthenticated;	// 0x35f7785d
- (void)write:(id)write;	// 0x35f76e9d
@end

