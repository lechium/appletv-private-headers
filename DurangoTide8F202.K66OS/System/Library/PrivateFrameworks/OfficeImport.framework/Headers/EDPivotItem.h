/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotItem : NSObject {
@private
	unsigned mRepeatedItemCounts;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDCollection *mItemIndexes;	// 12 = 0xc
}
@property(assign) unsigned repeatedItemCounts;	// G=0x31ad2c29; S=0x31ad2c39; converted property
@property(assign) int type;	// G=0x31ad2c49; S=0x31ad2c59; converted property
+ (id)pivotItem;	// 0x31ad390d
- (id)init;	// 0x31ad3995
- (void)dealloc;	// 0x31ad394d
- (id)itemIndexes;	// 0x31ad2c69
// converted property getter: - (unsigned)repeatedItemCounts;	// 0x31ad2c29
// converted property setter: - (void)setRepeatedItemCounts:(unsigned)counts;	// 0x31ad2c39
// converted property setter: - (void)setType:(int)type;	// 0x31ad2c59
// converted property getter: - (int)type;	// 0x31ad2c49
@end

