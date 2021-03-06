/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDResources;

@interface EDTableColumn : NSObject {
	EDResources *mResources;	// 4 = 0x4
	unsigned mHeaderRowDxfIndex;	// 8 = 0x8
	unsigned mTotalsRowDxfIndex;	// 12 = 0xc
	unsigned mDataAreaDxfIndex;	// 16 = 0x10
	EDString *mName;	// 20 = 0x14
	EDString *mUniqueName;	// 24 = 0x18
	EDString *mTotalsRowLabel;	// 28 = 0x1c
}
@property(retain) id dataAreaDxf;	// G=0x36bf7461; S=0x36bf74a9; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x36bf75e9; S=0x36b71b51; converted property
@property(retain) id headerRowDxf;	// G=0x36bf7341; S=0x36bf7389; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x36bf75a9; S=0x36bf75b9; converted property
@property(retain) id name;	// G=0x36bf74f1; S=0x36b636c5; converted property
@property(retain) id totalsRowDxf;	// G=0x36bf73d1; S=0x36bf7419; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x36bf75c9; S=0x36bf75d9; converted property
@property(retain) id totalsRowLabel;	// G=0x36bf7555; S=0x36bf7565; converted property
@property(retain) id uniqueName;	// G=0x36bf7501; S=0x36bf7511; converted property
+ (id)tableColumnWithResources:(id)resources;	// 0x36bf72f5
- (id)initWithResources:(id)resources;	// 0x36b63641
// converted property getter: - (id)dataAreaDxf;	// 0x36bf7461
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x36bf75e9
- (void)dealloc;	// 0x36b6b365
// converted property getter: - (id)headerRowDxf;	// 0x36bf7341
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x36bf75a9
// converted property getter: - (id)name;	// 0x36bf74f1
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x36bf74a9
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x36b71b51
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x36bf7389
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x36bf75b9
// converted property setter: - (void)setName:(id)name;	// 0x36b636c5
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x36bf7419
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x36bf75d9
// converted property setter: - (void)setTotalsRowLabel:(id)label;	// 0x36bf7565
// converted property setter: - (void)setUniqueName:(id)name;	// 0x36bf7511
// converted property getter: - (id)totalsRowDxf;	// 0x36bf73d1
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x36bf75c9
// converted property getter: - (id)totalsRowLabel;	// 0x36bf7555
// converted property getter: - (id)uniqueName;	// 0x36bf7501
@end

