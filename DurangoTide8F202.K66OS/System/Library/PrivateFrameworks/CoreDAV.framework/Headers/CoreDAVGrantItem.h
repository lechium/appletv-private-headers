/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 24 = 0x18
}
@property(retain) NSMutableSet *privileges;	// G=0x317b4bc9; S=0x317b4be1; @synthesize=_privileges
- (id)init;	// 0x317b4925
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x317b4a4d
- (void)addPrivilege:(id)privilege;	// 0x317b480d
- (id)copyParseRules;	// 0x317b4835
- (void)dealloc;	// 0x317b4a11
- (id)description;	// 0x317b4951
// declared property getter: - (id)privileges;	// 0x317b4bc9
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x317b4be1
- (void)write:(id)write;	// 0x317b4ab1
@end

