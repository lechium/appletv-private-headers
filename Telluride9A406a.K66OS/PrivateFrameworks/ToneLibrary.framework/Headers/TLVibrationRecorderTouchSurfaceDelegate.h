/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "NSObject.h"


@protocol TLVibrationRecorderTouchSurfaceDelegate <NSObject>
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)vibrationComponent;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)vibrationComponent;
- (void)vibrationRecorderTouchSurface:(id)surface didExitRecordingModeWithContextObject:(id)contextObject;
- (BOOL)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)vibrationRecorderTouchSurface;
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)vibrationRecorderTouchSurface;
@end
