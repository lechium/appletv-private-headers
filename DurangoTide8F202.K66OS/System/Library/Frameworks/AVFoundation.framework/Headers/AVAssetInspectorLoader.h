/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSURL, AVAssetCache, AVAssetInspector, NSMutableArray, NSString, NSDictionary, AVWeakReference;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
	AVAssetInspector *_assetInspector;	// 4 = 0x4
	AVAssetCache *_assetCache;	// 8 = 0x8
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;	// 12 = 0xc
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;	// 13 = 0xd
	NSDictionary *_validationPlist;	// 16 = 0x10
	BOOL _URLIsStreamingURL;	// 20 = 0x14
@private
	AVWeakReference *_weakReference;	// 24 = 0x18
	OpaqueFigFormatReader *_formatReader;	// 28 = 0x1c
	OpaqueFigSimpleMutex *_loadingMutex;	// 32 = 0x20
	NSMutableArray *_keysAwaitingCompletion;	// 36 = 0x24
	int _durationLoadingStatus;	// 40 = 0x28
	int _tracksLoadingStatus;	// 44 = 0x2c
	int _lyricsLoadingStatus;	// 48 = 0x30
	int _chapterGroupInfoLoadingStatus;	// 52 = 0x34
	int _status;	// 56 = 0x38
	int _basicInspectionFailureCode;	// 60 = 0x3c
	NSURL *_URL;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x30418f9d; @synthesize=_URL
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x30418f8d; @synthesize=_assetCache
@property(readonly, retain) AVAssetInspector *assetInspector;	// G=0x30419f7d; converted property
@property(readonly, assign, nonatomic) NSArray *chapterGroupInfo;	// G=0x30419691; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x304195b9; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x3041a941; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x30419649; 
@property(readonly, assign, nonatomic, getter=_formatReader) OpaqueFigFormatReader *formatReader;	// G=0x30419d4d; 
@property(readonly, assign, nonatomic, getter=_formatReaderLoader) OpaqueFigFormatReaderLoader *formatReaderLoader;	// G=0x30419f4d; 
@property(readonly, assign, nonatomic) BOOL hasProtectedContent;	// G=0x3041aa95; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x304196c9; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x3041ae61; 
@property(readonly, assign, nonatomic, getter=_playbackItem) OpaqueFigPlaybackItem *playbackItem;	// G=0x30418f09; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x30419601; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x30418f7d; @synthesize=_shouldMatchDataInCacheByURLPathComponentOnly
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x30418f6d; @synthesize=_shouldMatchDataInCacheByURLWithoutQueryComponent
@property(readonly, assign, nonatomic, getter=_isStreaming) BOOL streaming;	// G=0x3041c0a5; 
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference *weakReference;	// G=0x30418ee1; 
- (id)init;	// 0x30419a8d
- (id)initWithURL:(id)url;	// 0x30419aa5
// declared property getter: - (id)URL;	// 0x30418f9d
- (id)_chapterGroupInfo;	// 0x3041adf9
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x30419f15
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x30419ee5
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;	// 0x3041a91d
// declared property getter: - (OpaqueFigFormatReader *)_formatReader;	// 0x30419d4d
// declared property getter: - (OpaqueFigFormatReaderLoader *)_formatReaderLoader;	// 0x30419f4d
- (id)_getAndPruneCompletionsWhileMutexLocked;	// 0x3041a1a5
- (BOOL)_inspectionRequiresAFormatReader;	// 0x30418f05
// declared property getter: - (BOOL)_isStreaming;	// 0x3041c0a5
- (void)_loadChapterGroupInfoSynchronously;	// 0x3041aad1
- (void)_loadDurationSynchronously;	// 0x3041a401
- (void)_loadLyricsSynchronously;	// 0x3041abe1
- (void)_loadTracksSynchronously;	// 0x3041ab85
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x30419eb5
- (id)_loadValuesWhileMutexLockedForKeys:(id)keys;	// 0x30419fad
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x30418ef1
- (id)_lyrics;	// 0x3041c03d
- (id)_mapFigErrorCodeToNSError:(long)nserror;	// 0x3041a3b9
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x30418f09
- (BOOL)_providesAccurateTiming;	// 0x30418f01
- (void)_serverHasDied;	// 0x3041959d
- (void)_setStatus:(int)status figErrorCode:(long)code;	// 0x3041a615
- (int)_status;	// 0x30418f0d
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;	// 0x304199b1
- (id)_statusOfValueOfChapterGroupInfoWhileMutexLocked;	// 0x304198a1
- (id)_statusOfValueOfDurationWhileMutexLocked;	// 0x30419955
- (id)_statusOfValueOfLyricsWhileMutexLocked;	// 0x304198dd
- (id)_statusOfValueOfTracksWhileMutexLocked;	// 0x30419919
- (int)_statusOfValueWhileMutexLockedForKey:(id)key error:(id *)error;	// 0x30419801
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)keys;	// 0x3041a311
- (void)_updateChapterGroupInfoStatusWhileMutexLocked:(int)locked;	// 0x30418f59
- (void)_updateDurationStatusWhileMutexLocked:(int)locked;	// 0x30418f1d
- (void)_updateLyricsStatusWhileMutexLocked:(int)locked;	// 0x30418f45
- (BOOL)_updateStatusWhileMutexLocked:(int)locked figErrorCode:(long)code;	// 0x30419701
- (void)_updateTracksStatusWhileMutexLocked:(int)locked;	// 0x30418f31
// declared property getter: - (id)_weakReference;	// 0x30418ee1
// declared property getter: - (id)assetCache;	// 0x30418f8d
// converted property getter: - (id)assetInspector;	// 0x30419f7d
- (void)cancelLoading;	// 0x304199d1
// declared property getter: - (id)chapterGroupInfo;	// 0x30419691
- (id)copyWithZone:(NSZone *)zone;	// 0x304199e9
- (void)dealloc;	// 0x30419ded
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3041a941
- (void)finalize;	// 0x30419d9d
// declared property getter: - (BOOL)hasProtectedContent;	// 0x3041aa95
// declared property getter: - (BOOL)isComposable;	// 0x304195b9
// declared property getter: - (BOOL)isExportable;	// 0x30419649
// declared property getter: - (BOOL)isPlayable;	// 0x3041ae61
// declared property getter: - (BOOL)isReadable;	// 0x30419601
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3041a435
// declared property getter: - (id)lyrics;	// 0x304196c9
- (void)release;	// 0x304199fd
- (id)retain;	// 0x30419a45
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x30418f7d
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x30418f6d
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3041a6ed
@end

