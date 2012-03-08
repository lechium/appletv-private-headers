/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSCountedSet, NSString, NSMutableSet;
@protocol CPPowerAssertionManagerDelegate;

@interface CPPowerAssertionManager : NSObject {
@private
	NSString *_uuid;	// 4 = 0x4
	NSCountedSet *_contexts;	// 8 = 0x8
	NSMutableDictionary *_groupIdentifierToContexts;	// 12 = 0xc
	CFDictionaryRef _contextToGroupIdentifier;	// 16 = 0x10
	NSMutableSet *_heldAsideGroupIdentifiers;	// 20 = 0x14
	NSCountedSet *_heldAsideContexts;	// 24 = 0x18
	id<CPPowerAssertionManagerDelegate> _delegate;	// 28 = 0x1c
}
@property(assign) id<CPPowerAssertionManagerDelegate> delegate;	// G=0x3339d369; S=0x3339d379; @synthesize=_delegate
@property(readonly, assign) NSString *uuid;	// G=0x3339e6a9; @synthesize=_uuid
+ (id)sharedInstance;	// 0x3339d501
- (id)init;	// 0x3339e579
- (void)_releaseAssertions;	// 0x3339d5ed
- (void)_retainAssertions;	// 0x3339d655
- (void)dealloc;	// 0x3339e4b5
// declared property getter: - (id)delegate;	// 0x3339d369
- (id)description;	// 0x3339dbc1
- (void)releasePowerAssertionWithContext:(id)context;	// 0x3339dcd9
- (void)reretainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x3339d6bd
- (unsigned)retainCountForContext:(id)context;	// 0x3339d39d
- (void)retainPowerAssertionWithContext:(id)context;	// 0x3339d389
- (void)retainPowerAssertionWithContext:(id)context withGroupIdentifier:(id)groupIdentifier;	// 0x3339dff1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3339d379
- (void)setUUIDPrefix:(id)prefix;	// 0x3339e2a9
- (void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x3339d939
// declared property getter: - (id)uuid;	// 0x3339e6a9
@end

