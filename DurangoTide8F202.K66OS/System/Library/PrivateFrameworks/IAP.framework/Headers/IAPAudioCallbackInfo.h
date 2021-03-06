/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

#import <NSObject.h> // Unknown library
#import "IAP-Structs.h"

@class NSLock, CPDistributedNotificationCenter;

@interface IAPAudioCallbackInfo : NSObject {
@private
	/*function-pointer*/ void *_deviceStateChangedCallback;	// 4 = 0x4
	void *_deviceStateChangedContext;	// 8 = 0x8
	/*function-pointer*/ void *_volumeChangedCallback;	// 12 = 0xc
	void *_volumeChangedContext;	// 16 = 0x10
	/*function-pointer*/ void *_pauseOnHeadphoneDisconnectChangedCallback;	// 20 = 0x14
	void *_pauseOnHeadphoneDisconnectChangedContext;	// 24 = 0x18
	/*function-pointer*/ void *_volumeControlSupportChangedCallback;	// 28 = 0x1c
	void *_volumeControlSupportChangedContext;	// 32 = 0x20
	CPDistributedNotificationCenter *_dnCenter;	// 36 = 0x24
	CFRunLoopRef _dnCenterRunLoop;	// 40 = 0x28
	NSLock *_lock;	// 44 = 0x2c
}
+ (id)sharedInstance;	// 0x34663cf1
- (id)init;	// 0x34663c95
- (void)_deviceStateChanged:(id)changed;	// 0x34663205
- (void)_pauseOnHeadphoneDisconnectChanged:(id)changed;	// 0x3466324d
- (void)_volumeChanged:(id)changed;	// 0x34663229
- (void)_volumeControlSupportChanged:(id)changed;	// 0x34663271
- (void)clearDeviceStateChangedCallback;	// 0x34663ae9
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;	// 0x34663869
- (void)clearVolumeChangedCallback;	// 0x346639a9
- (void)clearVolumeControlSupportChangedCallback;	// 0x34663729
- (void)dealloc;	// 0x34663c29
- (void)setupDeviceStateChangedCallback:(/*function-pointer*/ void *)callback withContext:(void *)context andRunLoop:(CFRunLoopRef)loop;	// 0x34663b71
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(/*function-pointer*/ void *)callback withContext:(void *)context andRunLoop:(CFRunLoopRef)loop;	// 0x346638f1
- (void)setupVolumeChangedCallback:(/*function-pointer*/ void *)callback withContext:(void *)context andRunLoop:(CFRunLoopRef)loop;	// 0x34663a31
- (void)setupVolumeControlSupportChangedCallback:(/*function-pointer*/ void *)callback withContext:(void *)context andRunLoop:(CFRunLoopRef)loop;	// 0x346637b1
- (void)startNotificationCenterOnRunLoop:(CFRunLoopRef)loop;	// 0x34663635
@end

