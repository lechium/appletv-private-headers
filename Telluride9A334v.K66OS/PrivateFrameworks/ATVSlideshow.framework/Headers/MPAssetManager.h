/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MPAssetManager : NSObject {
}
+ (void)releaseSharedManager;	// 0x32e4b021
+ (id)sharedManager;	// 0x32e4afd9
- (id)init;	// 0x32e4b04d
- (id)absolutePathFromPath:(id)path;	// 0x32e4b125
- (void)addROIInfo:(id)info forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x32e4b169
- (void)addRegionOfInterest:(CGRect)interest forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x32e4b16d
- (id)altitudeForAssetAtPath:(id)path;	// 0x32e4b111
- (void)cacheAttributes:(id)attributes forPath:(id)path;	// 0x32e4b191
- (id)creationDateForAssetAtPath:(id)path;	// 0x32e4b101
- (void)dealloc;	// 0x32e4b079
- (double)durationForAssetAtPath:(id)path;	// 0x32e4b0ad
- (void)gatherMetadataForAssetAtPath:(id)path;	// 0x32e4b0a9
- (BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;	// 0x32e4b11d
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x32e4b115
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x32e4b119
- (id)keywordsForAssetAtPath:(id)path;	// 0x32e4b105
- (id)latitudeForAssetAtPath:(id)path;	// 0x32e4b109
- (id)longitudeForAssetAtPath:(id)path;	// 0x32e4b10d
- (void)moveRegionOfInterestWithPath:(id)path fromIndex:(int)index toIndex:(int)index3 saveToCache:(BOOL)cache;	// 0x32e4b181
- (double)posterTimeForAssetAtPath:(id)path;	// 0x32e4b129
- (id)prepareInfoForAssetsAtPaths:(id)paths;	// 0x32e4b18d
- (CGRect)regionOfInterestAtIndex:(int)index forAssetAtPath:(id)path;	// 0x32e4b145
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x32e4b121
- (void)removeRegionOfInterestAtIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x32e4b189
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x32e4b0e9
- (id)roiInfoAtIndex:(int)index forAssetAtPath:(id)path;	// 0x32e4b141
- (void)setForceOrderForRegionsOfInterest:(BOOL)interest forPath:(id)path saveToCache:(BOOL)cache;	// 0x32e4b185
- (void)setROIInfo:(id)info atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x32e4b171
- (void)setRegionOfInterest:(CGRect)interest atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x32e4b175
- (void)setSavesToDisk:(BOOL)disk;	// 0x32e4b0a5
- (double)startTimeForAssetAtPath:(id)path;	// 0x32e4b0c1
- (double)stopTimeForAssetAtPath:(id)path;	// 0x32e4b0d5
- (void)tryToSaveCache;	// 0x32e4b13d
- (void)updateROIInfoAtIndex:(int)index atPath:(id)path to:(id)to saveToCache:(BOOL)cache;	// 0x32e4b179
- (void)updateRegionOfInterestAtIndex:(int)index atPath:(id)path to:(CGRect)to saveToCache:(BOOL)cache;	// 0x32e4b17d
@end

