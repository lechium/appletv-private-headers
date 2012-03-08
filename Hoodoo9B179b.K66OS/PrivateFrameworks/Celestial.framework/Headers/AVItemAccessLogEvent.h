/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class AVItemAccessLogEventInternal, NSDate, NSString;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
@private
	AVItemAccessLogEventInternal *_playerItemAccessLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x30f31779; 
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x30f319fd; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x30f31b85; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x30f31ac1; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x30f31be9; 
@property(readonly, assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x30f316a5; 
@property(readonly, assign, nonatomic) int numberOfServerAddressChanges;	// G=0x30f31861; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x30f31a61; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x30f31b21; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x30f318c1; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x30f31705; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x30f31935; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x30f31999; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x30f317ed; 
- (id)init;	// 0x30f314f5
- (id)initWithDictionary:(id)dictionary;	// 0x30f3158d
// declared property getter: - (id)URI;	// 0x30f31779
- (id)copyWithZone:(NSZone *)zone;	// 0x30f315e1
- (void)dealloc;	// 0x30f31635
// declared property getter: - (double)durationWatched;	// 0x30f319fd
- (void)finalize;	// 0x30f315f1
// declared property getter: - (double)indicatedBitrate;	// 0x30f31b85
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x30f31ac1
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x30f31be9
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x30f316a5
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x30f31861
// declared property getter: - (int)numberOfStalls;	// 0x30f31a61
// declared property getter: - (double)observedBitrate;	// 0x30f31b21
// declared property getter: - (id)playbackSessionID;	// 0x30f318c1
// declared property getter: - (id)playbackStartDate;	// 0x30f31705
// declared property getter: - (double)playbackStartOffset;	// 0x30f31935
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x30f31999
// declared property getter: - (id)serverAddress;	// 0x30f317ed
@end

