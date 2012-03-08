/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface BRSoundHandler : BRSingleton {
@private
	BOOL _isSoundPrefEnabled;	// 4 = 0x4
	BOOL _soundSuppressed;	// 5 = 0x5
	unsigned long _soundIDs[23];	// 8 = 0x8
}
+ (void)playSound:(int)sound;	// 0x30371a15
+ (void)reloadSoundPreference;	// 0x30371a71
+ (void)setSingleton:(id)singleton;	// 0x30371a05
+ (void)setSoundSuppressed:(BOOL)suppressed;	// 0x30371a45
+ (id)singleton;	// 0x303719f5
- (id)init;	// 0x30371a99
- (unsigned long)_actionIDForAlertSound:(int)alertSound;	// 0x30371be1
- (BOOL)_allowedToPlaySound;	// 0x30371c71
- (void)_playSound:(int)sound;	// 0x30371cad
- (void)_reloadSoundPreference;	// 0x30371ced
- (void)_setSoundSuppressed:(BOOL)suppressed;	// 0x30371c9d
- (void)dealloc;	// 0x30371af5
@end

