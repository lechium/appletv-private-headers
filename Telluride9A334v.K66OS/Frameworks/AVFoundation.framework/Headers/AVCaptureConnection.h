/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureOutput, NSArray, AVCaptureConnectionInternal;

@interface AVCaptureConnection : NSObject {
@private
	AVCaptureConnectionInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;	// G=0x354747d9; 
@property(readonly, assign, nonatomic) NSArray *audioChannels;	// G=0x354763ed; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x35474819; S=0x35476689; 
@property(readonly, assign, nonatomic) NSArray *inputPorts;	// G=0x35476759; 
@property(readonly, assign, nonatomic) AVCaptureOutput *output;	// G=0x3547679d; 
@property(readonly, assign, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;	// G=0x35474919; 
@property(readonly, assign, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;	// G=0x354748f1; 
@property(readonly, assign, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;	// G=0x35474839; 
@property(readonly, assign, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;	// G=0x35474895; 
@property(assign) CGRect videoCropRect;	// G=0x3547547d; S=0x3547537d; converted property
@property(assign) BOOL videoFirstAndLastFramesUncropped;	// G=0x35475111; S=0x35475051; converted property
@property(assign, nonatomic) XXStruct_pwHToB videoMaxFrameDuration;	// G=0x3547576d; S=0x35475641; 
@property(readonly, assign, nonatomic) float videoMaxScaleAndCropFactor;	// G=0x35474941; 
@property(assign, nonatomic) XXStruct_pwHToB videoMinFrameDuration;	// G=0x35475a09; S=0x354758dd; 
@property(assign, nonatomic, getter=isVideoMirrored) BOOL videoMirrored;	// G=0x35474875; S=0x35475c35; 
@property(assign) CGSize videoMotionFilterOverlapRatios;	// G=0x35474f71; S=0x35474e81; converted property
@property(assign, nonatomic) int videoOrientation;	// G=0x354748d1; S=0x35475b79; 
@property(assign) int videoRetainedBufferCountHint;	// G=0x354752a5; S=0x354751e9; converted property
@property(assign, nonatomic) float videoScaleAndCropFactor;	// G=0x35474961; S=0x35475565; 
+ (id)connectionWithInputPorts:(id)inputPorts output:(id)output;	// 0x35474b31
- (id)initWithInputPorts:(id)inputPorts output:(id)output;	// 0x35476b91
- (void)addInputPort:(id)port;	// 0x35476b15
// declared property getter: - (id)audioChannels;	// 0x354763ed
- (void)dealloc;	// 0x35474ad5
- (float)getAvgAudioLevelForChannel:(id)channel;	// 0x35476105
- (float)getPeakAudioLevelForChannel:(id)channel;	// 0x35475f65
- (void)inputPortFormatDescriptionChanged:(id)changed;	// 0x35476b81
// declared property getter: - (id)inputPorts;	// 0x35476759
- (void)invalidate;	// 0x354767e1
// declared property getter: - (BOOL)isActive;	// 0x354747d9
// declared property getter: - (BOOL)isEnabled;	// 0x35474819
- (BOOL)isLive;	// 0x3547652d
- (BOOL)isVideoCropRectSupported;	// 0x3547550d
- (BOOL)isVideoFirstAndLastFramesUncroppedSupported;	// 0x35475191
// declared property getter: - (BOOL)isVideoMaxFrameDurationSupported;	// 0x35474919
// declared property getter: - (BOOL)isVideoMinFrameDurationSupported;	// 0x354748f1
// declared property getter: - (BOOL)isVideoMirrored;	// 0x35474875
// declared property getter: - (BOOL)isVideoMirroringSupported;	// 0x35474839
- (BOOL)isVideoMotionFilterOverlapRatiosSupported;	// 0x35474ff9
// declared property getter: - (BOOL)isVideoOrientationSupported;	// 0x35474895
- (BOOL)isVideoRetainedBufferCountHintSupported;	// 0x35475325
- (id)mediaType;	// 0x354764d1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35474b81
// declared property getter: - (id)output;	// 0x3547679d
- (void)removeInputPort:(id)port;	// 0x35476aa9
- (void)setActive:(BOOL)active;	// 0x354747f9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x35476689
// converted property setter: - (void)setVideoCropRect:(CGRect)rect;	// 0x3547537d
// converted property setter: - (void)setVideoFirstAndLastFramesUncropped:(BOOL)uncropped;	// 0x35475051
// declared property setter: - (void)setVideoMaxFrameDuration:(XXStruct_pwHToB)duration;	// 0x35475641
// declared property setter: - (void)setVideoMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x354758dd
// declared property setter: - (void)setVideoMirrored:(BOOL)mirrored;	// 0x35475c35
// converted property setter: - (void)setVideoMotionFilterOverlapRatios:(CGSize)ratios;	// 0x35474e81
// declared property setter: - (void)setVideoOrientation:(int)orientation;	// 0x35475b79
// converted property setter: - (void)setVideoRetainedBufferCountHint:(int)hint;	// 0x354751e9
// declared property setter: - (void)setVideoScaleAndCropFactor:(float)factor;	// 0x35475565
- (BOOL)sourcesFromFrontFacingCamera;	// 0x35474d11
- (void)updateAudioChannelsArray;	// 0x35475cc5
- (void)updateAudioLevelsArray;	// 0x3547629d
// converted property getter: - (CGRect)videoCropRect;	// 0x3547547d
// converted property getter: - (BOOL)videoFirstAndLastFramesUncropped;	// 0x35475111
// declared property getter: - (XXStruct_pwHToB)videoMaxFrameDuration;	// 0x3547576d
// declared property getter: - (float)videoMaxScaleAndCropFactor;	// 0x35474941
// declared property getter: - (XXStruct_pwHToB)videoMinFrameDuration;	// 0x35475a09
// converted property getter: - (CGSize)videoMotionFilterOverlapRatios;	// 0x35474f71
// declared property getter: - (int)videoOrientation;	// 0x354748d1
// converted property getter: - (int)videoRetainedBufferCountHint;	// 0x354752a5
// declared property getter: - (float)videoScaleAndCropFactor;	// 0x35474961
@end

