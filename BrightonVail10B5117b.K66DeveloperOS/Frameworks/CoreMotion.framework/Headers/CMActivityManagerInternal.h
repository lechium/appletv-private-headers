/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library


@interface CMActivityManagerInternal : NSObject {
	CLConnectionClient *fLocationdConnection;	// 4 = 0x4
	id fActivityHandler;	// 8 = 0x8
	dispatch_source_s *fWatchdogTimer;	// 12 = 0xc
	dispatch_queue_s *fPrivateQueue;	// 16 = 0x10
}
- (id)init;	// 0x31779759
- (void)dealloc;	// 0x317797a9
- (void)startActivityUpdatesWithHandlerPrivate:(id)handlerPrivate;	// 0x31779a75
- (void)startWatchdogCheckinsPrivate;	// 0x317797f1
- (void)stopActivityUpdatesPrivate;	// 0x3177a199
- (void)stopWatchdogCheckinsPrivate;	// 0x31779a51
@end
