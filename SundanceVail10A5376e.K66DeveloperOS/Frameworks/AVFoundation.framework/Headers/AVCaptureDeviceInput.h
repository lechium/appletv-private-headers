/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVCaptureInput.h"

@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
	AVCaptureDeviceInputInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) AVCaptureDevice *device;	// G=0x368ddd45; 
+ (id)deviceInputWithDevice:(id)device error:(id *)error;	// 0x368ddb1d
- (id)init;	// 0x368ddc51
- (id)initWithDevice:(id)device error:(id *)error;	// 0x368ddb6d
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x368de44d
- (void)_setDevice:(id)device;	// 0x368ddd69
- (void)dealloc;	// 0x368ddc69
- (id)description;	// 0x368ddccd
// declared property getter: - (id)device;	// 0x368ddd45
- (void)didStartForSession:(id)session;	// 0x368de3dd
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x368de4a5
- (id)notReadyError;	// 0x368ddf25
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x368dded5
- (id)ports;	// 0x368de08d
- (void)setDevice:(id)device;	// 0x368ddd65
- (void)setSession:(id)session;	// 0x368de321
- (void)willStartForSession:(id)session;	// 0x368de381
@end

