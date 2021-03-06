/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {
@private
	AVAudioMixInputParametersInternal *_inputParameters;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int trackID;	// G=0x30b11add; 
- (id)init;	// 0x30b117e9
- (id)_audioVolumeCurve;	// 0x30b12685
- (void)_setRamps:(id)ramps;	// 0x30b12625
- (void)_setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x30b11b1d
- (id)_volumeCurveAsString;	// 0x30b12ce5
- (id)copyWithZone:(NSZone *)zone;	// 0x30b119b9
- (void)dealloc;	// 0x30b11881
- (id)description;	// 0x30b11935
- (void)finalize;	// 0x30b118f1
- (BOOL)getVolumeRampForTime:(XXStruct_pwHToB)time startVolume:(float *)volume endVolume:(float *)volume3 timeRange:(XXStruct_yD8eWC *)range;	// 0x30b1213d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30b11a75
- (void)setTrackID:(int)anId;	// 0x30b11afd
- (void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;	// 0x30b12041
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x30b11f7d
// declared property getter: - (int)trackID;	// 0x30b11add
@end

