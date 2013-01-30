/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSDateFormatter, NSTimer, BRTransportLayer, NSArray, BRStrokeAndFillTextControl, BRTextControl;
@protocol BRTransportDataProvider;

__attribute__((visibility("hidden")))
@interface BRTransportControl : BRControl {
	long _duration;	// 84 = 0x54
	long _elapsedTime;	// 88 = 0x58
	id<BRTransportDataProvider> _dataProvider;	// 92 = 0x5c
	BRTransportLayer *_transportLayer;	// 96 = 0x60
	BRTextControl *_durationLayer;	// 100 = 0x64
	BRStrokeAndFillTextControl *_elapsedTimeLayer;	// 104 = 0x68
	BRTextControl *_leftSideTextLayer;	// 108 = 0x6c
	BRStrokeAndFillTextControl *_chapterLayer;	// 112 = 0x70
	NSArray *_chapterMarkers;	// 116 = 0x74
	NSArray *_interstitialMarkers;	// 120 = 0x78
	NSDateFormatter *_timeFormatter;	// 124 = 0x7c
	NSTimer *_fadeTimer;	// 128 = 0x80
	NSTimer *_transportBarTimer;	// 132 = 0x84
}
- (id)initWithSpinner:(BOOL)spinner;	// 0x319ac1
- (id)_chapterAttributes;	// 0x31b395
- (id)_chapterMarkerLocations;	// 0x31b569
- (void)_fadeTransport:(id)transport;	// 0x31c429
- (void)_handleBufferChanged:(id)changed;	// 0x31c771
- (void)_handlePlayerAssetChanged:(id)changed;	// 0x31bb65
- (void)_handlePlayerTimeChanged:(id)changed;	// 0x31c701
- (void)_handleStateChange:(id)change;	// 0x31b9ad
- (void)_handleTimeSkip:(id)skip;	// 0x31b935
- (void)_handleVolumeChange:(id)change;	// 0x31bbd9
- (void)_hideTransport;	// 0x31bbe9
- (id)_interstitialMarkerLocations;	// 0x31b7bd
- (BOOL)_shouldShowChapterGroupName;	// 0x31b521
- (BOOL)_shouldShowChapterMarks;	// 0x31b4fd
- (void)_showTransport;	// 0x31bdc5
- (void)_showTransportTimerFired:(id)fired;	// 0x31bd75
- (void)_showTransportWithTimeout;	// 0x31c2c9
- (void)_showTransportWithTimeoutInSeconds:(float)seconds;	// 0x31c391
- (id)_trackTimeAttributes;	// 0x31b4bd
- (void)_updateAll;	// 0x31a539
- (void)_updateBufferingProgressForNonLiveContent;	// 0x31b211
- (void)_updateTimeAndBufferingForLiveContent;	// 0x31a5d9
- (void)_updateTimeForNonLiveContent;	// 0x31adbd
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x31c659
- (void)dealloc;	// 0x319d2d
- (void)hideTransport;	// 0x31a071
- (BOOL)isHidden;	// 0x31a4f5
- (void)layoutSubcontrols;	// 0x31a179
- (void)setDataProvider:(id)provider eventSource:(id)source;	// 0x319e49
- (void)setShowChapterMarks:(BOOL)marks;	// 0x31a519
- (void)showTransport;	// 0x31a081
- (void)showTransportWithLongTimeout;	// 0x31a12d
- (void)showTransportWithMediumTimeout;	// 0x31a0e1
- (void)showTransportWithShortTimeout;	// 0x31a095
@end
