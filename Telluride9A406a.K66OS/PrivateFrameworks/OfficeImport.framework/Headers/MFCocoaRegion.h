/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFRegion.h"

@class NSBezierPathStub;

__attribute__((visibility("hidden")))
@interface MFCocoaRegion : MFRegion {
@private
	NSBezierPathStub *m_path;	// 4 = 0x4
	CGRect m_bounds;	// 8 = 0x8
}
- (id)initWithPath:(id)path :(CGRect)arg2;	// 0x329de66d
- (id)initWithRects:(id)rects :(CGRect)arg2 :(id)arg3;	// 0x329db459
- (void)dealloc;	// 0x329db74d
- (int)fill:(id)fill :(id)arg2;	// 0x32ae45a9
- (int)frame:(id)frame :(id)arg2;	// 0x32ae45a1
- (int)invert:(id)invert;	// 0x32ae45a5
- (int)setClip:(id)clip :(int)arg2;	// 0x329db5cd
@end

