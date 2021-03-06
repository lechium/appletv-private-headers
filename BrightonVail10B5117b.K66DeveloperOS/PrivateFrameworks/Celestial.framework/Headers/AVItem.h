/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVItem : NSObject {
	AVItemPrivate *_priv;	// 4 = 0x4
}
@property(assign) float volume;	// G=0x33781b01; S=0x3378ff3d; converted property
+ (id)avItem;	// 0x3378ff01
+ (id)avItemWithPath:(id)path error:(id *)error;	// 0x3378a0e1
- (id)init;	// 0x3377cc11
- (id)initWithError:(id *)error;	// 0x3377cc29
- (id)initWithPath:(id)path error:(id *)error;	// 0x33785025
- (int)_instantiateItem;	// 0x3378ff39
- (id)accessLog;	// 0x3379047d
- (id)attributeForKey:(id)key;	// 0x3377e429
- (long)beginDownloading;	// 0x337902d1
- (void)cancelDownload;	// 0x3379044d
- (id)chapterImageForImageID:(int)imageID;	// 0x3378fff5
- (void)dealloc;	// 0x3377f59d
- (float)downloadProgress;	// 0x337903c9
- (long)downloadStatus;	// 0x33790439
- (void *)downloadThread;	// 0x33790119
- (double)duration;	// 0x337851f1
- (int)eqPreset;	// 0x33781b15
- (id)errorLog;	// 0x337904e9
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)startTime toEndTime:(double)endTime maxCount:(int)count;	// 0x3378a8b5
- (id)formatDetailsForTracks;	// 0x3378ffd5
- (CGSize)naturalSize;	// 0x33783841
- (id)nextThumbnailTimesStartingAt:(double)at minimumInterval:(double)interval forwards:(BOOL)forwards maxCount:(int)count;	// 0x3378fff9
- (id)path;	// 0x337851b5
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x3377d379
- (void)setEQPreset:(int)preset;	// 0x3378ff89
- (BOOL)setPath:(id)path error:(id *)error;	// 0x3378509d
// converted property setter: - (void)setVolume:(float)volume;	// 0x3378ff3d
- (void)stopDownload;	// 0x33790395
- (id)url;	// 0x337900e9
- (id)urlFromPath:(id)path;	// 0x33790039
// converted property getter: - (float)volume;	// 0x33781b01
@end

