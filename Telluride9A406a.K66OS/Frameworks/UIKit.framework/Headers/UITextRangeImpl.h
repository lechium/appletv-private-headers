/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextRange.h"

@class DOMRange;

__attribute__((visibility("hidden")))
@interface UITextRangeImpl : UITextRange {
@private
	DOMRange *_domRange;	// 4 = 0x4
	int _affinityIfCollapsed;	// 8 = 0x8
}
@property(assign, nonatomic) int affinity;	// G=0x35759da9; S=0x35759b75; @synthesize=_affinityIfCollapsed
@property(retain, nonatomic) DOMRange *domRange;	// G=0x35759c91; S=0x35759b51; @synthesize=_domRange
+ (id)wrapDOMRange:(id)range;	// 0x357606f5
+ (id)wrapDOMRange:(id)range withAffinity:(int)affinity;	// 0x35759ad5
- (void)adjustAffinityOfPosition:(id)position isStart:(BOOL)start;	// 0x35759d3d
// declared property getter: - (int)affinity;	// 0x35759da9
- (void)dealloc;	// 0x3576dae5
- (id)description;	// 0x35967551
// declared property getter: - (id)domRange;	// 0x35759c91
- (id)end;	// 0x357918e5
- (BOOL)isEmpty;	// 0x35759c61
- (BOOL)isEqual:(id)equal;	// 0x35777a35
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x35759b75
// declared property setter: - (void)setDomRange:(id)range;	// 0x35759b51
- (id)start;	// 0x35759ca1
@end

