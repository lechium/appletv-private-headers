/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVController : NSObject {
@private
	AVControllerPrivate *_priv;	// 4 = 0x4
}
@property(assign) double currentTime;	// G=0x30e98fad; S=0x30eacd81; converted property
@property(assign) id delegate;	// G=0x30ead999; S=0x30e98a6d; converted property
@property(assign) BOOL muted;	// G=0x30eace25; S=0x30eacec1; converted property
@property(retain) id outputQTESFilePath;	// G=0x30e9d36d; S=0x30eacff1; converted property
@property(retain) id queue;	// G=0x30eac1f9; S=0x30e96205; converted property
@property(retain) id queueFeeder;	// G=0x30eac931; S=0x30ea0851; converted property
@property(assign) BOOL shouldDisplayClosedCaptions;	// G=0x30ead035; S=0x30e98b69; converted property
@property(assign) BOOL vibrationEnabled;	// G=0x30eabc09; S=0x30eabc21; converted property
@property(retain) id vibrationPattern;	// G=0x30eabcfd; S=0x30eabc79; converted property
@property(assign) OpaqueFigVisualContext *visualContext;	// G=0x30eacf79; S=0x30eacf8d; converted property
@property(assign) float volume;	// G=0x30e98a0d; S=0x30ea0bf1; converted property
+ (id)avController;	// 0x30eabeed
+ (id)avControllerWithQueue:(id)queue error:(id *)error;	// 0x30eabf29
+ (id)compatibleAudioRouteForRoute:(id)route;	// 0x30eabd39
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inDictionaries:(id)dictionaries;	// 0x30eabf69
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x30e9fa3d
+ (BOOL)isSupportedFileExtension:(id)extension;	// 0x30eabe99
+ (BOOL)isSupportedMimeType:(id)type;	// 0x30eabe45
+ (void)setEnableNetworkMode:(BOOL)mode;	// 0x30ea0c75
- (id)init;	// 0x30e95c3d
- (id)initForStreaming;	// 0x30eac069
- (id)initWithError:(id *)error;	// 0x30e96061
- (id)initWithQueue:(id)queue error:(id *)error;	// 0x30e95c51
- (id)initWithQueue:(id)queue fmpType:(unsigned)type error:(id *)error;	// 0x30e95c85
- (id)_figPlayerNotifications;	// 0x30eada99
- (BOOL)activate:(id *)activate;	// 0x30eacc6d
- (id)addNextFeederItemToQueue;	// 0x30e992b1
- (void)applyDesiredRepeatMode;	// 0x30ead469
- (id)attributeForKey:(id)key;	// 0x30e981bd
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)notification;	// 0x30e969a5
- (BOOL)beginInterruption:(id *)interruption;	// 0x30eacb3d
- (BOOL)beginRepeatGap;	// 0x30ea10bd
- (id)bookmarkGroupIDForAVItem:(id)avitem;	// 0x30e9ae39
- (double)bookmarkTimeForAVItem:(id)avitem;	// 0x30e9ae5d
- (BOOL)canBeginInterruption;	// 0x30eacbf5
- (void)cancelAllCGImageRequests;	// 0x30ead301
- (void)cancelContinueAfterRepeatGap;	// 0x30e9cb09
- (void)checkQueueSpace;	// 0x30e99209
- (void)continueAfterRepeatGap;	// 0x30eac959
- (long)copyImageForTime:(CVBufferRef *)time time:(const XXStruct_pwHToB *)time2;	// 0x30eac1f1
- (OpaqueFigPlaybackItem *)createItemWithURL:(id)url flags:(unsigned long)flags error:(int *)error;	// 0x30e9d209
- (OpaqueFigPlaybackItem *)currentFPItem;	// 0x30e99059
- (id)currentItem;	// 0x30e99079
- (void)currentItemHasChanged:(id)changed;	// 0x30e9b5e9
- (void)currentItemWillChangeToItem:(id)currentItem oldItemCurrentTime:(double)time;	// 0x30e9b18d
// converted property getter: - (double)currentTime;	// 0x30e98fad
- (void)dealloc;	// 0x30ea695d
// converted property getter: - (id)delegate;	// 0x30ead999
- (void)dequeueDeadItem;	// 0x30eae125
- (void)dequeueFirstItem;	// 0x30e9fd91
- (void)endInterruptionWithStatus:(id)status;	// 0x30eacd25
- (void)ensurePlaybackQueueImmed;	// 0x30eae02d
- (int)eqPreset;	// 0x30eacf65
- (id)errorWithDescription:(id)description code:(long)code;	// 0x30eacaa5
- (void)feederInvalidatedWithCurrentItemMoved:(id)currentItemMoved;	// 0x30eac775
- (void)feederRangeWasInserted:(id)inserted;	// 0x30eac20d
- (void)feederRangeWasRemoved:(id)removed;	// 0x30eac4cd
- (void)figPlayerNotificationHandler:(id)handler;	// 0x30eae155
- (void)fmpEffectiveVolumeDidChange;	// 0x30ead33d
- (void)fpItemNotification:(id)notification sender:(id)sender;	// 0x30e9ba49
- (CGImageRef)grabCGImageAtTime:(double)time withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions actualTime:(double *)time4;	// 0x30ea6529
- (BOOL)havePlayedCurrentItem;	// 0x30eac945
- (unsigned)indexOfCurrentQueueFeederItem;	// 0x30e9fb25
- (BOOL)isCurrentItemReady;	// 0x30eadfe1
- (BOOL)isNewImageAvailableForTime:(const XXStruct_pwHToB *)time willNeverBeAvailable:(BOOL *)available;	// 0x30eac1ed
- (BOOL)isValid;	// 0x30eada35
- (void)itemHasFinishedPlayingNotification:(id)notification;	// 0x30ea1011
- (id)lkLayer;	// 0x30ead021
- (void)logPerformanceDataForCurrentItem;	// 0x30eadcdd
- (void)makeCurrentItemReady;	// 0x30e9cb45
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x30ea0811
// converted property getter: - (BOOL)muted;	// 0x30eace25
- (BOOL)okToNotifyFromThisThread;	// 0x30e9b4b9
// converted property getter: - (id)outputQTESFilePath;	// 0x30e9d36d
- (void)pause;	// 0x30e9fb11
- (BOOL)play:(id *)play;	// 0x30eac96d
- (BOOL)playNextItem:(id *)item;	// 0x30e9fd21
- (AVControllerPrivate *)privateStorage;	// 0x30eac1dd
// converted property getter: - (id)queue;	// 0x30eac1f9
// converted property getter: - (id)queueFeeder;	// 0x30eac931
- (float)rate;	// 0x30e9b74d
- (void)rateDidChangeToRate:(float)rate;	// 0x30e9ea51
- (void)registerTimeMarkerObserver:(id)observer forItem:(id)item times:(id)times context:(id)context;	// 0x30eade71
- (void)removeObserver:(id)observer fromTMOArray:(id)tmoarray;	// 0x30ea04cd
- (int)repeatMode;	// 0x30ea083d
- (void)requestAsyncCGImagesAtTimes:(id)times requestIDs:(id)ids withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x30ead139
- (void)requestAsyncCGImagesAtTimes:(id)times withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x30ead115
- (BOOL)resumePlayback:(double)playback error:(id *)error;	// 0x30eac989
- (void)safeSubtitleCommandPosted:(void *)posted;	// 0x30ead9ad
- (void)scheduleQueueSpaceCheck;	// 0x30e9c929
- (void)scheduleUpdateTimeMarkerObservations;	// 0x30e9b7ad
- (void)seekToDate:(id)date;	// 0x30eacda5
- (void)setAVItemClass:(Class)aClass;	// 0x30eac055
- (void)setApplyVideoTrackMatrix;	// 0x30ead049
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x30e96c6d
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x30eacd81
- (void)setCurrentTime:(double)time options:(int)options;	// 0x30ea0909
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30e98a6d
- (void)setEQPreset:(int)preset;	// 0x30e98abd
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned)currentQueueFeederItem error:(id *)error;	// 0x30e9fb91
- (void)setLayer:(id)layer;	// 0x30e98c6d
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x30eacec1
// converted property setter: - (void)setOutputQTESFilePath:(id)path;	// 0x30eacff1
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x30eae04d
// converted property setter: - (void)setQueue:(id)queue;	// 0x30e96205
// converted property setter: - (void)setQueueFeeder:(id)feeder;	// 0x30ea0851
- (void)setQueueFeeder:(id)feeder withIndex:(int)index;	// 0x30e98d11
- (BOOL)setRate:(float)rate error:(id *)error;	// 0x30e9c9b5
- (BOOL)setRepeatMode:(int)mode;	// 0x30e98ce1
// converted property setter: - (void)setShouldDisplayClosedCaptions:(BOOL)displayClosedCaptions;	// 0x30e98b69
- (void)setSubtitleRecipient:(id)recipient;	// 0x30e98b25
// converted property setter: - (void)setVibrationEnabled:(BOOL)enabled;	// 0x30eabc21
// converted property setter: - (void)setVibrationPattern:(id)pattern;	// 0x30eabc79
// converted property setter: - (void)setVisualContext:(OpaqueFigVisualContext *)context;	// 0x30eacf8d
// converted property setter: - (void)setVolume:(float)volume;	// 0x30ea0bf1
- (BOOL)shouldBeginPlayingItem:(id)item error:(id *)error;	// 0x30e9dda9
// converted property getter: - (BOOL)shouldDisplayClosedCaptions;	// 0x30ead035
- (void)stepByCount:(int)count;	// 0x30eacdf5
- (void)unregisterTimeMarkerObserver:(id)observer forItem:(id)item;	// 0x30ea0361
- (long)updateActionAtEnd;	// 0x30e98b7d
- (void)updateTimeMarkerObservations;	// 0x30e9dfc1
// converted property getter: - (BOOL)vibrationEnabled;	// 0x30eabc09
// converted property getter: - (id)vibrationPattern;	// 0x30eabcfd
// converted property getter: - (OpaqueFigVisualContext *)visualContext;	// 0x30eacf79
// converted property getter: - (float)volume;	// 0x30e98a0d
@end

