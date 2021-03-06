/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacAuthentication.h"
#import "ATVInternetPhotosCollection.h"

@class NSString, ATVDotMacSecondaryAccount;

__attribute__((visibility("hidden")))
@interface ATVDotMacCollection : ATVInternetPhotosCollection <ATVDotMacAuthentication> {
	ATVDotMacSecondaryAccount *_secondaryAccount;	// 64 = 0x40
	BOOL _requiresAuthentication;	// 68 = 0x44
	NSString *_keyImageDotMacIdentifier;	// 72 = 0x48
	BOOL _initialAuthCheckComplete;	// 76 = 0x4c
}
@property(assign) BOOL initialAuthCheckComplete;	// G=0x19ccf5; S=0x19cd05; converted property
@property(retain) NSString *keyImageDotMacIdentifier;	// G=0x19c465; S=0x19c541; converted property
@property(assign) BOOL requiresAuthentication;	// G=0x19ca95; S=0x19caa5; converted property
@property(retain) ATVDotMacSecondaryAccount *secondaryAccount;	// G=0x19cab5; S=0x19cb91; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x19c175
- (id)archivableCollectionInfo;	// 0x19c74d
- (void)dealloc;	// 0x19c38d
- (id)imageProxy;	// 0x19c9cd
// converted property getter: - (BOOL)initialAuthCheckComplete;	// 0x19ccf5
- (BOOL)isAuthenticated;	// 0x19ca7d
- (id)keyAsset;	// 0x19c629
// converted property getter: - (id)keyImageDotMacIdentifier;	// 0x19c465
- (id)mediaTypes;	// 0x19c94d
- (id)photoAssets;	// 0x19c3f1
// converted property getter: - (BOOL)requiresAuthentication;	// 0x19ca95
// converted property getter: - (id)secondaryAccount;	// 0x19cab5
// converted property setter: - (void)setInitialAuthCheckComplete:(BOOL)complete;	// 0x19cd05
// converted property setter: - (void)setKeyImageDotMacIdentifier:(id)identifier;	// 0x19c541
// converted property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x19caa5
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x19cb91
@end

