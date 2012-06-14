/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {
	NSArray *_policies;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	BOOL _remoteWipe;	// 48 = 0x30
	NSString *_policyType;	// 52 = 0x34
}
@property(readonly, retain) NSArray *policies;	// G=0x309986cd; converted property
@property(retain) NSString *policyType;	// G=0x30998679; S=0x30998689; converted property
@property(readonly, assign) BOOL remoteWipe;	// G=0x309986ed; converted property
@property(readonly, retain) NSNumber *status;	// G=0x309986dd; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x309983fd
+ (BOOL)frontingBasicTypes;	// 0x309984f9
+ (BOOL)notifyOfUnknownTokens;	// 0x3099854d
+ (BOOL)parsingLeafNode;	// 0x30998451
+ (BOOL)parsingWithSubItems;	// 0x309984a5
- (id)init;	// 0x30998619
- (id)initWithPolicyType:(id)policyType;	// 0x30998639
- (void)_setPolicies:(id)policies;	// 0x309986fd
- (void)_setRemoteWipe:(id)wipe;	// 0x30998741
- (void)_setStatus:(id)status;	// 0x30998755
- (id)asParseRules;	// 0x30998799
- (void)dealloc;	// 0x309985a1
- (id)description;	// 0x30998b59
// converted property getter: - (id)policies;	// 0x309986cd
// converted property getter: - (id)policyType;	// 0x30998679
// converted property getter: - (BOOL)remoteWipe;	// 0x309986ed
// converted property setter: - (void)setPolicyType:(id)type;	// 0x30998689
// converted property getter: - (id)status;	// 0x309986dd
@end

