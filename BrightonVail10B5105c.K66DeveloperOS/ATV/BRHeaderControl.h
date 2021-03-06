/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRHeaderControl : BRControl {
	BRTextControl *_title;	// 84 = 0x54
	BRTextControl *_subtitle;	// 88 = 0x58
	BRImageControl *_icon;	// 92 = 0x5c
	float _iconHorizontalOffset;	// 96 = 0x60
	float _iconKerningFactor;	// 100 = 0x64
	float _iconScaleFactor;	// 104 = 0x68
	float _iconEdgeSpace;	// 108 = 0x6c
	int _iconPosition;	// 112 = 0x70
	BOOL _titleHidesIcon;	// 116 = 0x74
}
@property(readonly, retain) BRImageControl *icon;	// G=0x2dcdfd; converted property
@property(assign) float iconEdgeSpace;	// G=0x2dcf31; S=0x2dcee5; converted property
@property(assign) float iconHorizontalOffset;	// G=0x2dce3d; S=0x2dce1d; converted property
@property(assign) float iconKerningFactor;	// G=0x2dce6d; S=0x2dce4d; converted property
@property(assign) int iconPosition;	// G=0x2dced5; S=0x2dcead; converted property
@property(assign) float iconScaleFactor;	// G=0x2dce9d; S=0x2dce7d; converted property
@property(retain) BRTextControl *subtitle;	// G=0x2dcc31; S=0x2dcc1d; converted property
@property(retain) BRTextControl *title;	// G=0x2dcb09; S=0x2dcaf5; converted property
@property(assign, nonatomic) BOOL titleHidesIcon;	// G=0x2dd6f1; S=0x2dd701; @synthesize=_titleHidesIcon
- (id)init;	// 0x2dc86d
- (id)accessibilityLabel;	// 0x2dd64d
- (void)controlWasActivated;	// 0x2dc961
- (void)dealloc;	// 0x2dc9a1
// converted property getter: - (id)icon;	// 0x2dcdfd
// converted property getter: - (float)iconEdgeSpace;	// 0x2dcf31
- (CGRect)iconFrame;	// 0x2dcf41
// converted property getter: - (float)iconHorizontalOffset;	// 0x2dce3d
// converted property getter: - (float)iconKerningFactor;	// 0x2dce6d
// converted property getter: - (int)iconPosition;	// 0x2dced5
// converted property getter: - (float)iconScaleFactor;	// 0x2dce9d
- (void)layoutSubcontrols;	// 0x2dd11d
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x2dcc69
- (void)setIcon:(id)icon position:(int)position edgeSpace:(float)space;	// 0x2dcd89
// converted property setter: - (void)setIconEdgeSpace:(float)space;	// 0x2dcee5
- (void)setIconHidden:(BOOL)hidden;	// 0x2dcf75
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x2dce1d
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x2dce4d
// converted property setter: - (void)setIconPosition:(int)position;	// 0x2dcead
// converted property setter: - (void)setIconScaleFactor:(float)factor;	// 0x2dce7d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x2dcc1d
- (void)setSubtitle:(id)subtitle withAttributes:(id)attributes;	// 0x2dcb41
// converted property setter: - (void)setTitle:(id)title;	// 0x2dcaf5
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x2dca19
// declared property setter: - (void)setTitleHidesIcon:(BOOL)icon;	// 0x2dd701
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2dcf95
// converted property getter: - (id)subtitle;	// 0x2dcc31
// converted property getter: - (id)title;	// 0x2dcb09
// declared property getter: - (BOOL)titleHidesIcon;	// 0x2dd6f1
@end

