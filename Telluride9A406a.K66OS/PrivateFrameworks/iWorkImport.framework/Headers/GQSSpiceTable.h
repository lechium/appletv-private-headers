/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQSTable.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQSSpiceTable : GQSTable {
@private
	CFDictionaryRef mVectorUidToAlongMap;	// 28 = 0x1c
	BOOL mReadingRowVectors;	// 32 = 0x20
	vector<float,std::allocator<float> > *mRowPositions;	// 36 = 0x24
	vector<float,std::allocator<float> > *mColumnPositions;	// 40 = 0x28
	float mCurrentCellMinX;	// 44 = 0x2c
	float mCurrentCellMaxX;	// 48 = 0x30
	float mCurrentCellMinY;	// 52 = 0x34
	float mCurrentCellMaxY;	// 56 = 0x38
	id mCurrentCellStorage;	// 60 = 0x3c
	id mCurrentCellStyle;	// 64 = 0x40
}
- (id)init;	// 0x33c41eed
- (void)aboutToReadCells;	// 0x33c420d1
- (void)aboutToReadColumnVectors;	// 0x33c41d65
- (void)aboutToReadRowVectors;	// 0x33c41d51
- (float)alongValueForVectorUid:(const char *)vectorUid;	// 0x33c420a1
- (void)dealloc;	// 0x33c42169
- (void)setAlongValue:(float)value forOwnedVectorUid:(char *)ownedVectorUid;	// 0x33c42011
@end

