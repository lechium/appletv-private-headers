/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDAnchor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EDOneCellAnchor : EDAnchor {
@private
	EDCellAnchorMarker mFrom;	// 4 = 0x4
	CGSize mSize;	// 20 = 0x14
	BOOL mIsRelative;	// 28 = 0x1c
}
@property(assign) EDCellAnchorMarker from;	// G=0x32a1fca5; S=0x32a2cfad; converted property
@property(assign, getter=isRelative) BOOL relative;	// G=0x32a1fc95; S=0x32a2cf9d; converted property
@property(assign) CGSize size;	// G=0x32a1fcc9; S=0x32a2cfd1; converted property
- (id).cxx_construct;	// 0x32a2cf81
// converted property getter: - (EDCellAnchorMarker)from;	// 0x32a1fca5
// converted property getter: - (BOOL)isRelative;	// 0x32a1fc95
// converted property setter: - (void)setFrom:(EDCellAnchorMarker)from;	// 0x32a2cfad
// converted property setter: - (void)setRelative:(BOOL)relative;	// 0x32a2cf9d
// converted property setter: - (void)setSize:(CGSize)size;	// 0x32a2cfd1
// converted property getter: - (CGSize)size;	// 0x32a1fcc9
@end

