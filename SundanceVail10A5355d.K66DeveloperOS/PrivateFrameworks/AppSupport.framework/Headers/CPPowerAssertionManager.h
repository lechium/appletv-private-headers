/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSCountedSet, NSMutableSet, NSString;
@protocol CPPowerAssertionManagerDelegate;

@interface CPPowerAssertionManager : NSObject {
	NSString *_uuid;	// 4 = 0x4
	NSCountedSet *_contexts;	// 8 = 0x8
	NSMutableDictionary *_groupIdentifierToContexts;	// 12 = 0xc
	CFDictionaryRef _contextToGroupIdentifier;	// 16 = 0x10
	NSMutableSet *_heldAsideGroupIdentifiers;	// 20 = 0x14
	NSCountedSet *_heldAsideContexts;	// 24 = 0x18
	id<CPPowerAssertionManagerDelegate> _delegate;	// 28 = 0x1c
}
@property(assign) id<CPPowerAssertionManagerDelegate> delegate;	// G=0x331d9215; S=0x331d9229; @synthesize=_delegate
@property(readonly, assign) NSString *uuid;	// G=0x331d7d11; @synthesize=_uuid
+ (id)sharedInstance;	// 0x331d7fa9
- (id)init;	// 0x331d8095
- (void)_releaseAssertions;	// 0x331d91b1
- (void)_retainAssertions;	// 0x331d914d
- (void)dealloc;	// 0x331d81bd
// declared property getter: - (id)delegate;	// 0x331d9215
- (id)description;	// 0x331d8abd
- (void)releasePowerAssertionWithContext:(id)context;	// 0x331d8775
- (void)reretainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x331d8e95
- (unsigned)retainCountForContext:(id)context;	// 0x331d7e31
- (void)retainPowerAssertionWithContext:(id)context;	// 0x331d8485
- (void)retainPowerAssertionWithContext:(id)context withGroupIdentifier:(id)groupIdentifier;	// 0x331d8499
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x331d9229
- (void)setUUIDPrefix:(id)prefix;	// 0x331d8281
- (void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x331d8bdd
// declared property getter: - (id)uuid;	// 0x331d7d11
@end

