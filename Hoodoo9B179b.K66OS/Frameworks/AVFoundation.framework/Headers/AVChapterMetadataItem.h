/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMetadataItem.h"
#import "AVFoundation-Structs.h"

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
	AVChapterMetadataItemInternal *_privChapter;	// 8 = 0x8
}
- (id)init;	// 0x30aaeafd
- (void)_addFigAssetNotifications;	// 0x30aaedc5
- (long)_chapterGroupIndex;	// 0x30aafb3d
- (long)_chapterIndex;	// 0x30aafb5d
- (void)_ensureValueLoadedSync;	// 0x30ab0189
- (id)_initWithAsset:(id)asset chapterGroupIndex:(long)index chapterIndex:(long)index3 chapterType:(id)type locale:(id)locale time:(XXStruct_pwHToB)time duration:(XXStruct_pwHToB)duration;	// 0x30aaeb5d
- (void)_removeFigAssetNotifications;	// 0x30aaf18d
- (void)_setValueStatus:(int)status figErrorCode:(long)code;	// 0x30aafdb9
- (void)_takeValueFrom:(id)from;	// 0x30aaf899
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)keyDependsOnMetadataValue;	// 0x30aafb7d
- (int)_valueStatus;	// 0x30aafc4d
- (void)cancelLoading;	// 0x30ab0551
- (id)commonKey;	// 0x30aaf769
- (id)copyWithZone:(NSZone *)zone;	// 0x30aaf46d
- (void)dealloc;	// 0x30aaf2c9
- (id)description;	// 0x30aaf5e9
- (XXStruct_pwHToB)duration;	// 0x30aaf7fd
- (id)extraAttributes;	// 0x30aafac5
- (void)finalize;	// 0x30aaf3e1
- (id)key;	// 0x30aaf749
- (id)keySpace;	// 0x30aaf789
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30ab02d5
- (id)locale;	// 0x30aaf799
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30aaf47d
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30ab026d
- (XXStruct_pwHToB)time;	// 0x30aaf7b9
- (id)value;	// 0x30aaf841
@end

