/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class ASAccount, NSString, ASTaskManager, ASPolicy;
@protocol ASPolicyPreflighterDelegate;

@interface ASPolicyPreflighter : NSObject {
	ASAccount *_account;	// 4 = 0x4
	NSString *_originalKey;	// 8 = 0x8
	NSString *_newKey;	// 12 = 0xc
	id<ASPolicyPreflighterDelegate> _delegate;	// 16 = 0x10
	ASPolicy *_policy;	// 20 = 0x14
	ASPolicy *_acknowledgedPolicy;	// 24 = 0x18
	ASTaskManager *_taskManager;	// 28 = 0x1c
	id _contextInfo;	// 32 = 0x20
	BOOL _invalidated;	// 36 = 0x24
}
@property(readonly, retain) ASAccount *account;	// G=0x33a27051; converted property
@property(retain) id contextInfo;	// G=0x33a26e2d; S=0x33a26df1; converted property
@property(assign) id delegate;	// G=0x33a26de1; S=0x33a26dd1; converted property
- (id)initWithAccount:(id)account policyKey:(id)key;	// 0x33a26f9d
- (id)_acknowledgedPolicy;	// 0x33a270e9
- (id)_originalKey;	// 0x33a270f9
- (void)_setAcknowledgedPolicy:(id)policy;	// 0x33a270a5
- (void)_setPolicy:(id)policy;	// 0x33a27061
// converted property getter: - (id)account;	// 0x33a27051
- (void)acknowledgeIntentionToRemoteWipe;	// 0x33a2770d
- (void)acknowledgePolicyCompliance;	// 0x33a2763d
- (void)cancelPendingPreflightRequest;	// 0x33a277c9
// converted property getter: - (id)contextInfo;	// 0x33a26e2d
- (void)dealloc;	// 0x33a26e6d
// converted property getter: - (id)delegate;	// 0x33a26de1
- (void)invalidate;	// 0x33a26e3d
- (void)provisionTask:(id)task failedWithError:(id)error;	// 0x33a2711d
- (void)provisionTask:(id)task wipeRequested:(BOOL)requested policies:(id)policies status:(int)status;	// 0x33a2713d
// converted property setter: - (void)setContextInfo:(id)info;	// 0x33a26df1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33a26dd1
- (void)startPreflight;	// 0x33a2753d
@end
