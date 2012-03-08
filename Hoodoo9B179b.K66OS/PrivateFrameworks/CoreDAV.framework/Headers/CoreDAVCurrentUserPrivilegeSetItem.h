/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 24 = 0x18
}
@property(retain) NSMutableSet *privileges;	// G=0x30cb7d8d; S=0x30cb7da1; @synthesize=_privileges
- (id)init;	// 0x30cb78b5
- (void)addPrivilege:(id)privilege;	// 0x30cb7af5
- (id)copyParseRules;	// 0x30cb79f1
- (void)dealloc;	// 0x30cb78e1
- (id)description;	// 0x30cb792d
- (BOOL)hasPrivilegeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x30cb7b91
// declared property getter: - (id)privileges;	// 0x30cb7d8d
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x30cb7da1
@end

