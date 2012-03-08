/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {
	NSMutableSet *_principalSearchProperties;	// 24 = 0x18
}
@property(retain) NSMutableSet *principalSearchProperties;	// G=0x30cb8415; S=0x30cb8429; @synthesize=_principalSearchProperties
- (id)init;	// 0x30cb8139
- (void)addPrincipalSearchProperty:(id)property;	// 0x30cb8379
- (id)copyParseRules;	// 0x30cb8275
- (void)dealloc;	// 0x30cb8165
- (id)description;	// 0x30cb81b1
// declared property getter: - (id)principalSearchProperties;	// 0x30cb8415
// declared property setter: - (void)setPrincipalSearchProperties:(id)properties;	// 0x30cb8429
@end

