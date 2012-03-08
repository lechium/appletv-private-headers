/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetInspectorLoader.h"
#import "AVFoundation-Structs.h"

@class NSURL, AVAssetInspector, AVAssetCache, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
	AVAssetInspector *_assetInspector;	// 8 = 0x8
	AVAssetCache *_assetCache;	// 12 = 0xc
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;	// 16 = 0x10
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;	// 17 = 0x11
	NSURL *_downloadDestinationURL;	// 20 = 0x14
@private
	OpaqueFigFormatReader *_formatReader;	// 24 = 0x18
	OpaqueFigSimpleMutex *_loadingMutex;	// 28 = 0x1c
	NSMutableArray *_keysAwaitingCompletion;	// 32 = 0x20
	int _status;	// 36 = 0x24
	int _basicInspectionFailureCode;	// 40 = 0x28
	NSURL *_URL;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x30ed1921; @synthesize=_URL
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x30ed1911; @synthesize=_assetCache
@property(readonly, retain) AVAssetInspector *assetInspector;	// G=0x30ed2c8d; converted property
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x30ed18e1; @synthesize=_downloadDestinationURL
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x30ed1901; @synthesize=_shouldMatchDataInCacheByURLPathComponentOnly
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x30ed18f1; @synthesize=_shouldMatchDataInCacheByURLWithoutQueryComponent
- (id)initWithURL:(id)url;	// 0x30ed2d65
// declared property getter: - (id)URL;	// 0x30ed1921
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x30ed2cc1
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x30ed2cfd
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;	// 0x30ed322d
- (OpaqueFigFormatReader *)_formatReader;	// 0x30ed35bd
- (id)_getAndPruneCompletionsWhileMutexLocked;	// 0x30ed3389
- (BOOL)_inspectionRequiresAFormatReader;	// 0x30ed18ad
- (BOOL)_isStreaming;	// 0x30ed18dd
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x30ed2d31
- (id)_loadValuesWhileMutexLockedForKeys:(id)keys;	// 0x30ed301d
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x30ed1899
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x30ed18b1
- (BOOL)_providesAccurateTiming;	// 0x30ed18a9
- (void)_serverHasDied;	// 0x30ed1e8d
- (void)_setStatus:(int)status figErrorCode:(long)code;	// 0x30ed3259
- (int)_status;	// 0x30ed18b5
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;	// 0x30ed1c7d
- (int)_statusOfValueWhileMutexLockedForKey:(id)key error:(id *)error;	// 0x30ed1c9d
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)keys;	// 0x30ed3511
- (BOOL)_updateStatusWhileMutexLocked:(int)locked figErrorCode:(long)code;	// 0x30ed1d49
// declared property getter: - (id)assetCache;	// 0x30ed1911
// converted property getter: - (id)assetInspector;	// 0x30ed2c8d
- (void)cancelLoading;	// 0x30ed1c69
- (id)chapterGroupInfo;	// 0x30ed18c5
- (id)copyWithZone:(NSZone *)zone;	// 0x30ed1c59
- (void)dealloc;	// 0x30ed3669
// declared property getter: - (id)downloadDestinationURL;	// 0x30ed18e1
- (XXStruct_pwHToB)duration;	// 0x30ed2ddd
- (void)finalize;	// 0x30ed360d
- (BOOL)hasProtectedContent;	// 0x30ed18d9
- (BOOL)isComposable;	// 0x30ed18d5
- (BOOL)isExportable;	// 0x30ed18cd
- (BOOL)isPlayable;	// 0x30ed18c9
- (BOOL)isReadable;	// 0x30ed18d1
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30ed2e0d
- (id)lyrics;	// 0x30ed1e65
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x30ed1901
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x30ed18f1
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30ed333d
@end

