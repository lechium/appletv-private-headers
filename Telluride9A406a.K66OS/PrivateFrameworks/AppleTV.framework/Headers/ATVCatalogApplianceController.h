/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"
#import "BRSecureResource.h"

@class NSTimer, BRURLDocument, BRMerchant, BRPanelControl, BRControl;

@interface ATVCatalogApplianceController : BRController <BRSecureResource> {
@private
	BRPanelControl *_contentContainer;	// 80 = 0x50
	id _storeObject;	// 84 = 0x54
	BRControl *_catalogControl;	// 88 = 0x58
	BOOL _controllerToSwapOnActivate;	// 92 = 0x5c
	long _state;	// 96 = 0x60
	NSTimer *_timer;	// 100 = 0x64
	BOOL _isDirty;	// 104 = 0x68
	BOOL _isVolatile;	// 105 = 0x69
	BOOL _autoPlay;	// 106 = 0x6a
	BRMerchant *_merchant;	// 108 = 0x6c
	Class _catalogAgent;	// 112 = 0x70
	BRURLDocument *_document;	// 116 = 0x74
	BOOL requiresAuthentication;	// 120 = 0x78
	BOOL _shouldStartWaitPromptTimerOnActivate;	// 121 = 0x79
}
@property(assign, nonatomic) BOOL autoPlay;	// G=0x32f2d275; S=0x32f2d285; @synthesize=_autoPlay
@property(readonly, retain) BRControl *catalogControl;	// G=0x32f2d2e5; converted property
@property(readonly, retain) BRPanelControl *contentContainer;	// G=0x32f2d2d5; converted property
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x32f2cecd; S=0x32f2ce49; 
@property(assign, nonatomic) BOOL requiresAuthentication;	// G=0x32f2d295; S=0x32f2d2a5; @synthesize
@property(assign, nonatomic) BOOL shouldStartWaitPromptTimerOnActivate;	// G=0x32f2d2b5; S=0x32f2d2c5; @synthesize=_shouldStartWaitPromptTimerOnActivate
@property(retain) id storeObject;	// G=0x32f2d00d; S=0x32f2cfcd; converted property
+ (id)control;	// 0x32f2c9f1
+ (id)controlWithMerchantLikeControl:(id)merchantLikeControl;	// 0x32f2c99d
+ (void)initialize;	// 0x32f2c8f1
- (id)init;	// 0x32f2ca29
- (void)_controlCreated:(id)created;	// 0x32f2e111
- (void)_controlNeedsAuth:(id)auth;	// 0x32f2e59d
- (void)_enterCompleteState;	// 0x32f2dbb1
- (void)_enterErrorState;	// 0x32f2d9ed
- (void)_enterWaitingForAuthState;	// 0x32f2da69
- (void)_enterWaitingForControlState;	// 0x32f2da7d
- (void)_enterWaitingForInitialState;	// 0x32f2d969
- (void)_handleWaitingForControlAction:(int)controlAction;	// 0x32f2de0d
- (void)_showWaitTimer:(id)timer;	// 0x32f2ddbd
- (void)_swapInNewController:(id)newController;	// 0x32f2deb9
- (void)_updateStateForAction:(int)action;	// 0x32f2de51
- (id)accessibilityLabel;	// 0x32f2d121
- (void)addControls;	// 0x32f2d6cd
// declared property getter: - (BOOL)autoPlay;	// 0x32f2d275
// converted property getter: - (id)catalogControl;	// 0x32f2d2e5
// converted property getter: - (id)contentContainer;	// 0x32f2d2d5
- (void)controlWasActivated;	// 0x32f2cbf9
- (void)controlWasDeactivated;	// 0x32f2cd89
- (void)dealloc;	// 0x32f2cb41
- (void)didEnterErrorState;	// 0x32f2d95d
- (id)errorContent;	// 0x32f2d525
- (BOOL)isNetworkDependent;	// 0x32f2ce45
- (void)layoutSubcontrols;	// 0x32f2d069
- (void)markAsDirty;	// 0x32f2d045
// declared property getter: - (id)merchant;	// 0x32f2cecd
- (BOOL)recreateOnReselect;	// 0x32f2d02d
- (void)refreshDirtyPage;	// 0x32f2d899
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x32f2d21d
// declared property getter: - (BOOL)requiresAuthentication;	// 0x32f2d295
// declared property setter: - (void)setAutoPlay:(BOOL)play;	// 0x32f2d285
- (void)setCatalogAgent:(Class)agent;	// 0x32f2d059
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x32f2ce49
// declared property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x32f2d2a5
// declared property setter: - (void)setShouldStartWaitPromptTimerOnActivate:(BOOL)startWaitPromptTimerOnActivate;	// 0x32f2d2c5
// converted property setter: - (void)setStoreObject:(id)object;	// 0x32f2cfcd
- (void)setStoreObject:(id)object changeState:(BOOL)state;	// 0x32f2d2f5
- (void)setStoreObject:(id)object fromMerchant:(id)merchant;	// 0x32f2cedd
- (BOOL)shouldAllowControllerContent;	// 0x32f2d965
- (BOOL)shouldAllowTransitionOnSwap;	// 0x32f2d961
- (BOOL)shouldShowWaitContent;	// 0x32f2d521
// declared property getter: - (BOOL)shouldStartWaitPromptTimerOnActivate;	// 0x32f2d2b5
- (id)storeMerchant;	// 0x32f2d01d
// converted property getter: - (id)storeObject;	// 0x32f2d00d
- (void)updateContent:(id)content;	// 0x32f2d6d1
- (id)waitContent;	// 0x32f2d415
- (float)waitContentDelay;	// 0x32f2d519
- (void)wasPopped;	// 0x32f2cddd
- (void)willEnterCompleteState;	// 0x32f2d959
@end

