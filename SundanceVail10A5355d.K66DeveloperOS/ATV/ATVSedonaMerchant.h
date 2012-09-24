/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedMerchant.h"


__attribute__((visibility("hidden")))
@interface ATVSedonaMerchant : ATVFeedMerchant {
	id _startApplicationCompletionHandler;	// 16 = 0x10
}
+ (void)initialize;	// 0x22792d
- (id)initWithIdentifier:(id)identifier;	// 0x227a61
- (BOOL)_ignoreNetflixAuthNotifications;	// 0x229151
- (BOOL)_initializeNetflixLibrary;	// 0x2282a9
- (void)_libraryStartFinished:(id)finished;	// 0x229631
- (void)_respondToSDKNotifications:(id)sdknotifications;	// 0x229851
- (void)_vendorInvalidCredentials:(id)credentials;	// 0x2291a1
- (void)_vendorOutOfDateSoftware:(id)dateSoftware;	// 0x2293f5
- (id)accountType;	// 0x227a45
- (void)dealloc;	// 0x22822d
- (void)decorateRequestProperties:(id)properties;	// 0x228a09
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method body:(id)body;	// 0x228bb5
- (id)localizedStringForKey:(id)key;	// 0x228c85
- (id)merchantErrorForError:(id)error;	// 0x228d05
- (id)rootController;	// 0x228f95
- (void)startApplication:(id)application;	// 0x228fb5
@end
