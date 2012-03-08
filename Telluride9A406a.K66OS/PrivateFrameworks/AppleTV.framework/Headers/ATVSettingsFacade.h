/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSettingsFacade.h"


@interface ATVSettingsFacade : BRSettingsFacade {
@private
	id _screenSaverSetCollectionBlock;	// 12 = 0xc
}
@property(assign) BOOL airTunesControlFromSpeakerIsEnabled;	// G=0x32f96d55; S=0x32f96d99; converted property
@property(assign) BOOL airTunesIsEnabled;	// G=0x32f96a21; S=0x32f96ab5; converted property
@property(retain) id airTunesPassword;	// G=0x32f96bdd; S=0x32f96c5d; converted property
@property(assign) BOOL musicUseSoundCheck;	// G=0x32f96369; S=0x32f963ad; converted property
@property(assign) BOOL screenSaverPanAndZoom;	// G=0x32f95fe9; S=0x32f9605d; converted property
@property(assign) BOOL screenSaverPrefetchComplete;	// G=0x32f95799; S=0x32f957dd; converted property
@property(assign) int screenSaverSecondsPerSlide;	// G=0x32f95f29; S=0x32f95fa1; converted property
@property(retain) id screenSaverSelectedPath;	// G=0x32f952f5; S=0x32f95611; converted property
@property(readonly, assign) id screenSaverSetCollectionBlock;	// G=0x32f95ea5; @synthesize=_screenSaverSetCollectionBlock
@property(assign) BOOL screenSaverShufflePhotos;	// G=0x32f960a5; S=0x32f96119; converted property
@property(retain) id screenSaverSlideshowTheme;	// G=0x32f9570d; S=0x32f95751; converted property
@property(assign) int screenSaverTimeout;	// G=0x32f95bd5; S=0x32f95c41; converted property
@property(retain) id screenSaverTransition;	// G=0x32f96161; S=0x32f961cd; converted property
@property(assign) int sleepTimeout;	// G=0x32f95d09; S=0x32f95d6d; converted property
+ (id)getMobileGestaltString:(CFStringRef)string;	// 0x32f967e5
+ (void)initializePlatformFacade;	// 0x32f94f49
- (SCNetworkServiceRef)_copyNetworkServiceForInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x32f976b5
- (long)_itemCountForMediaType:(id)mediaType;	// 0x32f97605
- (BOOL)_saveConfiguration:(id)configuration forInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x32f9776d
- (BOOL)_setDNSWithAddresses:(id)addresses forService:(SCNetworkServiceRef)service;	// 0x32f97b51
- (void)_setScreenSaverCollection:(id)collection;	// 0x32f975a1
- (BOOL)addSiteIsEnabled;	// 0x32f9740d
- (id)addSiteLoggingURL;	// 0x32f974d9
// converted property getter: - (BOOL)airTunesControlFromSpeakerIsEnabled;	// 0x32f96d55
// converted property getter: - (BOOL)airTunesIsEnabled;	// 0x32f96a21
// converted property getter: - (id)airTunesPassword;	// 0x32f96bdd
- (BOOL)airTunesPasswordIsEnabled;	// 0x32f96ba1
- (void)appleConnectID:(id *)anId password:(id *)password;	// 0x32f96e31
- (BOOL)bootedFromRecoveryPartition;	// 0x32f96215
- (void)dealloc;	// 0x32f94f65
- (id)hwSerialNumber;	// 0x32f96619
- (BOOL)hwSetSystemLanguage:(id)language;	// 0x32f96641
- (id)logPushID;	// 0x32f96431
- (long)mediaPhotoCount;	// 0x32f950f5
- (long)mediaSongCount;	// 0x32f94fdd
- (long)mediaVideoCount;	// 0x32f95069
// converted property getter: - (BOOL)musicUseSoundCheck;	// 0x32f96369
- (BOOL)saveConfiguration:(id)configuration;	// 0x32f96239
- (id)screenSaverCollectionArchive;	// 0x32f95825
// converted property getter: - (BOOL)screenSaverPanAndZoom;	// 0x32f95fe9
- (id)screenSaverPathForIdentifier:(id)identifier;	// 0x32f95599
- (id)screenSaverPaths;	// 0x32f951c5
- (int)screenSaverPhotoSpinFrequency;	// 0x32f95e3d
// converted property getter: - (BOOL)screenSaverPrefetchComplete;	// 0x32f95799
// converted property getter: - (int)screenSaverSecondsPerSlide;	// 0x32f95f29
// converted property getter: - (id)screenSaverSelectedPath;	// 0x32f952f5
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x32f95ea5
// converted property getter: - (BOOL)screenSaverShufflePhotos;	// 0x32f960a5
// converted property getter: - (id)screenSaverSlideshowTheme;	// 0x32f9570d
// converted property getter: - (int)screenSaverTimeout;	// 0x32f95bd5
// converted property getter: - (id)screenSaverTransition;	// 0x32f96161
// converted property setter: - (void)setAirTunesControlFromSpeakerIsEnabled:(BOOL)speakerIsEnabled;	// 0x32f96d99
// converted property setter: - (void)setAirTunesIsEnabled:(BOOL)enabled;	// 0x32f96ab5
// converted property setter: - (void)setAirTunesPassword:(id)password;	// 0x32f96c5d
- (BOOL)setAppleConnectID:(id)anId password:(id)password;	// 0x32f970f9
// converted property setter: - (void)setMusicUseSoundCheck:(BOOL)check;	// 0x32f963ad
// converted property setter: - (void)setScreenSaverPanAndZoom:(BOOL)zoom;	// 0x32f9605d
- (void)setScreenSaverPhotoCollection:(id)collection;	// 0x32f95869
// converted property setter: - (void)setScreenSaverPrefetchComplete:(BOOL)complete;	// 0x32f957dd
// converted property setter: - (void)setScreenSaverSecondsPerSlide:(int)slide;	// 0x32f95fa1
// converted property setter: - (void)setScreenSaverSelectedPath:(id)path;	// 0x32f95611
// converted property setter: - (void)setScreenSaverShufflePhotos:(BOOL)photos;	// 0x32f96119
// converted property setter: - (void)setScreenSaverSlideshowTheme:(id)theme;	// 0x32f95751
// converted property setter: - (void)setScreenSaverTimeout:(int)timeout;	// 0x32f95c41
// converted property setter: - (void)setScreenSaverTransition:(id)transition;	// 0x32f961cd
// converted property setter: - (void)setSleepTimeout:(int)timeout;	// 0x32f95d6d
// converted property getter: - (int)sleepTimeout;	// 0x32f95d09
- (BOOL)syncIsSynced;	// 0x32f962f9
- (id)versionEFI;	// 0x32f96901
- (id)versionGF;	// 0x32f969b9
- (id)versionIR;	// 0x32f9699d
- (id)versionOS;	// 0x32f968c9
- (id)versionOSBuild;	// 0x32f968e5
- (id)versionSoftwareBuild;	// 0x32f96861
@end

