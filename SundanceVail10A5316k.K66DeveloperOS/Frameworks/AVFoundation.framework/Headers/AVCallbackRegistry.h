/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@protocol OS_dispatch_queue;

@interface AVCallbackRegistry : NSObject {
@private
	CFBagRef _observers;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_readWriteQueue;	// 8 = 0x8
}
+ (void)initialize;	// 0x36786d05
+ (id)sharedCallbackRegistry;	// 0x36786d5d
- (id)init;	// 0x36786d6d
- (id)callbackObserver:(id)observer;	// 0x36787029
- (void)dealloc;	// 0x36786e11
- (void)finalize;	// 0x36786e6d
- (void)registerCallbackObserver:(id)observer;	// 0x36786ec9
- (void)unregisterCallbackObserver:(id)observer;	// 0x36786f79
@end

