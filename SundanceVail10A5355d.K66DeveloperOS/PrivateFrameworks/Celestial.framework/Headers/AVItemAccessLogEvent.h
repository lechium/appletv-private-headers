/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSDate, NSString, AVItemAccessLogEventInternal;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
	AVItemAccessLogEventInternal *_playerItemAccessLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x3736954d; 
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x373697c9; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x37369949; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x37369889; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x373699a9; 
@property(readonly, assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x37369479; 
@property(readonly, assign, nonatomic) int numberOfServerAddressChanges;	// G=0x37369635; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x37369829; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x373698e9; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x37369695; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x373694d9; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x37369709; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x37369769; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x373695c1; 
- (id)init;	// 0x373692cd
- (id)initWithDictionary:(id)dictionary;	// 0x37369365
// declared property getter: - (id)URI;	// 0x3736954d
- (id)copyWithZone:(NSZone *)zone;	// 0x373693b9
- (void)dealloc;	// 0x3736940d
// declared property getter: - (double)durationWatched;	// 0x373697c9
- (void)finalize;	// 0x373693c9
// declared property getter: - (double)indicatedBitrate;	// 0x37369949
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x37369889
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x373699a9
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x37369479
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x37369635
// declared property getter: - (int)numberOfStalls;	// 0x37369829
// declared property getter: - (double)observedBitrate;	// 0x373698e9
// declared property getter: - (id)playbackSessionID;	// 0x37369695
// declared property getter: - (id)playbackStartDate;	// 0x373694d9
// declared property getter: - (double)playbackStartOffset;	// 0x37369709
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x37369769
// declared property getter: - (id)serverAddress;	// 0x373695c1
@end
