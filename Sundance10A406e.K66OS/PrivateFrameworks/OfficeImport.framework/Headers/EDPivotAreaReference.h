/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface EDPivotAreaReference : NSObject {
	bool mByPosition;	// 4 = 0x4
	bool mRelative;	// 5 = 0x5
	bool mSelected;	// 6 = 0x6
	unsigned mFieldId;	// 8 = 0x8
	unsigned mCount;	// 12 = 0xc
}
@property(assign) bool byPosition;	// G=0x350854ad; S=0x350854c1; converted property
@property(assign) unsigned count;	// G=0x35085539; S=0x35085549; converted property
@property(assign) unsigned fieldId;	// G=0x35085519; S=0x35085529; converted property
@property(assign) bool relative;	// G=0x350854d1; S=0x350854e5; converted property
@property(assign) bool selected;	// G=0x350854f5; S=0x35085509; converted property
+ (id)pivotAreaReference;	// 0x35085465
- (id)init;	// 0x350853ed
// converted property getter: - (bool)byPosition;	// 0x350854ad
// converted property getter: - (unsigned)count;	// 0x35085539
// converted property getter: - (unsigned)fieldId;	// 0x35085519
// converted property getter: - (bool)relative;	// 0x350854d1
// converted property getter: - (bool)selected;	// 0x350854f5
// converted property setter: - (void)setByPosition:(bool)position;	// 0x350854c1
// converted property setter: - (void)setCount:(unsigned)count;	// 0x35085549
// converted property setter: - (void)setFieldId:(unsigned)anId;	// 0x35085529
// converted property setter: - (void)setRelative:(bool)relative;	// 0x350854e5
// converted property setter: - (void)setSelected:(bool)selected;	// 0x35085509
@end

