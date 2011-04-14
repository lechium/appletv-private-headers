/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDAnchor.h"


__attribute__((visibility("hidden")))
@interface EDOneCellAnchor : EDAnchor {
@private
	EDCellAnchorMarker mFrom;	// 4 = 0x4
	CGSize mSize;	// 20 = 0x14
	BOOL mIsRelative;	// 28 = 0x1c
}
@property(assign) EDCellAnchorMarker from;	// G=0x31a9f18d; S=0x31a9f139; converted property
@property(assign, getter=isRelative) BOOL relative;	// G=0x31a9f17d; S=0x31a9f129; converted property
@property(assign) CGSize size;	// G=0x31a9f1a9; S=0x31a9f165; converted property
- (id).cxx_construct;	// 0x31a9f10d
// converted property getter: - (EDCellAnchorMarker)from;	// 0x31a9f18d
// converted property getter: - (BOOL)isRelative;	// 0x31a9f17d
// converted property setter: - (void)setFrom:(EDCellAnchorMarker)from;	// 0x31a9f139
// converted property setter: - (void)setRelative:(BOOL)relative;	// 0x31a9f129
// converted property setter: - (void)setSize:(CGSize)size;	// 0x31a9f165
// converted property getter: - (CGSize)size;	// 0x31a9f1a9
@end

