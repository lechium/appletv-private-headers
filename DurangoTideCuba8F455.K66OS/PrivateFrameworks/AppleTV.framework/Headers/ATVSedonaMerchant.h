/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMerchantRepresentativeFeed.h"
#import "ATVFeedMerchant.h"


__attribute__((visibility("hidden")))
@interface ATVSedonaMerchant : ATVFeedMerchant <ATVMerchantRepresentativeFeed> {
}
+ (void)_initializeLibrary;	// 0x306cf505
+ (int)_libraryInitializationCondtionsYetToBeMet;	// 0x306ce9ed
+ (void)initialize;	// 0x306cf215
- (id)initWithIdentifier:(id)identifier;	// 0x306cf35d
- (void)_authenticationSucceeded:(id)succeeded;	// 0x306ceb6d
- (void)_networkTimeReady:(id)ready;	// 0x306ceb25
- (void)_preferredAccountEstablished:(id)established;	// 0x306cebb5
- (void)_preferredAccountRemoved:(id)removed;	// 0x306cec45
- (id)accountType;	// 0x306cf1f5
- (Class)catalogAgent;	// 0x306cf1d5
- (void)dealloc;	// 0x306cf309
- (id)generateRequestForURL:(id)url headers:(id)headers method:(id)method;	// 0x306cf12d
- (id)loadRepresentativeFeed;	// 0x306ced11
- (id)localizedStringForKey:(id)key;	// 0x306cf431
- (id)merchantErrorForError:(id)error;	// 0x306cef31
- (id)representativeFeedURL;	// 0x306ce869
- (id)rootController;	// 0x306cecf1
@end

