/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UIAlertViewDelegate.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSDictionary;

@interface MPAudioDeviceController : NSObject <UIAlertViewDelegate> {
@private
	NSString *_category;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	BOOL _fakeRouteAvailable;	// 12 = 0xc
	NSArray *_pickableRoutes;	// 16 = 0x10
	NSDictionary *_pickedRoute;	// 20 = 0x14
	BOOL _pickedRouteHasVolumeControl;	// 24 = 0x18
	BOOL _pickedRouteHasVolumeControlIsValid;	// 25 = 0x19
}
@property(assign, nonatomic) BOOL routeDiscoveryEnabled;	// G=0x31a1cd61; S=0x31a1cd89; 
+ (BOOL)routeDiscoveryEnabled;	// 0x31a1ccfd
+ (void)setRouteDiscoveryEnabled:(BOOL)enabled;	// 0x31a1cd15
- (id)init;	// 0x31a1bde9
- (void)_mediaServerDied;	// 0x31a1d1dd
- (BOOL)_pickRoute:(id)route;	// 0x31a1cfc1
- (BOOL)_pickRoute:(id)route withPassword:(id)password;	// 0x31a1cfd9
- (id)_pickableRoutes;	// 0x31a1ce65
- (void)_pickableRoutesChangedNotification:(id)notification;	// 0x31a1d281
- (id)_pickedRoute;	// 0x31a1cdf5
- (void)_portStatusDidChangeNotification:(id)_portStatus;	// 0x31a1d341
- (void)_registerForAVControllerNotifications;	// 0x31a1d789
- (BOOL)_routeIsDisplayPort:(id)port;	// 0x31a1d081
- (BOOL)_routeIsHandset:(id)handset;	// 0x31a1d109
- (BOOL)_routeIsHeadphones:(id)headphones;	// 0x31a1d0c5
- (BOOL)_routeIsReceiver:(id)receiver;	// 0x31a1d151
- (BOOL)_routeIsSpeaker:(id)speaker;	// 0x31a1d03d
- (BOOL)_routeIsWireless:(id)wireless;	// 0x31a1d195
- (void)_sendFakeRouteChange;	// 0x31a1d891
- (BOOL)airtunesRouteIsPicked;	// 0x31a1c28d
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x31a1cdb5
- (void)clearCachedRoutes;	// 0x31a1c5b9
- (void)dealloc;	// 0x31a1be2d
- (void)determinePickableRoutesWithCompletionHandler:(id)completionHandler;	// 0x31a1ca91
- (BOOL)handsetRouteIsPicked;	// 0x31a1c22d
- (int)indexOfPickedRoute;	// 0x31a1c9fd
- (id)nameOfPickedRoute;	// 0x31a1bfc5
- (unsigned)numberOfAudioRoutes;	// 0x31a1c2dd
- (BOOL)pickBestDeviceRoute;	// 0x31a1c4a5
- (BOOL)pickHandsetRoute;	// 0x31a1c3d5
- (BOOL)pickRouteAtIndex:(unsigned)index;	// 0x31a1c979
- (BOOL)pickRouteAtIndex:(unsigned)index withPassword:(id)password;	// 0x31a1c991
- (BOOL)pickSpeakerRoute;	// 0x31a1c305
- (id)pickedRouteDescription;	// 0x31a1bff9
- (BOOL)receiverRouteIsPicked;	// 0x31a1c1fd
- (void)restorePickedRoute;	// 0x31a1c58d
- (id)routeDescriptionAtIndex:(unsigned)index;	// 0x31a1c619
// declared property getter: - (BOOL)routeDiscoveryEnabled;	// 0x31a1cd61
- (id)routeNameAtIndex:(unsigned)index isPicked:(BOOL *)picked;	// 0x31a1c665
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;	// 0x31a1c0f5
- (BOOL)routeOtherThanHandsetIsAvailable;	// 0x31a1c03d
- (BOOL)routeRequiresPasswordAtIndex:(unsigned)index;	// 0x31a1c899
- (id)routeTypeAtIndex:(unsigned)index;	// 0x31a1c911
- (void)setCategory:(id)category;	// 0x31a1bf1d
- (void)setDelegate:(id)delegate;	// 0x31a1bf75
// declared property setter: - (void)setRouteDiscoveryEnabled:(BOOL)enabled;	// 0x31a1cd89
- (BOOL)speakerRouteIsPicked;	// 0x31a1c1cd
- (BOOL)volumeControlIsAvailable;	// 0x31a1bf85
- (BOOL)wirelessRouteIsPicked;	// 0x31a1c25d
@end

