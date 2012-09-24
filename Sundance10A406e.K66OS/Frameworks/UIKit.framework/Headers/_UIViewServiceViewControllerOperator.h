/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIViewServiceDeputyRotationSource.h"
#import "UIKit-Structs.h"
#import "_UIHostedTextServiceSessionDelegate.h"
#import "_UIViewServiceDummyPopoverControllerDelegate.h"
#import "_UIViewServiceDeputy.h"
#import "_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h"
#import "UIViewController.h"
#import "XPCProxyTarget.h"

@class UIPopoverController, UIActionSheet, _UIHostedWindow, _UIViewServiceDummyPopoverController, _UIHostedTextServiceSession, NSMutableArray, _UIAsyncInvocation;
@protocol _UIViewServiceDeputyDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerOperator : UIViewController <XPCProxyTarget, _UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {
	int _hostPID;	// 196 = 0xc4
	id _remoteViewControllerProxyToOperator;	// 200 = 0xc8
	id _remoteViewControllerProxyToViewController;	// 204 = 0xcc
	UIViewController *_localViewController;	// 208 = 0xd0
	_UIHostedWindow *_hostedWindow;	// 212 = 0xd4
	BOOL _isResigningFirstResponderFromHostNotification;	// 216 = 0xd8
	UIActionSheet *_hostedActionSheet;	// 220 = 0xdc
	BOOL _serviceInPopover;	// 224 = 0xe0
	int _hostStatusBarOrientation;	// 228 = 0xe4
	NSMutableArray *_deputyRotationDelegates;	// 232 = 0xe8
	unsigned _hostAccessibilityServerPort;	// 236 = 0xec
	id<_UIViewServiceDeputyDelegate> _delegate;	// 240 = 0xf0
	_UIHostedTextServiceSession *_textServiceSession;	// 244 = 0xf4
	_UIAsyncInvocation *_prepareForDisconnectionInvocation;	// 248 = 0xf8
	_UIAsyncInvocation *_invalidationInvocation;	// 252 = 0xfc
	int __automatic_invalidation_retainCount;	// 256 = 0x100
	BOOL __automatic_invalidation_invalidated;	// 260 = 0x104
	UIPopoverController *_displayedPopoverController;	// 264 = 0x108
	_UIViewServiceDummyPopoverController *_dummyPopoverController;	// 268 = 0x10c
	unsigned _supportedOrientations;	// 272 = 0x110
	BOOL _canShowTextServices;	// 276 = 0x114
}
+ (id)operatorWithRemoteViewControllerProxy:(id)remoteViewControllerProxy;	// 0x30caeb69
- (void)__alertIsAppearing:(id)appearing withFrameValue:(id)frameValue;	// 0x30cb2e71
- (void)__alertIsDisappearing:(id)disappearing;	// 0x30cb30f1
- (int)__automatic_invalidation_logic;	// 0x30cae901
- (void)__createViewController:(id)controller withAppearanceSerializedRepresentations:(id)appearanceSerializedRepresentations hostAccessibilityServerPort:(id)port canShowTextServices:(BOOL)services replyHandler:(id)handler;	// 0x30cb2705
- (void)__dimmingViewWasTapped;	// 0x30cb0e41
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)__host;	// 0x30cb1e55
- (void)__hostDidEnterBackground;	// 0x30cb1a69
- (void)__hostDidPromoteFirstResponder;	// 0x30cb2df9
- (void)__hostDidRotateFromInterfaceOrientation:(int)__host skipSelf:(BOOL)aSelf;	// 0x30cb2459
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)__host originalSource:(id)source;	// 0x30cb0421
- (void)__hostReadyToReceiveMessagesFromServiceViewController;	// 0x30cb12e9
- (void)__hostViewDidAppear:(BOOL)__hostView;	// 0x30cb1671
- (void)__hostViewDidDisappear:(BOOL)__hostView;	// 0x30cb1789
- (void)__hostViewWillAppear:(BOOL)__hostView inInterfaceOrientation:(int)interfaceOrientation completionHandler:(id)handler;	// 0x30cb1309
- (void)__hostViewWillDisappear:(BOOL)__hostView;	// 0x30cb170d
- (void)__hostWillAnimateRotationToInterfaceOrientation:(int)__host duration:(double)duration skipSelf:(BOOL)aSelf;	// 0x30cb216d
- (void)__hostWillEnterForeground;	// 0x30cb1af9
- (void)__hostWillRotateToInterfaceOrientation:(int)__host duration:(double)duration skipSelf:(BOOL)aSelf;	// 0x30cb1eb1
- (void)__hostedActionSheetClickedButtonAtIndex:(int)index;	// 0x30cb0b4d
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)__hostedActionSheet;	// 0x30cb0bcd
- (void)__hostedActionSheetDidPresent;	// 0x30cb0aa1
- (void)__prepareForDisconnectionWithCompletionHandler:(id)completionHandler;	// 0x30cb0c99
- (void)__scrollToTopFromTouchAtViewLocation:(id)viewLocation resultHandler:(id)handler;	// 0x30cb021d
- (void)__setContentSize:(id)size;	// 0x30cb2c25
- (void)__setServiceInPopover:(BOOL)popover;	// 0x30cb18c5
- (void)__textServiceDidDismiss;	// 0x30cb345d
- (id)_appearanceSource;	// 0x30cb03f5
- (BOOL)_canShowTextServices;	// 0x30cb3161
- (void)_didBecomeContentViewControllerOfPopover:(id)popover;	// 0x30cb0ec1
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x30cb0f51
- (void)_dismissActionSheet:(id)sheet withClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x30cb0a79
- (void)_firstResponderDidChange:(id)_firstResponder;	// 0x30cb05c5
- (CGRect)_frameForContainerViewInSheetForBounds:(CGRect)bounds;	// 0x30cb0ff1
- (CGRect)_frameForContainerViewInSheetForBounds:(CGRect)bounds displayingTopView:(BOOL)view andBottomView:(BOOL)view3;	// 0x30cb0f99
- (id)_inputViewsKey;	// 0x30cb3141
- (void)_invalidateUnconditionallyThen:(id)then;	// 0x30cafd05
- (BOOL)_isDeallocating;	// 0x30caeb3d
- (BOOL)_isHostedRootViewController;	// 0x30caffb9
- (void)_popoverDidDismiss:(id)_popover;	// 0x30cb0dfd
- (void)_popoverWillPresent:(id)_popover;	// 0x30cb0d5d
- (void)_prepareForDisconnectionUnconditionallyThen:(id)disconnectionUnconditionallyThen;	// 0x30caf8b1
- (void)_presentActionSheet:(id)sheet asPopoverFromBarButtonItem:(id)barButtonItem orFromRect:(CGRect)rect inView:(id)view withPreferredArrowDirections:(int)preferredArrowDirections passthroughViews:(id)views backgroundStyle:(id)style animated:(BOOL)animated;	// 0x30cb0989
- (void)_presentActionSheet:(id)sheet inView:(id)view fromYCoordinate:(float)ycoordinate;	// 0x30cb064d
- (BOOL)_shouldUseNextFirstResponder;	// 0x30cb0581
- (id)_showServiceForText:(id)text type:(int)type fromRect:(CGRect)rect inView:(id)view;	// 0x30cb31d1
- (id)_supportedInterfaceOrientationsForViewController:(id)viewController;	// 0x30cb26e1
- (BOOL)_tryRetain;	// 0x30caeaed
- (void)_updateSupportedInterfaceOrientationsIfNecessary;	// 0x30cb0125
- (void)_viewServiceIsDisplayingPopoverController:(id)controller;	// 0x30cb0d29
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x30cb0e79
- (void)_willResignContentViewControllerOfPopover:(id)popover;	// 0x30cb0f09
- (void)_windowDidRegisterScrollToTopView;	// 0x30cb0331
- (void)_windowDidUnregisterScrollToTopView;	// 0x30cb0351
- (void)_windowDidUpdateCurrentTintView:(id)_window;	// 0x30cb0371
- (void)addDeputyRotationDelegate:(id)delegate;	// 0x30cb0095
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x30cb0a01
- (CGSize)contentSizeForViewInPopover;	// 0x30cb1041
- (void)dealloc;	// 0x30caf1b1
- (id)defaultFirstResponder;	// 0x30cb0561
- (void)dismissHostedTextServiceSession:(id)session animated:(BOOL)animated;	// 0x30cb3429
- (void)dummyPopoverController:(id)controller didChangeContentSize:(CGSize)size animated:(BOOL)animated;	// 0x30cb1071
- (void)dummyPopoverController:(id)controller popoverViewDidSetUseToolbarShine:(BOOL)popoverView;	// 0x30cb1285
- (void)establishViewControllerDeputyWithProxy:(id)proxy completionHandler:(id)handler;	// 0x30caf34d
- (id)invalidate;	// 0x30cb12b9
- (void)loadView;	// 0x30cafeb9
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x30cb34f5
- (oneway void)release;	// 0x30caea19
- (id)retain;	// 0x30cae9e1
- (unsigned)retainCount;	// 0x30caead9
- (void)setDeputyDelegate:(id)delegate;	// 0x30cb12d9
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;	// 0x30caffbd
- (BOOL)shouldAutomaticallyForwardRotationMethods;	// 0x30caffc1
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30caffc5
- (unsigned)supportedInterfaceOrientations;	// 0x30caffe9
- (void)viewDidLoad;	// 0x30caff65
@end
