/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVCallbackRegistry : NSObject {
@private
	CFBagRef _observers;	// 4 = 0x4
	dispatch_queue_s *_readWriteQueue;	// 8 = 0x8
}
+ (void)initialize;	// 0x30edab89
+ (id)sharedCallbackRegistry;	// 0x30edab79
- (id)init;	// 0x30edae01
- (id)callbackObserver:(id)observer;	// 0x30edabe1
- (void)dealloc;	// 0x30edada5
- (void)finalize;	// 0x30edad49
- (void)registerCallbackObserver:(id)observer;	// 0x30edacf1
- (void)unregisterCallbackObserver:(id)observer;	// 0x30edac95
@end

