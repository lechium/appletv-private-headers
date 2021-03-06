/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {
	NSMutableSet *_accessControlEntities;	// 24 = 0x18
}
@property(retain) NSMutableSet *accessControlEntities;	// G=0x32c50f5d; S=0x32c50f71; @synthesize=_accessControlEntities
- (id)init;	// 0x32c506f1
// declared property getter: - (id)accessControlEntities;	// 0x32c50f5d
- (void)addACE:(id)ace;	// 0x32c50931
- (id)copyParseRules;	// 0x32c5082d
- (void)dealloc;	// 0x32c5071d
- (id)description;	// 0x32c50769
- (id)liveACEs;	// 0x32c50ee9
- (id)notGrantedSubsetOfACEs:(id)aces;	// 0x32c509cd
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x32c50f71
@end

