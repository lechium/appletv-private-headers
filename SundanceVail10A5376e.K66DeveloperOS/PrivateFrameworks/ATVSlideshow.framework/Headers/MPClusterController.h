/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSMutableDictionary, MPCluster, MPDocument;

@interface MPClusterController : NSObject {
	NSMutableDictionary *mSlides;	// 4 = 0x4
	NSMutableDictionary *mSlideClusters;	// 8 = 0x8
	MPCluster *mAllSlidesCluster;	// 12 = 0xc
	float mMinimumRequiredClusterRating;	// 16 = 0x10
	MPDocument *mAuthoredDocument;	// 20 = 0x14
	NSDate *mOldestSlideTimestamp;	// 24 = 0x18
	NSDate *mNewestSlideTimestamp;	// 28 = 0x1c
}
+ (void)releaseSharedController;	// 0x361cce6d
+ (id)sharedController;	// 0x361ccd7d
- (id)init;	// 0x361ccf39
- (void)_removeAllSingleSlideClustersForClusterCategory:(id)clusterCategory;	// 0x361d1bfd
- (void)addKeywords:(id)keywords forSlide:(id)slide;	// 0x361cd4b5
- (void)addPaths:(id)paths toUserDefinedCluster:(id)userDefinedCluster;	// 0x361ce5b9
- (int)addSlideForPath:(id)path withIndex:(int)index;	// 0x361cd239
- (id)allSlides;	// 0x361cd699
- (id)allSlidesSortedByUsage;	// 0x361cd6d9
- (id)allSlidesSortedChronologically;	// 0x361cd871
- (id)clusterSlidesSortedByUserDefinedSortOrder:(id)order userDefinedSlideOrder:(id)order2;	// 0x361cd8f1
- (id)clusterSlidesSortedChronologically:(id)chronologically;	// 0x361cd8b1
- (id)clustersBasedOnOrderedPaths:(id)paths;	// 0x361cda31
- (void)createLocationClustersForPaths:(id)paths;	// 0x361ce7fd
- (id)dayOfYearClusterForAssetAtPath:(id)path;	// 0x361ce5ad
- (id)dayOfYearClusters;	// 0x361ce421
- (void)dealloc;	// 0x361cd0ad
- (void)dumpClustersStatistics;	// 0x361d0ac1
- (void)dumpSlidesStatistics;	// 0x361d1aa9
- (id)findBestChronologicalCluster:(id)cluster startingWithSlide:(id)slide;	// 0x361cdf91
- (id)findBestCluster:(id)cluster;	// 0x361cdebd
- (id)findBestClusterBasedOnUserDefinedSlideOrder:(id)order startingWithSlide:(id)slide;	// 0x361ce101
- (void)flush;	// 0x361cd16d
- (void)flushClusters;	// 0x361cde01
- (id)hourOfYearClusterForAssetAtPath:(id)path;	// 0x361ce5b1
- (id)hourOfYearClusters;	// 0x361ce461
- (id)keywordClusters;	// 0x361ce4e1
- (id)locationClusters;	// 0x361ce521
- (id)minuteOfYearClusterForAssetAtPath:(id)path;	// 0x361ce5b5
- (id)minuteOfYearClusters;	// 0x361ce4a1
- (id)monthClusterForAssetAtPath:(id)path;	// 0x361ce5a5
- (id)monthClusters;	// 0x361ce3a1
- (id)monthOfYearClusterForAssetAtPath:(id)path;	// 0x361ce5a9
- (id)monthOfYearClusters;	// 0x361ce3e1
- (id)nextLeastUsedSlides:(int)slides forLayer:(id)layer markAsUsed:(BOOL)used;	// 0x361cd715
- (id)orderedAndPrioritizedSlideClusters;	// 0x361ceb49
- (id)prioritizedSlideClustersDictionary;	// 0x361ced8d
- (void)removeAllSingleSlideClusters;	// 0x361ce299
- (void)resetAllUsageCounters;	// 0x361cdd3d
- (void)setAuthoredDocument:(id)document;	// 0x361cd229
- (id)slideForPath:(id)path;	// 0x361cd6b9
- (void)sortClusterSlidesChronologically:(id *)chronologically;	// 0x361cd92d
- (void)updateAllSlidesClusterWithSlide:(id)slide;	// 0x361ce341
- (void)updateClusterRatings;	// 0x361cfa09
- (void)updateRatingsForDayOfYearClusters;	// 0x361d0151
- (void)updateRatingsForHourOfYearClusters;	// 0x361d0379
- (void)updateRatingsForKeywordClusters;	// 0x361d07c9
- (void)updateRatingsForLocationClusters;	// 0x361d0899
- (void)updateRatingsForMinuteOfYearClusters;	// 0x361d05d1
- (void)updateRatingsForMonthClusters;	// 0x361cfd01
- (void)updateRatingsForMonthOfYearClusters;	// 0x361cff29
- (void)updateRatingsForYearClusters;	// 0x361cfab9
- (id)userProvidedClusters;	// 0x361ce561
- (id)yearClusterForAssetAtPath:(id)path;	// 0x361ce5a1
- (id)yearClusters;	// 0x361ce361
@end

