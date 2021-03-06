/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterHelper.h"

@class AVWeakReference;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper {
@private
	AVWeakReference *_weakReference;	// 12 = 0xc
	OpaqueFigAssetWriter *_figAssetWriter;	// 16 = 0x10
	BOOL _startSessionCalled;	// 20 = 0x14
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x30ad716d
- (id)initWithConfigurationState:(id)configurationState error:(id *)error;	// 0x30ad7181
- (void)_handleFailedNotificationWithError:(id)error;	// 0x30ad7f39
- (void)_handleServerDiedNotification;	// 0x30ad7efd
- (void)cancelWriting;	// 0x30ad7cd1
- (void)dealloc;	// 0x30ad7919
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x30ad7b85
- (void)finalize;	// 0x30ad7a31
- (void)finishWriting;	// 0x30ad7d71
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x30ad7b2d
- (int)status;	// 0x30ad7b29
@end

