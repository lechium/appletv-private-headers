/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSOperationQueue;

@interface OSDRawCompassDevice : NSObject {
	NSOperationQueue *_operationQueue;	// 4 = 0x4
	IOHIDEventSystemClientRef _HIDSystemClient;	// 8 = 0x8
	IOHIDServiceClientRef _CompassPlugin;	// 12 = 0xc
	NSMutableArray *_samples;	// 16 = 0x10
	SEL _registeredCallback;	// 20 = 0x14
	id _registeredDelegate;	// 24 = 0x18
}
@property(assign) IOHIDServiceClientRef _CompassPlugin;	// G=0x32a1c54d; S=0x32a1c561; @synthesize
- (id)init;	// 0x32a1bcbd
// declared property getter: - (IOHIDServiceClientRef)_CompassPlugin;	// 0x32a1c54d
- (void)dealloc;	// 0x32a1bd41
- (void)enqueueCallback:(id)callback;	// 0x32a1bf91
- (IOHIDServiceClientRef)getCompassPlugin;	// 0x32a1c35d
- (IOHIDEventSystemClientRef)getHIDSystem;	// 0x32a1c2d5
- (int)registerCompassCallback:(SEL)callback delegate:(id)delegate operationQueue:(id)queue sampleInterval:(float)interval;	// 0x32a1bd91
- (int)registerCompassCallbackIOKit:(float)kit;	// 0x32a1c149
- (id)sampleForDuration:(float)duration sampleInterval:(float)interval;	// 0x32a1beb5
- (void)sampleForDurationCallback:(id)durationCallback;	// 0x32a1bf71
// declared property setter: - (void)set_CompassPlugin:(IOHIDServiceClientRef)plugin;	// 0x32a1c561
- (void)unregisterCompassCallback;	// 0x32a1be41
- (void)unregisterCompassCallbackIOKit;	// 0x32a1c275
@end

