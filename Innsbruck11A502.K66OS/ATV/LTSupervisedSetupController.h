/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextWithSpinnerController.h"
#import "ATVAPTestResultDelegate.h"

@class NSTimer;
@protocol LTWirelessSetupResultDelegate;

__attribute__((visibility("hidden")))
@interface LTSupervisedSetupController : BRTextWithSpinnerController <ATVAPTestResultDelegate> {
	NSTimer *_waitForNetworkTimer;	// 120 = 0x78
	BOOL _completed;	// 124 = 0x7c
	id<LTWirelessSetupResultDelegate> _delegate;	// 128 = 0x80
}
@property(assign, nonatomic) __weak id<LTWirelessSetupResultDelegate> delegate;	// G=0x20f54d; S=0x20f56d; @synthesize=_delegate
- (void).cxx_destruct;	// 0x20f581
- (void)_finishedSetupWithStatus:(BOOL)status failureReason:(id)reason;	// 0x20f709
- (void)_installStoredProfile;	// 0x20fb8d
- (void)_networkStateChanged:(id)changed;	// 0x20fa11
- (void)_networkTimedOut:(id)anOut;	// 0x20f9c9
- (void)_runNetworkTest;	// 0x20fae9
- (void)_startSetup;	// 0x20f5b1
- (void)_validateNetwork;	// 0x20fa59
- (void)_waitForNetwork;	// 0x20f8f1
- (void)dealloc;	// 0x20f395
// declared property getter: - (id)delegate;	// 0x20f54d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x20f56d
- (void)testCompleted:(BOOL)completed;	// 0x20f42d
- (void)wasPopped;	// 0x20f335
- (void)wasPushed;	// 0x20f2b9
@end

