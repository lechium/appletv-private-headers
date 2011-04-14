/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


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
@property(readonly, assign) float minValue;	// G=0x3064d981; converted property
- (id)init;	// 0x3064b215
- (XXStruct_7U_TLD)_indexesViaArrayFromOffset:(float)offset toOffset:(float)offset2;	// 0x3070c251
- (XXStruct_7U_TLD)_indexesViaSingletonFromOffset:(float)offset toOffset:(float)offset2;	// 0x3064f391
- (BOOL)_setupGapIndexesWithCount:(int)count dataProvider:(id)provider isRefresh:(BOOL)refresh;	// 0x3064b481
- (BOOL)_setupValuesWithCount:(int)count dataProvider:(id)provider isRefresh:(BOOL)refresh;	// 0x3070c3e9
- (BOOL)_setupValuesWithCount:(int)count singleValue:(float)value isRefresh:(BOOL)refresh;	// 0x3064b259
- (BOOL)_setupWithDataProvider:(id)dataProvider valueIsSingleton:(BOOL)singleton singletonValue:(float)value isRefresh:(BOOL)refresh;	// 0x3064b33d
- (id)copyWithZone:(NSZone *)zone;	// 0x3070c531
- (void)dealloc;	// 0x30660d11
- (void)hideGaps:(BOOL)gaps;	// 0x3070c3a5
- (int)indexForGapIndex:(int)gapIndex;	// 0x3070c399
- (XXStruct_7U_TLD)indexesFromOffset:(float)offset toOffset:(float)offset2;	// 0x3064f351
// converted property getter: - (float)minValue;	// 0x3064d981
- (CGPoint)offsetsForGapIndex:(int)gapIndex;	// 0x3070c0dd
- (CGPoint)offsetsForIndex:(int)index;	// 0x3064c945
- (BOOL)refreshWithDataProvider:(id)dataProvider;	// 0x3070c3c1
- (BOOL)refreshWithDataProvider:(id)dataProvider singleValue:(float)value;	// 0x3064b319
- (float)singleValue;	// 0x3064e2bd
- (float)sum;	// 0x3070bfe1
- (int)valueCount;	// 0x3070bfd1
@end

