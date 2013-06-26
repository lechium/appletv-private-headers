/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVQualityOfServiceSample : XXUnknownSuperclass {
	int _numberOfSegmentsDownloaded;	// 4 = 0x4
	NSString *_serverAddress;	// 8 = 0x8
	int _numberOfServerAddressChanges;	// 12 = 0xc
	NSString *_URI;	// 16 = 0x10
	int _numberOfStalls;	// 20 = 0x14
	int _numberOfDroppedVideoFrames;	// 24 = 0x18
	double _segmentsDownloadedDuration;	// 28 = 0x1c
	double _durationWatched;	// 36 = 0x24
	long long _numberOfBytesTransferred;	// 44 = 0x2c
	double _observedBitrate;	// 52 = 0x34
	double _indicatedBitrate;	// 60 = 0x3c
}
@property(retain, nonatomic) NSString *URI;	// G=0x205bf5; S=0x205c05; @synthesize=_URI
@property(assign, nonatomic) double durationWatched;	// G=0x205c41; S=0x205c59; @synthesize=_durationWatched
@property(assign, nonatomic) double indicatedBitrate;	// G=0x205ce5; S=0x205cfd; @synthesize=_indicatedBitrate
@property(assign, nonatomic) long long numberOfBytesTransferred;	// G=0x205c8d; S=0x205ca5; @synthesize=_numberOfBytesTransferred
@property(assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x205d11; S=0x205d21; @synthesize=_numberOfDroppedVideoFrames
@property(assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x205b95; S=0x205ba5; @synthesize=_numberOfSegmentsDownloaded
@property(assign, nonatomic) int numberOfServerAddressChanges;	// G=0x205bd5; S=0x205be5; @synthesize=_numberOfServerAddressChanges
@property(assign, nonatomic) int numberOfStalls;	// G=0x205c6d; S=0x205c7d; @synthesize=_numberOfStalls
@property(assign, nonatomic) double observedBitrate;	// G=0x205cb9; S=0x205cd1; @synthesize=_observedBitrate
@property(assign, nonatomic) double segmentsDownloadedDuration;	// G=0x205c15; S=0x205c2d; @synthesize=_segmentsDownloadedDuration
@property(retain, nonatomic) NSString *serverAddress;	// G=0x205bb5; S=0x205bc5; @synthesize=_serverAddress
// declared property getter: - (id)URI;	// 0x205bf5
- (void)dealloc;	// 0x205b3d
// declared property getter: - (double)durationWatched;	// 0x205c41
// declared property getter: - (double)indicatedBitrate;	// 0x205ce5
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x205c8d
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x205d11
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x205b95
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x205bd5
// declared property getter: - (int)numberOfStalls;	// 0x205c6d
// declared property getter: - (double)observedBitrate;	// 0x205cb9
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x205c15
// declared property getter: - (id)serverAddress;	// 0x205bb5
// declared property setter: - (void)setDurationWatched:(double)watched;	// 0x205c59
// declared property setter: - (void)setIndicatedBitrate:(double)bitrate;	// 0x205cfd
// declared property setter: - (void)setNumberOfBytesTransferred:(long long)bytesTransferred;	// 0x205ca5
// declared property setter: - (void)setNumberOfDroppedVideoFrames:(int)droppedVideoFrames;	// 0x205d21
// declared property setter: - (void)setNumberOfSegmentsDownloaded:(int)segmentsDownloaded;	// 0x205ba5
// declared property setter: - (void)setNumberOfServerAddressChanges:(int)serverAddressChanges;	// 0x205be5
// declared property setter: - (void)setNumberOfStalls:(int)stalls;	// 0x205c7d
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x205cd1
// declared property setter: - (void)setSegmentsDownloadedDuration:(double)duration;	// 0x205c2d
// declared property setter: - (void)setServerAddress:(id)address;	// 0x205bc5
// declared property setter: - (void)setURI:(id)uri;	// 0x205c05
@end
