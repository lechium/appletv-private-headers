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
@property(assign) double currentTime;	// G=0x338b6d89; S=0x338cc001; converted property
@property(assign) id delegate;	// G=0x338ca231; S=0x338b6835; converted property
@property(assign) BOOL muted;	// G=0x338cbee9; S=0x338cbe49; converted property
@property(retain) id outputQTESFilePath;	// G=0x338bb399; S=0x338cbdb9; converted property
@property(retain) id queue;	// G=0x338ca1a5; S=0x338b3ed9; converted property
@property(retain) id queueFeeder;	// G=0x338ca1b9; S=0x338be9d9; converted property
@property(assign) BOOL shouldDisplayClosedCaptions;	// G=0x338ca21d; S=0x338b692d; converted property
@property(assign) BOOL vibrationEnabled;	// G=0x338ca049; S=0x338ca061; converted property
@property(retain) id vibrationPattern;	// G=0x338ca139; S=0x338ca0b9; converted property
@property(assign) OpaqueFigVisualContext *visualContext;	// G=0x338ca1f5; S=0x338cbde9; converted property
@property(assign) float volume;	// G=0x338b67d1; S=0x338bedad; converted property
+ (id)avController;	// 0x338ca381
+ (id)avControllerWithQueue:(id)queue error:(id *)error;	// 0x338ca341
+ (id)compatibleAudioRouteForRoute:(id)route;	// 0x338ca46d
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inDictionaries:(id)dictionaries;	// 0x338ca245
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x338bdb55
+ (BOOL)isSupportedFileExtension:(id)extension;	// 0x338ca3bd
+ (BOOL)isSupportedMimeType:(id)type;	// 0x338ca415
+ (void)setEnableNetworkMode:(BOOL)mode;	// 0x338bee31
- (id)init;	// 0x338b38d9
- (id)initForStreaming;	// 0x338ccb89
- (id)initWithError:(id *)error;	// 0x338b3d21
- (id)initWithQueue:(id)queue error:(id *)error;	// 0x338b38ed
- (id)initWithQueue:(id)queue fmpType:(unsigned)type error:(id *)error;	// 0x338b3921
- (id)_figPlayerNotifications;	// 0x338cb1f1
- (BOOL)activate:(id *)activate;	// 0x338cc07d
- (id)addNextFeederItemToQueue;	// 0x338b70a1
- (void)applyDesiredRepeatMode;	// 0x338cb43d
- (id)attributeForKey:(id)key;	// 0x338b5fc5
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)notification;	// 0x338b469d
- (BOOL)beginInterruption:(id *)interruption;	// 0x338cc1b5
- (BOOL)beginRepeatGap;	// 0x338bf269
- (id)bookmarkGroupIDForAVItem:(id)avitem;	// 0x338b8d05
- (double)bookmarkTimeForAVItem:(id)avitem;	// 0x338b8d29
- (BOOL)canBeginInterruption;	// 0x338cc141
- (void)cancelAllCGImageRequests;	// 0x338cba95
- (void)cancelContinueAfterRepeatGap;	// 0x338bab0d
- (void)checkQueueSpace;	// 0x338b6ff9
- (void)continueAfterRepeatGap;	// 0x338cc455
- (long)copyImageForTime:(CVBufferRef *)time time:(const XXStruct_pwHToB *)time2;	// 0x338ca19d
- (OpaqueFigPlaybackItem *)createItemWithURL:(id)url flags:(unsigned long)flags error:(int *)error;	// 0x338bb23d
- (OpaqueFigPlaybackItem *)currentFPItem;	// 0x338b6e31
- (id)currentItem;	// 0x338b6e51
- (void)currentItemHasChanged:(id)changed;	// 0x338b94f1
- (void)currentItemWillChangeToItem:(id)currentItem oldItemCurrentTime:(double)time;	// 0x338b9085
// converted property getter: - (double)currentTime;	// 0x338b6d89
- (void)dealloc;	// 0x338c4cd1
// converted property getter: - (id)delegate;	// 0x338ca231
- (void)dequeueDeadItem;	// 0x338cad89
- (void)dequeueFirstItem;	// 0x338bdef1
- (void)endInterruptionWithStatus:(id)status;	// 0x338cc025
- (void)ensurePlaybackQueueImmed;	// 0x338caea1
- (int)eqPreset;	// 0x338ca1e1
- (id)errorWithDescription:(id)description code:(long)code;	// 0x338cc279
- (void)feederInvalidatedWithCurrentItemMoved:(id)currentItemMoved;	// 0x338cc469
- (void)feederRangeWasInserted:(id)inserted;	// 0x338cc8d1
- (void)feederRangeWasRemoved:(id)removed;	// 0x338cc625
- (void)figPlayerNotificationHandler:(id)handler;	// 0x338ca571
- (void)fmpEffectiveVolumeDidChange;	// 0x338cb979
- (void)fpItemNotification:(id)notification sender:(id)sender;	// 0x338b9959
- (CGImageRef)grabCGImageAtTime:(double)time withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions actualTime:(double *)time4;	// 0x338c47f9
- (BOOL)havePlayedCurrentItem;	// 0x338ca1cd
- (unsigned)indexOfCurrentQueueFeederItem;	// 0x338bdc55
- (BOOL)isCurrentItemReady;	// 0x338caec1
- (BOOL)isNewImageAvailableForTime:(const XXStruct_pwHToB *)time willNeverBeAvailable:(BOOL *)available;	// 0x338ca199
- (BOOL)isValid;	// 0x338cb34d
- (void)itemHasFinishedPlayingNotification:(id)notification;	// 0x338bf1bd
- (id)lkLayer;	// 0x338ca209
- (void)logPerformanceDataForCurrentItem;	// 0x338cb079
- (void)makeCurrentItemReady;	// 0x338bab4d
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x338be999
// converted property getter: - (BOOL)muted;	// 0x338cbee9
- (BOOL)okToNotifyFromThisThread;	// 0x338b93b9
// converted property getter: - (id)outputQTESFilePath;	// 0x338bb399
- (void)pause;	// 0x338bdc41
- (BOOL)play:(id *)play;	// 0x338cc439
- (BOOL)playNextItem:(id *)item;	// 0x338bde81
- (AVControllerPrivate *)privateStorage;	// 0x338ca189
// converted property getter: - (id)queue;	// 0x338ca1a5
// converted property getter: - (id)queueFeeder;	// 0x338ca1b9
- (float)rate;	// 0x338b9651
- (void)rateDidChangeToRate:(float)rate;	// 0x338bcb11
- (void)registerTimeMarkerObserver:(id)observer forItem:(id)item times:(id)times context:(id)context;	// 0x338caf11
- (void)removeObserver:(id)observer fromTMOArray:(id)tmoarray;	// 0x338be645
- (int)repeatMode;	// 0x338be9c5
- (void)requestAsyncCGImagesAtTimes:(id)times requestIDs:(id)ids withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x338cbacd
- (void)requestAsyncCGImagesAtTimes:(id)times withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x338cbccd
- (BOOL)resumePlayback:(double)playback error:(id *)error;	// 0x338cc311
- (void)safeSubtitleCommandPosted:(void *)posted;	// 0x338cb3b5
- (void)scheduleQueueSpaceCheck;	// 0x338ba939
- (void)scheduleUpdateTimeMarkerObservations;	// 0x338b96ad
- (void)seekToDate:(id)date;	// 0x338cbfb5
- (void)setAVItemClass:(Class)aClass;	// 0x338ca175
- (void)setApplyVideoTrackMatrix;	// 0x338cbcf1
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x338b4955
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x338cc001
- (void)setCurrentTime:(double)time options:(int)options;	// 0x338bea91
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x338b6835
- (void)setEQPreset:(int)preset;	// 0x338b687d
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned)currentQueueFeederItem error:(id *)error;	// 0x338bdcc1
- (void)setLayer:(id)layer;	// 0x338b6a31
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x338cbe49
// converted property setter: - (void)setOutputQTESFilePath:(id)path;	// 0x338cbdb9
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x338cadb9
// converted property setter: - (void)setQueue:(id)queue;	// 0x338b3ed9
// converted property setter: - (void)setQueueFeeder:(id)feeder;	// 0x338be9d9
- (void)setQueueFeeder:(id)feeder withIndex:(int)index;	// 0x338b6ad1
- (BOOL)setRate:(float)rate error:(id *)error;	// 0x338ba9c1
- (BOOL)setRepeatMode:(int)mode;	// 0x338b6aa1
// converted property setter: - (void)setShouldDisplayClosedCaptions:(BOOL)displayClosedCaptions;	// 0x338b692d
- (void)setSubtitleRecipient:(id)recipient;	// 0x338b68e9
// converted property setter: - (void)setVibrationEnabled:(BOOL)enabled;	// 0x338ca061
// converted property setter: - (void)setVibrationPattern:(id)pattern;	// 0x338ca0b9
// converted property setter: - (void)setVisualContext:(OpaqueFigVisualContext *)context;	// 0x338cbde9
// converted property setter: - (void)setVolume:(float)volume;	// 0x338bedad
- (BOOL)shouldBeginPlayingItem:(id)item error:(id *)error;	// 0x338bbe69
// converted property getter: - (BOOL)shouldDisplayClosedCaptions;	// 0x338ca21d
- (void)stepByCount:(int)count;	// 0x338cbf85
- (void)unregisterTimeMarkerObserver:(id)observer forItem:(id)item;	// 0x338be4c1
- (long)updateActionAtEnd;	// 0x338b6941
- (void)updateTimeMarkerObservations;	// 0x338bc071
// converted property getter: - (BOOL)vibrationEnabled;	// 0x338ca049
// converted property getter: - (id)vibrationPattern;	// 0x338ca139
// converted property getter: - (OpaqueFigVisualContext *)visualContext;	// 0x338ca1f5
// converted property getter: - (float)volume;	// 0x338b67d1
@end

