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
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x346f7921; @synthesize=_URL
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x346f7911; @synthesize=_assetCache
@property(readonly, retain) AVAssetInspector *assetInspector;	// G=0x346f8c8d; converted property
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x346f78e1; @synthesize=_downloadDestinationURL
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x346f7901; @synthesize=_shouldMatchDataInCacheByURLPathComponentOnly
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x346f78f1; @synthesize=_shouldMatchDataInCacheByURLWithoutQueryComponent
- (id)initWithURL:(id)url;	// 0x346f8d65
// declared property getter: - (id)URL;	// 0x346f7921
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x346f8cc1
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x346f8cfd
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;	// 0x346f922d
- (OpaqueFigFormatReader *)_formatReader;	// 0x346f95bd
- (id)_getAndPruneCompletionsWhileMutexLocked;	// 0x346f9389
- (BOOL)_inspectionRequiresAFormatReader;	// 0x346f78ad
- (BOOL)_isStreaming;	// 0x346f78dd
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x346f8d31
- (id)_loadValuesWhileMutexLockedForKeys:(id)keys;	// 0x346f901d
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x346f7899
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x346f78b1
- (BOOL)_providesAccurateTiming;	// 0x346f78a9
- (void)_serverHasDied;	// 0x346f7e8d
- (void)_setStatus:(int)status figErrorCode:(long)code;	// 0x346f9259
- (int)_status;	// 0x346f78b5
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;	// 0x346f7c7d
- (int)_statusOfValueWhileMutexLockedForKey:(id)key error:(id *)error;	// 0x346f7c9d
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)keys;	// 0x346f9511
- (BOOL)_updateStatusWhileMutexLocked:(int)locked figErrorCode:(long)code;	// 0x346f7d49
// declared property getter: - (id)assetCache;	// 0x346f7911
// converted property getter: - (id)assetInspector;	// 0x346f8c8d
- (void)cancelLoading;	// 0x346f7c69
- (id)chapterGroupInfo;	// 0x346f78c5
- (id)copyWithZone:(NSZone *)zone;	// 0x346f7c59
- (void)dealloc;	// 0x346f9669
// declared property getter: - (id)downloadDestinationURL;	// 0x346f78e1
- (XXStruct_pwHToB)duration;	// 0x346f8ddd
- (void)finalize;	// 0x346f960d
- (BOOL)hasProtectedContent;	// 0x346f78d9
- (BOOL)isComposable;	// 0x346f78d5
- (BOOL)isExportable;	// 0x346f78cd
- (BOOL)isPlayable;	// 0x346f78c9
- (BOOL)isReadable;	// 0x346f78d1
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x346f8e0d
- (id)lyrics;	// 0x346f7e65
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x346f7901
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x346f78f1
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x346f933d
@end

