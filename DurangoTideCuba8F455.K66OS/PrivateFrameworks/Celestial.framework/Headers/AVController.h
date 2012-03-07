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
@property(assign) double currentTime;	// G=0x32387a61; S=0x32399dd1; converted property
@property(assign) id delegate;	// G=0x32399889; S=0x32387585; converted property
@property(assign) BOOL muted;	// G=0x3239bf55; S=0x3239bfd5; converted property
@property(retain) id outputQTESFilePath;	// G=0x3238bb41; S=0x3239b25d; converted property
@property(retain) id queue;	// G=0x32399811; S=0x32385149; converted property
@property(retain) id queueFeeder;	// G=0x32399821; S=0x3238ee1d; converted property
@property(assign) BOOL shouldDisplayClosedCaptions;	// G=0x32399875; S=0x32387651; converted property
@property(assign) BOOL vibrationEnabled;	// G=0x323996c9; S=0x323997a1; converted property
@property(retain) id vibrationPattern;	// G=0x32399705; S=0x32399739; converted property
@property(assign) OpaqueFigVisualContext *visualContext;	// G=0x32399855; S=0x3239c129; converted property
@property(assign) float volume;	// G=0x32387531; S=0x3238f18d; converted property
+ (id)avController;	// 0x32399f0d
+ (id)avControllerWithQueue:(id)queue error:(id *)error;	// 0x32399ed5
+ (id)compatibleAudioRouteForRoute:(id)route;	// 0x32399f41
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inDictionaries:(id)dictionaries;	// 0x3239b425
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x3238e099
+ (BOOL)isSupportedFileExtension:(id)extension;	// 0x3239b559
+ (BOOL)isSupportedMimeType:(id)type;	// 0x3239b505
+ (void)setEnableNetworkMode:(BOOL)mode;	// 0x3238f1f9
- (id)init;	// 0x32384bd1
- (id)initForStreaming;	// 0x32399eb5
- (id)initWithError:(id *)error;	// 0x32384fad
- (id)initWithQueue:(id)queue error:(id *)error;	// 0x32384be9
- (id)initWithQueue:(id)queue fmpType:(unsigned)type error:(id *)error;	// 0x32384c1d
- (id)_figPlayerNotifications;	// 0x32399b39
- (BOOL)activate:(id *)activate;	// 0x3239be85
- (id)addNextFeederItemToQueue;	// 0x32387d45
- (void)applyDesiredRepeatMode;	// 0x3239b9ad
- (id)attributeForKey:(id)key;	// 0x32386db1
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)notification;	// 0x32385891
- (BOOL)beginInterruption:(id *)interruption;	// 0x3239be09
- (BOOL)beginRepeatGap;	// 0x3238f60d
- (id)bookmarkGroupIDForAVItem:(id)avitem;	// 0x323897a5
- (double)bookmarkTimeForAVItem:(id)avitem;	// 0x323897c9
- (BOOL)canBeginInterruption;	// 0x3239b1f5
- (void)cancelAllCGImageRequests;	// 0x3239a935
- (void)cancelContinueAfterRepeatGap;	// 0x3238b35d
- (void)checkQueueSpace;	// 0x32387cb9
- (void)continueAfterRepeatGap;	// 0x32399e9d
- (long)copyImageForTime:(CVBufferRef *)time time:(const XXStruct_pwHToB *)time2;	// 0x32399809
- (OpaqueFigPlaybackItem *)createItemWithURL:(id)url flags:(unsigned long)flags error:(int *)error;	// 0x3238ba01
- (OpaqueFigPlaybackItem *)currentFPItem;	// 0x32387b09
- (id)currentItem;	// 0x32387b2d
- (void)currentItemHasChanged:(id)changed;	// 0x32389efd
- (void)currentItemWillChangeToItem:(id)currentItem oldItemCurrentTime:(double)time;	// 0x32389af9
// converted property getter: - (double)currentTime;	// 0x32387a61
- (void)dealloc;	// 0x32394961
// converted property getter: - (id)delegate;	// 0x32399889
- (void)dequeueDeadItem;	// 0x32399959
- (void)dequeueFirstItem;	// 0x3238e3d1
- (void)endInterruptionWithStatus:(id)status;	// 0x3239a8c9
- (void)ensurePlaybackQueueImmed;	// 0x32399981
- (int)eqPreset;	// 0x32399845
- (id)errorWithDescription:(id)description code:(long)code;	// 0x32399df5
- (void)feederInvalidatedWithCurrentItemMoved:(id)currentItemMoved;	// 0x3239b815
- (void)feederRangeWasInserted:(id)inserted;	// 0x3239b5ad
- (void)feederRangeWasRemoved:(id)removed;	// 0x3239ac71
- (void)figPlayerNotificationHandler:(id)handler;	// 0x3239a101
- (void)fmpEffectiveVolumeDidChange;	// 0x32399c91
- (void)fpItemNotification:(id)notification sender:(id)sender;	// 0x3238a2fd
- (CGImageRef)grabCGImageAtTime:(double)time withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions actualTime:(double *)time4;	// 0x32394595
- (BOOL)havePlayedCurrentItem;	// 0x32399831
- (unsigned)indexOfCurrentQueueFeederItem;	// 0x3238e191
- (BOOL)isCurrentItemReady;	// 0x323999a5
- (BOOL)isNewImageAvailableForTime:(const XXStruct_pwHToB *)time willNeverBeAvailable:(BOOL *)available;	// 0x32399805
- (BOOL)isValid;	// 0x3239bf01
- (void)itemHasFinishedPlayingNotification:(id)notification;	// 0x3238f579
- (id)lkLayer;	// 0x32399865
- (void)logPerformanceDataForCurrentItem;	// 0x3239c22d
- (void)makeCurrentItemReady;	// 0x3238b395
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x3238ede9
// converted property getter: - (BOOL)muted;	// 0x3239bf55
- (BOOL)okToNotifyFromThisThread;	// 0x32389dd5
// converted property getter: - (id)outputQTESFilePath;	// 0x3238bb41
- (void)pause;	// 0x3238e179
- (BOOL)play:(id *)play;	// 0x32399e81
- (BOOL)playNextItem:(id *)item;	// 0x3238e369
- (AVControllerPrivate *)privateStorage;	// 0x323997f5
// converted property getter: - (id)queue;	// 0x32399811
// converted property getter: - (id)queueFeeder;	// 0x32399821
- (float)rate;	// 0x3238a049
- (void)rateDidChangeToRate:(float)rate;	// 0x3238d0b9
- (void)registerTimeMarkerObserver:(id)observer forItem:(id)item times:(id)times context:(id)context;	// 0x323999f1
- (void)removeObserver:(id)observer fromTMOArray:(id)tmoarray;	// 0x3238eab5
- (int)repeatMode;	// 0x3238ee0d
- (void)requestAsyncCGImagesAtTimes:(id)times requestIDs:(id)ids withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x3239aecd
- (void)requestAsyncCGImagesAtTimes:(id)times withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x32399dad
- (BOOL)resumePlayback:(double)playback error:(id *)error;	// 0x3239b0e5
- (void)safeSubtitleCommandPosted:(void *)posted;	// 0x3239b291
- (void)scheduleQueueSpaceCheck;	// 0x3238b1ad
- (void)scheduleUpdateTimeMarkerObservations;	// 0x3238a095
- (void)seekToDate:(id)date;	// 0x3239a969
- (void)setAVItemClass:(Class)aClass;	// 0x323997e5
- (void)setApplyVideoTrackMatrix;	// 0x3239c061
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x32385b21
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x32399dd1
- (void)setCurrentTime:(double)time options:(int)options;	// 0x3238eed5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32387585
- (void)setEQPreset:(int)preset;	// 0x323875c9
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned)currentQueueFeederItem error:(id *)error;	// 0x3238e1e9
- (void)setLayer:(id)layer;	// 0x3238774d
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x3239bfd5
// converted property setter: - (void)setOutputQTESFilePath:(id)path;	// 0x3239b25d
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x3239c17d
// converted property setter: - (void)setQueue:(id)queue;	// 0x32385149
// converted property setter: - (void)setQueueFeeder:(id)feeder;	// 0x3238ee1d
- (void)setQueueFeeder:(id)feeder withIndex:(int)index;	// 0x323877d5
- (BOOL)setRate:(float)rate error:(id *)error;	// 0x3238b231
- (BOOL)setRepeatMode:(int)mode;	// 0x323877a5
// converted property setter: - (void)setShouldDisplayClosedCaptions:(BOOL)displayClosedCaptions;	// 0x32387651
- (void)setSubtitleRecipient:(id)recipient;	// 0x32387615
// converted property setter: - (void)setVibrationEnabled:(BOOL)enabled;	// 0x323997a1
// converted property setter: - (void)setVibrationPattern:(id)pattern;	// 0x32399739
// converted property setter: - (void)setVisualContext:(OpaqueFigVisualContext *)context;	// 0x3239c129
// converted property setter: - (void)setVolume:(float)volume;	// 0x3238f18d
- (BOOL)shouldBeginPlayingItem:(id)item error:(id *)error;	// 0x3238c5ad
// converted property getter: - (BOOL)shouldDisplayClosedCaptions;	// 0x32399875
- (void)stepByCount:(int)count;	// 0x3239a9b1
- (void)unregisterTimeMarkerObserver:(id)observer forItem:(id)item;	// 0x3238e951
- (long)updateActionAtEnd;	// 0x32387665
- (void)updateTimeMarkerObservations;	// 0x3238c7a5
// converted property getter: - (BOOL)vibrationEnabled;	// 0x323996c9
// converted property getter: - (id)vibrationPattern;	// 0x32399705
// converted property getter: - (OpaqueFigVisualContext *)visualContext;	// 0x32399855
// converted property getter: - (float)volume;	// 0x32387531
@end
