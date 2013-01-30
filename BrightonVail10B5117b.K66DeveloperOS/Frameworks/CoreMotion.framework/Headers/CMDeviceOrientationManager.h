/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library


@interface CMDeviceOrientationManager : NSObject {
	id _internal;	// 4 = 0x4
}
+ (void)dummySelector:(id)selector;	// 0x31792a71
+ (void)initialize;	// 0x31791d79
- (id)init;	// 0x31791f71
- (id)initPrivate;	// 0x31792101
- (void)dealloc;	// 0x31792165
- (void)deallocPrivate;	// 0x317922d1
- (id)deviceOrientationBlocking;	// 0x31792995
- (BOOL)isDeviceOrientationActive;	// 0x31792381
- (BOOL)isDeviceOrientationAvailable;	// 0x31792371
- (void)onDeviceOrientation:(const Sample *)orientation;	// 0x3179277d
- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x31792559
- (void)startDeviceOrientationUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x317923a5
- (void)stopDeviceOrientationUpdates;	// 0x317924a9
- (void)stopDeviceOrientationUpdatesPrivate;	// 0x31792695
@end
