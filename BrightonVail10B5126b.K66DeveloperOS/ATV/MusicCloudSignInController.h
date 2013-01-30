/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "BRSecureResource.h"


__attribute__((visibility("hidden")))
@interface MusicCloudSignInController : BRController <BRSecureResource> {
	BOOL _shouldAskToTurnOnCloud;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL _shouldAskToTurnOnCloud;	// G=0x78b75; S=0x78b85; @synthesize
- (id)init;	// 0x785bd
// declared property getter: - (BOOL)_shouldAskToTurnOnCloud;	// 0x78b75
- (id)secureResourceAuthenticator;	// 0x78705
// declared property setter: - (void)set_shouldAskToTurnOnCloud:(BOOL)turnOnCloud;	// 0x78b85
- (void)wasPushed;	// 0x78789
@end
