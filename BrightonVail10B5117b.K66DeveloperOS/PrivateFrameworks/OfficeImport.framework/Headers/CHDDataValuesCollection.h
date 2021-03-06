/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CHDDataValuesCollection : NSObject {
	CFDataRef mPackedValues;	// 4 = 0x4
	unsigned mDataValueCount;	// 8 = 0x8
	CFDictionaryRef mIndexToDataValueMap;	// 12 = 0xc
	bool mContainsStringValue;	// 16 = 0x10
}
- (id)init;	// 0x34b5d3a5
- (id)initWithDataPointCount:(unsigned)dataPointCount;	// 0x34b51771
- (bool)addDataPoint:(CHDDataPoint *)point;	// 0x34b51b81
- (bool)addDataValue:(id)value;	// 0x34b5f341
- (void)cleanup;	// 0x34b54a39
- (bool)containsStringValue;	// 0x34b89901
- (unsigned)count;	// 0x34b51e65
- (CHDDataPoint *)dataPointAtIndex:(unsigned)index;	// 0x34b51d69
- (CHDDataPoint *)dataPointWithIndex:(unsigned)index;	// 0x34b5fa05
- (id)dataValueAtIndex:(unsigned)index;	// 0x34b51e75
- (id)dataValueWithIndex:(unsigned)index;	// 0x34b5f9b1
- (void)dealloc;	// 0x34b549f9
- (void)finishReading;	// 0x34b51cdd
- (void)resetWithDataPointCount:(unsigned)dataPointCount;	// 0x34ba309d
- (void)setupBufferForValues:(unsigned)values;	// 0x34b517d9
@end

