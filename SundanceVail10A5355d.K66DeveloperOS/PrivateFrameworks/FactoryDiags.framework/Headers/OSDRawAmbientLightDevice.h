/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSOperationQueue;

@interface OSDRawAmbientLightDevice : NSObject {
	NSOperationQueue *_operationQueue;	// 4 = 0x4
	IOHIDEventSystemClientRef _HIDSystemClient;	// 8 = 0x8
	IOHIDServiceClientRef _AmbientLightPlugin;	// 12 = 0xc
	NSMutableArray *_samples;	// 16 = 0x10
	SEL _registeredCallback;	// 20 = 0x14
	id _registeredDelegate;	// 24 = 0x18
}
@property(assign) IOHIDServiceClientRef _AmbientLightPlugin;	// G=0x377b0d65; S=0x377b0d79; @synthesize
- (id)init;	// 0x377b0401
// declared property getter: - (IOHIDServiceClientRef)_AmbientLightPlugin;	// 0x377b0d65
- (void)dealloc;	// 0x377b0485
- (void)enqueueCallback:(id)callback;	// 0x377b06e5
- (IOHIDServiceClientRef)getAmbientLightPlugin;	// 0x377b0b75
- (IOHIDEventSystemClientRef)getHIDSystem;	// 0x377b0aed
- (int)registerAmbientLightCallback:(SEL)callback delegate:(id)delegate operationQueue:(id)queue sampleInterval:(float)interval testMode:(BOOL)mode monitorMode:(BOOL)mode6;	// 0x377b04d5
- (int)registerAmbientLightCallbackIOKit:(float)kit testMode:(BOOL)mode monitorMode:(BOOL)mode3;	// 0x377b08e1
- (id)sampleForDuration:(float)duration sampleInterval:(float)interval testMode:(BOOL)mode monitorMode:(BOOL)mode4;	// 0x377b0605
- (void)sampleForDurationCallback:(id)durationCallback;	// 0x377b06c5
// declared property setter: - (void)set_AmbientLightPlugin:(IOHIDServiceClientRef)plugin;	// 0x377b0d79
- (void)unregisterAmbientLightCallback;	// 0x377b0591
- (void)unregisterAmbientLightCallbackIOKit;	// 0x377b0a8d
@end
