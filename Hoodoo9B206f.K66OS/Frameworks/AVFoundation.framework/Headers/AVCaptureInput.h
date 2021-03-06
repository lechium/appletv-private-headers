/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSArray, AVCaptureInputInternal;

@interface AVCaptureInput : NSObject {
@private
	AVCaptureInputInternal *_inputInternal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *ports;	// G=0x326d2c21; 
@property(retain) id session;	// G=0x326d2c3d; S=0x326d2c5d; converted property
- (id)init;	// 0x326d2ad5
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x326d2c8d
- (void)dealloc;	// 0x326d2bd5
- (void)didStartForSession:(id)session;	// 0x326d2c85
- (void)didStopForSession:(id)session error:(id)error;	// 0x326d2c89
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x326d2c91
- (id)notReadyError;	// 0x326d2c7d
// declared property getter: - (id)ports;	// 0x326d2c21
// converted property getter: - (id)session;	// 0x326d2c3d
// converted property setter: - (void)setSession:(id)session;	// 0x326d2c5d
- (void)willStartForSession:(id)session;	// 0x326d2c81
@end

