/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, AVController, NSDictionary;

@interface MPAudioDeviceController : NSObject {
	id _delegate;	// 4 = 0x4
	AVController *_avController;	// 8 = 0x8
	NSDictionary *_pickedRoute;	// 12 = 0xc
	NSArray *_pickableRoutes;	// 16 = 0x10
	NSString *_category;	// 20 = 0x14
	BOOL _fakeRouteAvailable;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL routeDiscoveryEnabled;	// G=0x33623831; S=0x33623809; 
+ (BOOL)routeDiscoveryEnabled;	// 0x336234d5
+ (void)setRouteDiscoveryEnabled:(BOOL)enabled;	// 0x33624bf5
- (id)init;	// 0x33623d35
- (id)initWithAVController:(id)avcontroller;	// 0x33623e2d
- (void)_mediaServerDied;	// 0x33623565
- (BOOL)_pickRoute:(id)route;	// 0x33623711
- (BOOL)_pickRoute:(id)route withPassword:(id)password;	// 0x336245fd
- (id)_pickableRoutes;	// 0x33624479
- (void)_pickableRoutesChangedNotification:(id)notification;	// 0x33623515
- (id)_pickedRoute;	// 0x33623729
- (void)_portStatusDidChangeNotification:(id)_portStatus;	// 0x33624735
- (void)_registerForAVControllerNotifications;	// 0x33624aa1
- (BOOL)_routeIsHandset:(id)handset;	// 0x33623659
- (BOOL)_routeIsHeadphones:(id)headphones;	// 0x33623699
- (BOOL)_routeIsReceiver:(id)receiver;	// 0x3362361d
- (BOOL)_routeIsSpeaker:(id)speaker;	// 0x336236d5
- (BOOL)_routeIsWireless:(id)wireless;	// 0x336235dd
- (void)_sendFakeRouteChange;	// 0x336234e9
- (BOOL)airtunesRouteIsPicked;	// 0x33623ac5
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x336237cd
- (void)clearCachedRoutes;	// 0x33623a2d
- (void)dealloc;	// 0x33623d4d
- (BOOL)handsetRouteIsPicked;	// 0x33623b39
- (int)indexOfPickedRoute;	// 0x33623855
- (void)invalidateAVController;	// 0x33623c71
- (id)nameOfPickedRoute;	// 0x33623bf9
- (unsigned)numberOfAudioRoutes;	// 0x33623aa1
- (BOOL)pickBestDeviceRoute;	// 0x33623e7d
- (BOOL)pickHandsetRoute;	// 0x33623f6d
- (BOOL)pickRouteAtIndex:(unsigned)index;	// 0x3362394d
- (BOOL)pickRouteAtIndex:(unsigned)index withPassword:(id)password;	// 0x336238e5
- (BOOL)pickSpeakerRoute;	// 0x33624041
- (id)pickedRouteDescription;	// 0x33623bbd
- (BOOL)receiverRouteIsPicked;	// 0x33623b65
- (void)restorePickedRoute;	// 0x33623a7d
// declared property getter: - (BOOL)routeDiscoveryEnabled;	// 0x33623831
- (id)routeNameAtIndex:(unsigned)index isPicked:(BOOL *)picked;	// 0x336242b1
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;	// 0x33624115
- (BOOL)routeOtherThanHandsetIsAvailable;	// 0x336241f1
- (BOOL)routeRequiresPasswordAtIndex:(unsigned)index;	// 0x336239c1
- (id)routeTypeAtIndex:(unsigned)index;	// 0x33623965
- (void)setAVController:(id)controller;	// 0x33623cc1
- (void)setCategory:(id)category;	// 0x33623c25
- (void)setDelegate:(id)delegate;	// 0x336234c5
// declared property setter: - (void)setRouteDiscoveryEnabled:(BOOL)enabled;	// 0x33623809
- (BOOL)speakerRouteIsPicked;	// 0x33623b91
- (BOOL)volumeControlIsAvailable;	// 0x33623e71
- (BOOL)wirelessRouteIsPicked;	// 0x33623b0d
@end
