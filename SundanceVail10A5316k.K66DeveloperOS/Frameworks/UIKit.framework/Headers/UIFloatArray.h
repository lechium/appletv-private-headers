/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIFloatArray : NSObject {
@private
	int _count;	// 4 = 0x4
	int _gapCount;	// 8 = 0x8
	int *_gaps;	// 12 = 0xc
	float _gapValue;	// 16 = 0x10
	float _minValue;	// 20 = 0x14
	union {
		float singleton;
		float *array;
	} _values;	// 24 = 0x18
	struct {
		unsigned valueIsSingleton : 1;
		unsigned hideGaps : 1;
		unsigned unused : 30;
	} _floatArrayFlags;	// 28 = 0x1c
}
@property(readonly, assign) float minValue;	// G=0x3025d2c1; converted property
- (id)init;	// 0x3025d015
- (XXStruct_7U_TLD)_indexesViaArrayFromOffset:(float)offset toOffset:(float)offset2;	// 0x3025d989
- (XXStruct_7U_TLD)_indexesViaSingletonFromOffset:(float)offset toOffset:(float)offset2;	// 0x3025d6f9
- (BOOL)_setupGapIndexesWithCount:(int)count dataProvider:(id)provider isRefresh:(BOOL)refresh;	// 0x3025cea5
- (BOOL)_setupValuesWithCount:(int)count dataProvider:(id)provider isRefresh:(BOOL)refresh;	// 0x3025cd45
- (BOOL)_setupValuesWithCount:(int)count singleValue:(float)value isRefresh:(BOOL)refresh;	// 0x3025cc69
- (BOOL)_setupWithDataProvider:(id)dataProvider valueIsSingleton:(BOOL)singleton singletonValue:(float)value isRefresh:(BOOL)refresh;	// 0x3025cf6d
- (id)copyWithZone:(NSZone *)zone;	// 0x3025d061
- (void)dealloc;	// 0x3025d1c1
- (void)hideGaps:(BOOL)gaps;	// 0x3025db6d
- (int)indexForGapIndex:(int)gapIndex;	// 0x3025db3d
- (XXStruct_7U_TLD)indexesFromOffset:(float)offset toOffset:(float)offset2;	// 0x3025daed
// converted property getter: - (float)minValue;	// 0x3025d2c1
- (CGPoint)offsetsForGapIndex:(int)gapIndex;	// 0x3025d571
- (CGPoint)offsetsForIndex:(int)index;	// 0x3025d3e9
- (BOOL)refreshWithDataProvider:(id)dataProvider;	// 0x3025d255
- (BOOL)refreshWithDataProvider:(id)dataProvider singleValue:(float)value;	// 0x3025d231
- (float)singleValue;	// 0x3025d279
- (float)sum;	// 0x3025d2e1
- (int)valueCount;	// 0x3025d2d1
@end

