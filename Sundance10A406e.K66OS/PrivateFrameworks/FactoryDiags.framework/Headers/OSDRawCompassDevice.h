/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, NSMutableArray;

@interface OSDRawCompassDevice : NSObject {
	NSOperationQueue *_operationQueue;	// 4 = 0x4
	IOHIDEventSystemClientRef _HIDSystemClient;	// 8 = 0x8
	IOHIDServiceClientRef _CompassPlugin;	// 12 = 0xc
	NSMutableArray *_samples;	// 16 = 0x10
	SEL _registeredCallback;	// 20 = 0x14
	id _registeredDelegate;	// 24 = 0x18
}
@property(assign) IOHIDServiceClientRef _CompassPlugin;	// G=0x3739a325; S=0x3739a339; @synthesize
- (id)init;	// 0x37399a95
// declared property getter: - (IOHIDServiceClientRef)_CompassPlugin;	// 0x3739a325
- (void)dealloc;	// 0x37399b19
- (void)enqueueCallback:(id)callback;	// 0x37399d69
- (IOHIDServiceClientRef)getCompassPlugin;	// 0x3739a135
- (IOHIDEventSystemClientRef)getHIDSystem;	// 0x3739a0ad
- (int)registerCompassCallback:(SEL)callback delegate:(id)delegate operationQueue:(id)queue sampleInterval:(float)interval;	// 0x37399b69
- (int)registerCompassCallbackIOKit:(float)kit;	// 0x37399f21
- (id)sampleForDuration:(float)duration sampleInterval:(float)interval;	// 0x37399c8d
- (void)sampleForDurationCallback:(id)durationCallback;	// 0x37399d49
// declared property setter: - (void)set_CompassPlugin:(IOHIDServiceClientRef)plugin;	// 0x3739a339
- (void)unregisterCompassCallback;	// 0x37399c19
- (void)unregisterCompassCallbackIOKit;	// 0x3739a04d
@end

