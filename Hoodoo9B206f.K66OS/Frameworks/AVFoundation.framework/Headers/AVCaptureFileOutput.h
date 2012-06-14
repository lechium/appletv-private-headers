/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureOutput.h"
#import "AVFoundation-Structs.h"

@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput {
@private
	AVCaptureFileOutputInternal *_fileOutputInternal;	// 8 = 0x8
}
@property(assign, nonatomic) XXStruct_pwHToB maxRecordedDuration;	// G=0x326d29b9; S=0x326d29fd; 
@property(assign, nonatomic) long long maxRecordedFileSize;	// G=0x326d2a3d; S=0x326d2a61; 
@property(assign, nonatomic) long long minFreeDiskSpaceLimit;	// G=0x326d2a89; S=0x326d2aad; 
@property(readonly, assign, nonatomic) NSURL *outputFileURL;	// G=0x326d27f1; 
@property(assign) BOOL pausesRecordingOnInterruption;	// G=0x326d280d; S=0x326d282d; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB recordedDuration;	// G=0x326d284d; 
@property(readonly, assign, nonatomic) long long recordedFileSize;	// G=0x326d2911; 
@property(readonly, assign, nonatomic, getter=isRecording) BOOL recording;	// G=0x326d27f5; 
+ (void)initialize;	// 0x326d2699
- (id)init;	// 0x326d269d
- (void)dealloc;	// 0x326d27a5
// declared property getter: - (BOOL)isRecording;	// 0x326d27f5
- (BOOL)isRecordingPaused;	// 0x326d2801
// declared property getter: - (XXStruct_pwHToB)maxRecordedDuration;	// 0x326d29b9
// declared property getter: - (long long)maxRecordedFileSize;	// 0x326d2a3d
// declared property getter: - (long long)minFreeDiskSpaceLimit;	// 0x326d2a89
// declared property getter: - (id)outputFileURL;	// 0x326d27f1
- (void)pauseRecording;	// 0x326d2805
// converted property getter: - (BOOL)pausesRecordingOnInterruption;	// 0x326d280d
// declared property getter: - (XXStruct_pwHToB)recordedDuration;	// 0x326d284d
// declared property getter: - (long long)recordedFileSize;	// 0x326d2911
- (void)resumeRecording;	// 0x326d2809
// declared property setter: - (void)setMaxRecordedDuration:(XXStruct_pwHToB)duration;	// 0x326d29fd
// declared property setter: - (void)setMaxRecordedFileSize:(long long)size;	// 0x326d2a61
// declared property setter: - (void)setMinFreeDiskSpaceLimit:(long long)limit;	// 0x326d2aad
// converted property setter: - (void)setPausesRecordingOnInterruption:(BOOL)interruption;	// 0x326d282d
- (void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;	// 0x326d27f9
- (void)stopRecording;	// 0x326d27fd
@end
