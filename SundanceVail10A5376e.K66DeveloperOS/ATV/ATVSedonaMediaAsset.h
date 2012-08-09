/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVAudioSelectionDelegate.h"
#import "ATVSubtitleProvider.h"
#import "BRMediaAssetDerivesMediaURL.h"
#import "ATVVideoAsset.h"

@class BRTimer, ATVSubtitleOption, NSArray, NSDictionary, NSNumber, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVSedonaMediaAsset : ATVVideoAsset <ATVSubtitleProvider, ATVAudioSelectionDelegate, BRMediaAssetDerivesMediaURL> {
	BOOL _playlistURLDetermined;	// 12 = 0xc
	BOOL _hasBeenPlayed;	// 13 = 0xd
	BOOL _isPaused;	// 14 = 0xe
	BOOL _isStalled;	// 15 = 0xf
	double _lastNotedPlaybackPosition;	// 16 = 0x10
	BRTimer *_bufferingTimer;	// 24 = 0x18
	BOOL _endSent;	// 28 = 0x1c
	BOOL _startSent;	// 29 = 0x1d
	id _mediaOpenCompletionHandler;	// 32 = 0x20
	NSDictionary *_subtitleOptionsByAudioTrackIndex;	// 36 = 0x24
	NSArray *_subtitleOptions;	// 40 = 0x28
	ATVSubtitleOption *_subtitleOptionBeingLoaded;	// 44 = 0x2c
	ATVSubtitleOption *_defaultSubtitleOption;	// 48 = 0x30
	NSMutableDictionary *_subtitleSampleSets;	// 52 = 0x34
	id _subtitleCompletionHandler;	// 56 = 0x38
	NSNumber *_durationFromNetflixLibrary;	// 60 = 0x3c
	double _timeLastQOSReportSent;	// 64 = 0x40
	double _timeOfLastBookmarkUpdate;	// 72 = 0x48
}
@property(readonly, retain) ATVSubtitleOption *defaultSubtitleOption;	// G=0x230909; converted property
@property(readonly, retain) NSArray *subtitleOptions;	// G=0x230601; converted property
+ (BOOL)shouldUseSedonaMediaAsset:(id)asset;	// 0x22fa71
- (id)initWithDictionary:(id)dictionary;	// 0x22fdbd
- (id)initWithFeedElement:(id)feedElement;	// 0x22fadd
- (id)_ISOLanguageCodeFromBCP47:(id)bcp47;	// 0x231d29
- (void)_configureSubtitlesForAudioTrackIndex:(id)audioTrackIndex;	// 0x231809
- (void)_mediaOpenFinished:(id)finished;	// 0x231271
- (id)_parseItalics:(id)italics;	// 0x231d7d
- (id)_parseSubtitleSamples:(id)samples;	// 0x2323a1
- (void)_playbackEnded:(id)ended;	// 0x230d79
- (void)_playbackProgressChanged:(id)changed;	// 0x230bb9
- (void)_playerEnd:(double)end reason:(id)reason;	// 0x230a71
- (void)_playerStart:(double)start;	// 0x230969
- (void)_playerStateChanged:(id)changed;	// 0x230dd1
- (void)_playerWillStop:(id)_player;	// 0x2310dd
- (void)_reportQualityOfService:(id)service;	// 0x232059
- (void)_setDefaultSubtitleOption:(id)option;	// 0x232901
- (void)_stallDuringPlayback:(id)playback;	// 0x23106d
- (void)_streamSwitched:(id)switched;	// 0x23110d
- (void)_subtitleLoadDidFail:(id)_subtitleLoad;	// 0x231215
- (void)_subtitleLoadDidSucceed:(id)_subtitleLoad;	// 0x23113d
- (void)_timeSkipped:(id)skipped;	// 0x230ce1
- (void)_vendorOutOfDateSoftware:(id)dateSoftware;	// 0x231cc1
- (void)audioDidSelectTrackAtIndex:(id)audio;	// 0x230919
- (void)dealloc;	// 0x22fe01
// converted property getter: - (id)defaultSubtitleOption;	// 0x230909
- (BOOL)forceHDCPProtection;	// 0x230011
- (void)loadSubtitleSamplesForOption:(id)option completionHandler:(id)handler;	// 0x230611
- (void)resolveMediaURL:(id)url;	// 0x230015
- (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x22fff1
- (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x22ffd5
// converted property getter: - (id)subtitleOptions;	// 0x230601
- (id)subtitleSamplesForOption:(id)option;	// 0x2308c5
@end
