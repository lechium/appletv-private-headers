/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet, CoreDAVItemWithNoChildren;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem {
	NSMutableSet *_emailAddresses;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_unauthenticated;	// 28 = 0x1c
}
@property(retain) NSMutableSet *emailAddresses;	// G=0x30076659; S=0x3007666d; @synthesize=_emailAddresses
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x30076691; S=0x300766a5; @synthesize=_unauthenticated
- (id)init;	// 0x30076299
- (void)addEmailAddress:(id)address;	// 0x300765bd
- (id)copyParseRules;	// 0x3007640d
- (void)dealloc;	// 0x300762c5
- (id)description;	// 0x30076325
// declared property getter: - (id)emailAddresses;	// 0x30076659
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x3007666d
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x300766a5
// declared property getter: - (id)unauthenticated;	// 0x30076691
@end

