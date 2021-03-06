/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import </libobjc.A.h>

@class NSCountedSet, NSMutableSet, NSMutableDictionary;

@interface DAPowerAssertionManager : NSObject {
	NSCountedSet *_contexts;	// 4 = 0x4
	NSMutableDictionary *_groupIdentifierToContexts;	// 8 = 0x8
	CFDictionaryRef _contextToGroupIdentifier;	// 12 = 0xc
	NSMutableSet *_heldAsideGroupIdentifiers;	// 16 = 0x10
	NSCountedSet *_heldAsideContexts;	// 20 = 0x14
	CFDictionaryRef _contextToPowerAssertionRef;	// 24 = 0x18
}
+ (id)sharedPowerAssertionManager;	// 0x30827291
+ (void)vendDaemons:(Class)daemons;	// 0x30827281
- (id)init;	// 0x30827081
- (void)_releaseAssertionForContext:(id)context;	// 0x30828569
- (void)_retainAssertionForContext:(id)context;	// 0x30828441
- (void)dealloc;	// 0x308271c5
- (void)dropPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x30827d6d
- (unsigned)powerAssertionRetainCount:(id)count;	// 0x308273ad
- (void)reattainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x308280d5
- (void)releasePowerAssertion:(id)assertion;	// 0x3082791d
- (void)retainPowerAssertion:(id)assertion withGroupIdentifier:(id)groupIdentifier;	// 0x30827529
- (id)stateString;	// 0x30827c65
@end

