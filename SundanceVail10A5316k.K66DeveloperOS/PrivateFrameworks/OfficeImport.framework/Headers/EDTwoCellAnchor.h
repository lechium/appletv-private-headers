/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDAnchor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EDTwoCellAnchor : EDAnchor {
@private
	EDCellAnchorMarker mFrom;	// 4 = 0x4
	EDCellAnchorMarker mTo;	// 20 = 0x14
	BOOL mIsRelative;	// 36 = 0x24
	int mEditAs;	// 40 = 0x28
}
@property(assign) int editAs;	// G=0x3122e36d; S=0x310b56e5; converted property
@property(assign) EDCellAnchorMarker from;	// G=0x310bd7a9; S=0x310b56f5; converted property
@property(assign, getter=isRelative) BOOL relative;	// G=0x310bd7cd; S=0x310b56d5; converted property
@property(assign) EDCellAnchorMarker to;	// G=0x310bda81; S=0x310b5711; converted property
- (id)init;	// 0x310b5649
- (id).cxx_construct;	// 0x310b5619
// converted property getter: - (int)editAs;	// 0x3122e36d
// converted property getter: - (EDCellAnchorMarker)from;	// 0x310bd7a9
// converted property getter: - (BOOL)isRelative;	// 0x310bd7cd
// converted property setter: - (void)setEditAs:(int)as;	// 0x310b56e5
// converted property setter: - (void)setFrom:(EDCellAnchorMarker)from;	// 0x310b56f5
// converted property setter: - (void)setRelative:(BOOL)relative;	// 0x310b56d5
// converted property setter: - (void)setTo:(EDCellAnchorMarker)to;	// 0x310b5711
// converted property getter: - (EDCellAnchorMarker)to;	// 0x310bda81
@end

