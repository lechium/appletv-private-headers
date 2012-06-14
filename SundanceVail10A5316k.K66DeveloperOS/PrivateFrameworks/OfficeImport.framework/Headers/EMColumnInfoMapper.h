/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class EDColumnInfo;

__attribute__((visibility("hidden")))
@interface EMColumnInfoMapper : CMMapper {
@private
	EDColumnInfo *edColumnInfo;	// 8 = 0x8
	double columnWidth;	// 12 = 0xc
	int columnSpan;	// 20 = 0x14
}
@property(readonly, assign) double columnWidth;	// G=0x310bcf49; converted property
- (id)initWithDefaultWidth:(double)defaultWidth span:(int)span parent:(id)parent;	// 0x31113e6d
- (id)initWithEDColumnInfo:(id)edcolumnInfo maxSpan:(int)span parent:(id)parent;	// 0x310bcb7d
// converted property getter: - (double)columnWidth;	// 0x310bcf49
- (void)mapAt:(id)at withState:(id)state;	// 0x310be3a9
@end

