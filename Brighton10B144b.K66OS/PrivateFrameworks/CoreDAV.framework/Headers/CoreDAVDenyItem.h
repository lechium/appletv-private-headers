/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVDenyItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 28 = 0x1c
}
@property(retain) NSMutableSet *privileges;	// G=0x33715b4d; S=0x33715b61; @synthesize=_privileges
+ (id)copyParseRules;	// 0x33715931
- (id)init;	// 0x337156b1
- (void)addPrivilege:(id)privilege;	// 0x33715ab5
- (void)dealloc;	// 0x337156dd
- (id)description;	// 0x33715729
// declared property getter: - (id)privileges;	// 0x33715b4d
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x33715b61
- (void)write:(id)write;	// 0x337157ed
@end

