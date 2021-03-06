/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {
	AVCaptureAudioChannelInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) float averagePowerLevel;	// G=0x302f6369; 
@property(readonly, assign, nonatomic) float peakHoldLevel;	// G=0x302f6399; 
- (id)initWithConnection:(id)connection;	// 0x302f626d
// declared property getter: - (float)averagePowerLevel;	// 0x302f6369
- (void)dealloc;	// 0x302f62fd
- (void)invalidate;	// 0x302f6349
// declared property getter: - (float)peakHoldLevel;	// 0x302f6399
@end

