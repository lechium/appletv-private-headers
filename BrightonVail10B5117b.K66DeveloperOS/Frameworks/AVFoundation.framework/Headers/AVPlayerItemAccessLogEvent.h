/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class NSDate, AVPlayerItemAccessLogEventInternal, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {
	AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x302cec35; 
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x302ceeb1; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x302cf031; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x302cef71; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x302cf091; 
@property(readonly, assign, nonatomic) int numberOfMediaRequests;	// G=0x302ceb51; 
@property(readonly, assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x302cebb1; 
@property(readonly, assign, nonatomic) int numberOfServerAddressChanges;	// G=0x302ced1d; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x302cef11; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x302cefd1; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x302ced7d; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x302cebc1; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x302cedf1; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x302cee51; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x302ceca9; 
- (id)init;	// 0x302ce9a5
- (id)initWithDictionary:(id)dictionary;	// 0x302cea3d
// declared property getter: - (id)URI;	// 0x302cec35
- (id)copyWithZone:(NSZone *)zone;	// 0x302cea91
- (void)dealloc;	// 0x302ceae5
// declared property getter: - (double)durationWatched;	// 0x302ceeb1
- (void)finalize;	// 0x302ceaa1
// declared property getter: - (double)indicatedBitrate;	// 0x302cf031
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x302cef71
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x302cf091
// declared property getter: - (int)numberOfMediaRequests;	// 0x302ceb51
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x302cebb1
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x302ced1d
// declared property getter: - (int)numberOfStalls;	// 0x302cef11
// declared property getter: - (double)observedBitrate;	// 0x302cefd1
// declared property getter: - (id)playbackSessionID;	// 0x302ced7d
// declared property getter: - (id)playbackStartDate;	// 0x302cebc1
// declared property getter: - (double)playbackStartOffset;	// 0x302cedf1
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x302cee51
// declared property getter: - (id)serverAddress;	// 0x302ceca9
@end

