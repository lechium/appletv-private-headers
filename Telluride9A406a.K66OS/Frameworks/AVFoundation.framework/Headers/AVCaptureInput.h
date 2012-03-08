/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject {
@private
	AVCaptureInputInternal *_inputInternal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *ports;	// G=0x30eb4665; 
@property(retain) id session;	// G=0x30eb4405; S=0x30eb4425; converted property
- (id)init;	// 0x30eb4681
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x30eb4455
- (void)dealloc;	// 0x30eb4459
- (void)didStartForSession:(id)session;	// 0x30eb444d
- (void)didStopForSession:(id)session error:(id)error;	// 0x30eb4451
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x30eb44a5
- (id)notReadyError;	// 0x30eb4445
// declared property getter: - (id)ports;	// 0x30eb4665
// converted property getter: - (id)session;	// 0x30eb4405
// converted property setter: - (void)setSession:(id)session;	// 0x30eb4425
- (void)willStartForSession:(id)session;	// 0x30eb4449
@end

