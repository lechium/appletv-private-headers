/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"


@interface CPCluster : NSObject <CPDisposable> {
	XXStruct_lVmCAC *profile;	// 4 = 0x4
	unsigned xCount;	// 8 = 0x8
	double *x;	// 12 = 0xc
	double *dx;	// 16 = 0x10
	unsigned *dxOrderIndex;	// 20 = 0x14
	unsigned interClusterMinIndex;	// 24 = 0x18
	double *ddx;	// 28 = 0x1c
	unsigned *ddxOrderIndex;	// 32 = 0x20
	unsigned interLevelMinIndex;	// 36 = 0x24
	unsigned minClusterSize;	// 40 = 0x28
	double maxClusterSpread;	// 44 = 0x2c
	double minInterClusterDiff;	// 52 = 0x34
	double minInterLevel2ndDiff;	// 60 = 0x3c
	unsigned clusterCount;	// 68 = 0x44
	XXStruct_VnwizD *xStats;	// 72 = 0x48
	unsigned levels;	// 76 = 0x4c
	XXStruct_VnwizD *dxStats;	// 80 = 0x50
	BOOL ownData;	// 84 = 0x54
	BOOL ownDifferences;	// 85 = 0x55
}
@property(readonly, assign) unsigned clusterCount;	// G=0x304f6689; converted property
@property(readonly, assign) unsigned levels;	// G=0x304f647d; converted property
+ (void)clusterTextLine:(id)line;	// 0x304f8dc9
+ (unsigned *)createOrderIndexFor:(double *)aFor ofSize:(unsigned)size;	// 0x304f6871
+ (void)reclusterTextLine:(id)line fromWordIndex:(unsigned)wordIndex count:(unsigned *)count;	// 0x304f8fd9
- (id)init;	// 0x304f64d9
- (id)initWithProfile:(const XXStruct_lVmCAC *)profile;	// 0x304f680d
- (void)analyzeDensities;	// 0x304f6ba1
- (void)analyzeDifferences;	// 0x304f73c5
- (BOOL)applyDifferenceHints:(XXStruct_VnwizD *)hints count:(unsigned)count;	// 0x304f68b1
- (void)assembleDataStats;	// 0x304f7171
- (void)assembleDensityDifferenceStats;	// 0x304f6f5d
- (void)assembleDifferenceStats;	// 0x304f7d81
// converted property getter: - (unsigned)clusterCount;	// 0x304f6689
- (XXStruct_VnwizD)clusterStatisticsAtIndex:(unsigned)index;	// 0x304f671d
- (BOOL)coalesceFrom:(unsigned)from to:(unsigned)to;	// 0x304f75a9
- (void)computeDataFromDifferences;	// 0x304f82bd
- (void)computeDifferencesFromData;	// 0x304f8365
- (void)dealloc;	// 0x304f83f9
- (XXStruct_VnwizD)differenceClusterStatisticsAtIndex:(unsigned)index;	// 0x304f648d
- (void)dispose;	// 0x304f8479
- (void)finalize;	// 0x304f8439
- (void)findClusters:(double *)clusters count:(unsigned)count;	// 0x304f65b9
- (void)findClustersFromCharacterSequence:(id)characterSequence withSpaceHint:(BOOL)spaceHint;	// 0x304f87e9
- (void)findClustersFromDifferences:(double *)differences count:(unsigned)count;	// 0x304f6609
- (void)findDensityClusters:(double *)clusters count:(unsigned)count;	// 0x304f6639
- (BOOL)joinClosestLevelPairFrom:(unsigned)from to:(unsigned)to;	// 0x304f64f5
- (BOOL)joinLevelsFrom:(unsigned)from to:(unsigned)to;	// 0x304f7c69
- (XXStruct_VnwizD)largestClusterStatistics;	// 0x304f677d
// converted property getter: - (unsigned)levels;	// 0x304f647d
- (void)makeWords:(XXStruct_NaTu4D *)words count:(unsigned)count fromCharacterSequence:(id)characterSequence charOffset:(unsigned)offset;	// 0x304f8cb1
- (void)setMaximumClusterSpread:(double)spread;	// 0x304f6441
- (void)setMinimumClusterSize:(unsigned)size;	// 0x304f6431
- (void)setMinimumRecognizedInterClusterDifference:(double)difference;	// 0x304f6455
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)difference;	// 0x304f6469
- (BOOL)splitLevelAtIndex:(unsigned)index betweenValue:(double)value andValue:(double)value3;	// 0x304f7931
- (void)splitSecondDifferences;	// 0x304f7f65
- (void)tryLevel0SplitBetween:(double)between and:(double)anAnd usingHints:(XXStruct_VnwizD *)hints;	// 0x304f8585
@end

