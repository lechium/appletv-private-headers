/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSecureResource.h"
#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface MusicCloudController : BRViewController <BRSecureResource> {
	BOOL _shouldAskToTurnOnCloud;	// 104 = 0x68
	BOOL _shouldAuthenticate;	// 105 = 0x69
}
@property(assign, nonatomic) BOOL shouldAskToTurnOnCloud;	// G=0x289b79; S=0x289b89; @synthesize=_shouldAskToTurnOnCloud
@property(assign, nonatomic) BOOL shouldAuthenticate;	// G=0x289b99; S=0x289ba9; @synthesize=_shouldAuthenticate
+ (id)musicCloudMainController;	// 0x288a6d
- (id)initWithAuthentication:(BOOL)authentication;	// 0x288e0d
- (void)_dataClientConnectionHandler:(id)handler;	// 0x2892cd
- (void)_handleConnectedStatus;	// 0x2893d9
- (void)_handleFailedStatus;	// 0x2899bd
- (id)accessibilityLabel;	// 0x28910d
- (BOOL)brEventAction:(id)action;	// 0x289009
- (BOOL)isAccessibilityElement;	// 0x289109
- (void)layoutSubcontrols;	// 0x289155
- (id)secureResourceAuthenticator;	// 0x288f6d
- (void)setMusicSyncStatus:(int)status;	// 0x289a59
// declared property setter: - (void)setShouldAskToTurnOnCloud:(BOOL)askToTurnOnCloud;	// 0x289b89
// declared property setter: - (void)setShouldAuthenticate:(BOOL)authenticate;	// 0x289ba9
// declared property getter: - (BOOL)shouldAskToTurnOnCloud;	// 0x289b79
// declared property getter: - (BOOL)shouldAuthenticate;	// 0x289b99
- (void)wasPushed;	// 0x2891c9
@end

