/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSURL, NSString;
@protocol AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {
	id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> _delegate;	// 4 = 0x4
	NSURL *_outputFileURL;	// 8 = 0x8
	BOOL _receivedDidStartRecording;	// 12 = 0xc
	BOOL _receivedDidStopRecording;	// 13 = 0xd
	NSString *_didStopRecordingReason;	// 16 = 0x10
	NSArray *_metadata;	// 20 = 0x14
	NSArray *_connections;	// 24 = 0x18
}
@property(readonly, assign) NSArray *connections;	// G=0x30af861d; @synthesize=_connections
@property(readonly, assign) id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> delegate;	// G=0x30af854d; @synthesize=_delegate
@property(copy) NSString *didStopRecordingReason;	// G=0x30af85ad; S=0x30af85c1; @synthesize=_didStopRecordingReason
@property(retain) NSArray *metadata;	// G=0x30af85e5; S=0x30af85f9; @synthesize=_metadata
@property(readonly, assign) NSURL *outputFileURL;	// G=0x30af855d; @synthesize=_outputFileURL
@property(assign) BOOL receivedDidStartRecording;	// G=0x30af856d; S=0x30af857d; @synthesize=_receivedDidStartRecording
@property(assign) BOOL receivedDidStopRecording;	// G=0x30af858d; S=0x30af859d; @synthesize=_receivedDidStopRecording
+ (id)wrapperWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x30af83e1
- (id)initWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x30af8435
// declared property getter: - (id)connections;	// 0x30af861d
- (void)dealloc;	// 0x30af84c5
// declared property getter: - (id)delegate;	// 0x30af854d
// declared property getter: - (id)didStopRecordingReason;	// 0x30af85ad
// declared property getter: - (id)metadata;	// 0x30af85e5
// declared property getter: - (id)outputFileURL;	// 0x30af855d
// declared property getter: - (BOOL)receivedDidStartRecording;	// 0x30af856d
// declared property getter: - (BOOL)receivedDidStopRecording;	// 0x30af858d
// declared property setter: - (void)setDidStopRecordingReason:(id)stopRecordingReason;	// 0x30af85c1
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30af85f9
// declared property setter: - (void)setReceivedDidStartRecording:(BOOL)startRecording;	// 0x30af857d
// declared property setter: - (void)setReceivedDidStopRecording:(BOOL)stopRecording;	// 0x30af859d
@end

