/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSAnimationDelegate : XXUnknownSuperclass {
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_callback;	// 8 = 0x8
}
- (id)initWithContext:(OpaqueJSContext *)context withCallbackFunction:(OpaqueJSValue *)callbackFunction;	// 0x400f3d
- (void).cxx_destruct;	// 0x401231
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x4010f9
- (void)dealloc;	// 0x40101d
@end
