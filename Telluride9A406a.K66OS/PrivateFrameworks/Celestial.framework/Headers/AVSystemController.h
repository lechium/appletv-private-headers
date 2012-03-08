/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"


@interface AVSystemController : NSObject {
	AVSystemControllerPrivate *_priv;	// 4 = 0x4
}
+ (void)initialize;	// 0x338b3191
+ (id)sharedAVSystemController;	// 0x338b31d1
- (id)init;	// 0x338b3279
- (id)attributeForKey:(id)key;	// 0x338bf5f9
- (BOOL)changeActiveCategoryVolumeBy:(float)by;	// 0x338ce489
- (BOOL)changeActiveCategoryVolumeBy:(float)by fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x338cf481
- (BOOL)changeActiveCategoryVolumeBy:(float)by forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x338cf38d
- (BOOL)changeVolumeBy:(float)by forCategory:(id)category;	// 0x338cf239
- (BOOL)currentRouteHasVolumeControl;	// 0x338ceeed
- (void)dealloc;	// 0x338c0f85
- (BOOL)enablePortDiscovery:(BOOL)discovery;	// 0x338cf041
- (BOOL)getActiveCategoryMuted:(BOOL *)muted;	// 0x338cf2a1
- (BOOL)getActiveCategoryMuted:(BOOL *)muted forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x338cf265
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name;	// 0x338ce4d1
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name fallbackCategory:(id)category;	// 0x338cf3b9
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x338cf335
- (BOOL)getPortDiscoveryEnabled;	// 0x338cf0b1
- (BOOL)getVolume:(float *)volume forCategory:(id)category;	// 0x338cf015
- (void)handleServerDied;	// 0x338c0ef5
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x338ce4f5
- (BOOL)okToNotifyFromThisThread;	// 0x338ce8d5
- (id)pickableRoutesForCategory:(id)category;	// 0x338cef75
- (void)postEffectiveVolumeNotification:(void *)notification;	// 0x338ce595
- (void)postFullMuteDidChangeNotification:(void *)postFullMute;	// 0x338ce801
- (id)routeForCategory:(id)category;	// 0x338cefcd
- (BOOL)setActiveCategoryVolumeTo:(float)to;	// 0x338ce4ad
- (BOOL)setActiveCategoryVolumeTo:(float)to fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x338cf419
- (BOOL)setActiveCategoryVolumeTo:(float)to forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x338cf361
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x338ce8f9
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x338cf129
- (BOOL)setVolumeTo:(float)to forCategory:(id)category;	// 0x338cf20d
- (BOOL)toggleActiveCategoryMuted;	// 0x338cf309
- (BOOL)toggleActiveCategoryMutedForRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x338cf2dd
- (id)volumeCategoryForAudioCategory:(id)audioCategory;	// 0x338cefa1
@end

