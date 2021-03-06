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
@property(retain) NSMutableSet *principalSearchProperties;	// G=0x31c52d05; S=0x31c52d19; @synthesize=_principalSearchProperties
- (id)init;	// 0x31c52a29
- (void)addPrincipalSearchProperty:(id)property;	// 0x31c52c69
- (id)copyParseRules;	// 0x31c52b65
- (void)dealloc;	// 0x31c52a55
- (id)description;	// 0x31c52aa1
// declared property getter: - (id)principalSearchProperties;	// 0x31c52d05
// declared property setter: - (void)setPrincipalSearchProperties:(id)properties;	// 0x31c52d19
@end

