/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRMarqueeTextControl, NSString, BRTextControl;

__attribute__((visibility("hidden")))
@interface GeniusMixClusterDescriptionView : BRControl {
	BRTextControl *_clusterNameControl;	// 84 = 0x54
	BRTextControl *_basedOnLabelControl;	// 88 = 0x58
	BRMarqueeTextControl *_basedOnTextControl;	// 92 = 0x5c
}
@property(copy, nonatomic) NSString *basedOnText;	// G=0x1c0eb5; S=0x1c0eed; 
@property(copy, nonatomic) NSString *clusterName;	// G=0x1c0e7d; S=0x1c0e0d; 
- (id)init;	// 0x1c0c4d
// declared property getter: - (id)basedOnText;	// 0x1c0eb5
// declared property getter: - (id)clusterName;	// 0x1c0e7d
- (void)dealloc;	// 0x1c0d95
- (void)layoutSubcontrols;	// 0x1c0f5d
// declared property setter: - (void)setBasedOnText:(id)text;	// 0x1c0eed
// declared property setter: - (void)setClusterName:(id)name;	// 0x1c0e0d
@end
