/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSString, NSArray, NSDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVAirTunesManager : BRSingleton {
	NSArray *_pickableRoutes;	// 4 = 0x4
	NSArray *_pickableSpeakers;	// 8 = 0x8
	NSArray *_pickableScreens;	// 12 = 0xc
	NSString *_cachedMACAddress;	// 16 = 0x10
	NSDictionary *_cachedDefaultRoute;	// 20 = 0x14
	BOOL _hasAttemptedPINAuth;	// 24 = 0x18
	BOOL _selectedSpeakerDirty;	// 25 = 0x19
	BOOL _selectedRouteEnabled;	// 26 = 0x1a
	BOOL _updatesDisabledForScreenSaver;	// 27 = 0x1b
	BOOL _updatesDisabledForPlayback;	// 28 = 0x1c
	NSTimer *_disableRouteTimer;	// 32 = 0x20
}
@property(readonly, retain) NSArray *pickableScreens;	// G=0x1080cd; converted property
@property(readonly, retain) NSArray *pickableSpeakers;	// G=0x107e55; converted property
+ (void)setSingleton:(id)singleton;	// 0x107649
+ (id)singleton;	// 0x107639
- (id)init;	// 0x107659
- (void)_airPlayActiveAudioRouteChanged:(id)changed;	// 0x109611
- (void)_airPlayAuthFailed:(id)failed;	// 0x109165
- (void)_airPlayPickableRoutesChanged:(id)changed;	// 0x1094d5
- (id)_cachedMACAddress;	// 0x1090a5
- (void)_dismissDialogWithAnyPress:(id)anyPress;	// 0x108f4d
- (BOOL)_isRouteToMe:(id)me;	// 0x109115
- (void)_networkStateChanged:(id)changed;	// 0x109791
- (id)_newPasswordDialogForSpeaker:(id)speaker;	// 0x108bd9
- (void)_portStatusDidChange:(id)_portStatus;	// 0x1097bd
- (void)_refreshSpeakerUpdateState;	// 0x1078f9
- (void)_screenSaverActivated:(id)activated;	// 0x107879
- (void)_screenSaverDeactivated:(id)deactivated;	// 0x107899
- (BOOL)_selectRoute:(id)route withPassword:(id)password;	// 0x10874d
- (BOOL)_selectRoute:(id)route withPassword:(id)password isTransient:(BOOL)transient;	// 0x108771
- (id)_selectedSpeakerInfo;	// 0x107c61
- (void)_setSelectedSpeakerInfo:(id)info;	// 0x107e11
- (id)_supportedMediaTypes;	// 0x108f89
- (BOOL)airTunesAvailableForAsset:(id)asset;	// 0x107af1
- (BOOL)areAlternateSpeakersSelected;	// 0x107bd1
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0x108da1
- (void)dealloc;	// 0x107a25
- (id)defaultRoute;	// 0x1081f9
- (BOOL)destinationIsAppleTV;	// 0x107bed
- (BOOL)disableSelectedRoute;	// 0x108985
- (void)disableSelectedRouteWithDelay:(float)delay;	// 0x108a15
- (BOOL)doesSpeakerHavePINCode:(id)code;	// 0x1085b1
- (BOOL)doesSpeakerHavePassword:(id)password;	// 0x108579
- (BOOL)doesSpeakerSupportAirPlayAudio:(id)audio;	// 0x1085e9
- (BOOL)doesSpeakerSupportAirPlayScreen:(id)screen;	// 0x108659
- (BOOL)doesSpeakerSupportAirPlayVideo:(id)video;	// 0x108621
- (BOOL)enableSelectedRoute;	// 0x108919
- (BOOL)isActivelyUsingAlternateSpeakers;	// 0x107b95
- (BOOL)isSpeakerConnectedForInfo:(id)info;	// 0x1084d5
- (int)numPickableRoutes;	// 0x10832d
- (int)numPickableScreens;	// 0x10834d
- (int)numPickableSpeakers;	// 0x108375
- (void)pauseUpdatesForPlayback;	// 0x1078b9
// converted property getter: - (id)pickableScreens;	// 0x1080cd
// converted property getter: - (id)pickableSpeakers;	// 0x107e55
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0x10839d
- (id)remoteSpeakerInfoWithUID:(id)uid;	// 0x1083c9
- (void)resumeUpdatesForPlayback;	// 0x1078d9
- (BOOL)selectRoute:(id)route;	// 0x108a75
- (BOOL)selectRoute:(id)route isTransient:(BOOL)transient;	// 0x108a8d
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0x108e3d
- (id)speakerNameForInfo:(id)info;	// 0x1086b5
- (id)speakerUIDForInfo:(id)info;	// 0x108691
@end

