/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@protocol ASPolicyManagerDelegate;

@interface ASPolicyManager : NSObject {
	id _delegate;	// 4 = 0x4
	BOOL _updatingPolicy;	// 8 = 0x8
}
@property(assign) id<ASPolicyManagerDelegate> delegate;	// G=0x344227fd; S=0x3442280d; @synthesize=_delegate
@property(readonly, assign) BOOL updatingPolicy;	// G=0x34422751; converted property
- (id)initWithAccount:(id)account;	// 0x344226b5
- (id)currentPolicyKey;	// 0x34422769
// declared property getter: - (id)delegate;	// 0x344227fd
- (void)policyKeyChanged:(id)changed;	// 0x34422765
- (void)requestPolicyUpdate;	// 0x34422761
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3442280d
// converted property getter: - (BOOL)updatingPolicy;	// 0x34422751
@end

