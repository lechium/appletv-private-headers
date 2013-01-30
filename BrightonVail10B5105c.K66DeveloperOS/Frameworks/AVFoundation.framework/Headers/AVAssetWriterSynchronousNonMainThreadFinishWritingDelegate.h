/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h"
#import "AVAssetWriterFinishWritingHelperDelegate.h"

@class AVWeakReference;
@protocol OS_dispatch_semaphore;

@interface AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate> {
	NSObject<OS_dispatch_semaphore> *_finishedWritingNotificationSemaphore;	// 4 = 0x4
	AVWeakReference *_weakReferenceToHelper;	// 8 = 0x8
	AVWeakReference *_weakReferenceToSelf;	// 12 = 0xc
}
- (id)init;	// 0x302dffad
- (void)dealloc;	// 0x302e0031
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)success error:(id)error;	// 0x302e00e5
- (void)finalize;	// 0x302e00a5
- (void)finishWritingHelper:(id)helper didInitiateFinishWritingForFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter;	// 0x302e0139
- (void)finishWritingHelperDidCancelFinishWriting:(id)finishWritingHelper;	// 0x302e0299
- (void)finishWritingHelperDidFail:(id)finishWritingHelper;	// 0x302e02ad
- (BOOL)shouldHelperPrepareInputs;	// 0x302e02c1
@end
