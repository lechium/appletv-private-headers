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
@property(assign, nonatomic) int affinity;	// G=0x32fa01a1; S=0x32f9ff6d; @synthesize=_affinityIfCollapsed
@property(retain, nonatomic) DOMRange *domRange;	// G=0x32fa0089; S=0x32f9ff49; @synthesize=_domRange
+ (id)wrapDOMRange:(id)range;	// 0x32fa6dbd
+ (id)wrapDOMRange:(id)range withAffinity:(int)affinity;	// 0x32f9fecd
- (void)adjustAffinityOfPosition:(id)position isStart:(BOOL)start;	// 0x32fa0135
// declared property getter: - (int)affinity;	// 0x32fa01a1
- (void)dealloc;	// 0x32fb42bd
- (id)description;	// 0x331b1d51
// declared property getter: - (id)domRange;	// 0x32fa0089
- (id)end;	// 0x32fd8401
- (BOOL)isEmpty;	// 0x32fa0059
- (BOOL)isEqual:(id)equal;	// 0x32fbe2e9
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x32f9ff6d
// declared property setter: - (void)setDomRange:(id)range;	// 0x32f9ff49
- (id)start;	// 0x32fa0099
@end

