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
@property(assign) id<ASPolicyManagerDelegate> delegate;	// G=0x36c6311d; S=0x36c63131; @synthesize=_delegate
@property(readonly, assign) BOOL updatingPolicy;	// G=0x36c63071; converted property
- (id)initWithAccount:(id)account;	// 0x36c62fcd
- (id)currentPolicyKey;	// 0x36c63089
// declared property getter: - (id)delegate;	// 0x36c6311d
- (void)policyKeyChanged:(id)changed;	// 0x36c63085
- (void)requestPolicyUpdate;	// 0x36c63081
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36c63131
// converted property getter: - (BOOL)updatingPolicy;	// 0x36c63071
@end
