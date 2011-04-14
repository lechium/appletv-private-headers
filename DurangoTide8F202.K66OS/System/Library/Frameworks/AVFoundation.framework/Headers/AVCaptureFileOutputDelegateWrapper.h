/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString, NSArray;
@protocol AVCaptureFileOutputPauseResumeDelegate, AVCaptureFileOutputRecordingDelegate;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {
	id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> _delegate;	// 4 = 0x4
	NSURL *_outputFileURL;	// 8 = 0x8
	BOOL _receivedDidStartRecording;	// 12 = 0xc
	BOOL _receivedDidStopRecording;	// 13 = 0xd
	NSString *_didStopRecordingReason;	// 16 = 0x10
	NSArray *_metadata;	// 20 = 0x14
	NSArray *_connections;	// 24 = 0x18
}
@property(readonly, assign) NSArray *connections;	// G=0x30400975; @synthesize=_connections
@property(readonly, assign) id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> delegate;	// G=0x304009d5; @synthesize=_delegate
@property(copy) NSString *didStopRecordingReason;	// G=0x30400d05; S=0x30400d35; @synthesize=_didStopRecordingReason
@property(retain) NSArray *metadata;	// G=0x30400d1d; S=0x30400d5d; @synthesize=_metadata
@property(readonly, assign) NSURL *outputFileURL;	// G=0x304009c5; @synthesize=_outputFileURL
@property(assign) BOOL receivedDidStartRecording;	// G=0x304009a5; S=0x304009b5; @synthesize=_receivedDidStartRecording
@property(assign) BOOL receivedDidStopRecording;	// G=0x30400985; S=0x30400995; @synthesize=_receivedDidStopRecording
+ (id)wrapperWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x30400cb9
- (id)initWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x30400c41
// declared property getter: - (id)connections;	// 0x30400975
- (void)dealloc;	// 0x30400bc1
// declared property getter: - (id)delegate;	// 0x304009d5
// declared property getter: - (id)didStopRecordingReason;	// 0x30400d05
// declared property getter: - (id)metadata;	// 0x30400d1d
// declared property getter: - (id)outputFileURL;	// 0x304009c5
// declared property getter: - (BOOL)receivedDidStartRecording;	// 0x304009a5
// declared property getter: - (BOOL)receivedDidStopRecording;	// 0x30400985
// declared property setter: - (void)setDidStopRecordingReason:(id)stopRecordingReason;	// 0x30400d35
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30400d5d
// declared property setter: - (void)setReceivedDidStartRecording:(BOOL)startRecording;	// 0x304009b5
// declared property setter: - (void)setReceivedDidStopRecording:(BOOL)stopRecording;	// 0x30400995
@end

