/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSThread, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVHSConnectionStream : XXUnknownSuperclass {
	CFRunLoopRef _runLoop;	// 4 = 0x4
	CFRunLoopSourceRef _runLoopSource;	// 8 = 0x8
	CFReadStreamRef _persistentStream;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_invalidateCompletionQueue;	// 16 = 0x10
	id _invalidateCompletionHandler;	// 20 = 0x14
	NSThread *_processingThread;	// 24 = 0x18
	NSMutableArray *_pendingQueue;	// 28 = 0x1c
	NSMutableArray *_processingQueue;	// 32 = 0x20
}
@property(retain, nonatomic) NSMutableArray *pendingQueue;	// G=0xe2de9; S=0xe2df9; @synthesize=_pendingQueue
@property(retain) NSMutableArray *processingQueue;	// G=0xe2e09; S=0xe2e1d; @synthesize=_processingQueue
@property(retain) NSThread *processingThread;	// G=0xe2dc5; S=0xe2dd9; @synthesize=_processingThread
- (id)init;	// 0xe1519
- (id)_urlFromCFStream:(CFReadStreamRef)cfstream dataClient:(id)client;	// 0xe2a05
- (void)callBackWithStream:(CFReadStreamRef)stream eventType:(unsigned long)type requestContext:(id)context;	// 0xe2121
- (void)callBackWithTimer:(CFRunLoopTimerRef)timer requestContext:(id)context;	// 0xe2625
- (void)dealloc;	// 0xe1609
- (void)invalidateRequestContext:(id)context;	// 0xe2891
- (void)invalidateWithCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xe1861
// declared property getter: - (id)pendingQueue;	// 0xe2de9
- (void)processRequest:(id)request withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xe167d
// declared property getter: - (id)processingQueue;	// 0xe2e09
// declared property getter: - (id)processingThread;	// 0xe2dc5
- (void)scheduleRequestWithRequestContext:(id)requestContext;	// 0xe1d75
// declared property setter: - (void)setPendingQueue:(id)queue;	// 0xe2df9
// declared property setter: - (void)setProcessingQueue:(id)queue;	// 0xe2e1d
// declared property setter: - (void)setProcessingThread:(id)thread;	// 0xe2dd9
- (void)sourceCanceledOnRunLoop:(CFRunLoopRef)loop;	// 0xe1cd9
- (void)sourceFired;	// 0xe1b51
- (void)sourceScheduledOnRunLoop:(CFRunLoopRef)loop;	// 0xe1b11
- (void)threadMainMethod;	// 0xe197d
@end

