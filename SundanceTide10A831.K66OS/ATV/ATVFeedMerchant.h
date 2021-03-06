/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMerchant.h"

@class ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVFeedMerchant : ATVMerchant {
	ATVJSContext *_javaScriptContext;	// 12 = 0xc
}
@property(readonly, assign) ATVJSContext *javaScriptContext;	// G=0x163335; 
- (id)initWithIdentifier:(id)identifier;	// 0x161dd1
- (void)_accountRemovedNotification:(id)notification;	// 0x1636fd
- (void)_installBootstrapResources:(id)resources;	// 0x1624a1
- (void)_installJavascriptWithConfiguration:(int)configuration completionHandler:(id)handler;	// 0x1629f9
- (void)_removeJavaScript;	// 0x162ec5
- (void)_runJavaScriptEntryWithCompletionHandler:(id)completionHandler;	// 0x162c31
- (void)_syncAccounts;	// 0x163031
- (id)accountType;	// 0x161ee9
- (Class)catalogAgent;	// 0x161ecd
- (id)controllerForScreensaverPhotosSelection;	// 0x161f91
- (void)dealloc;	// 0x161e51
- (void)decorateRequestProperties:(id)properties;	// 0x163411
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x16345d
// declared property getter: - (id)javaScriptContext;	// 0x163335
- (id)localizedStringForKey:(id)key;	// 0x1635a9
- (id)playerDelegate;	// 0x1636b5
- (id)rootController;	// 0x161f71
- (void)startApplication:(id)application;	// 0x1630dd
- (void)stopApplication;	// 0x163325
@end

