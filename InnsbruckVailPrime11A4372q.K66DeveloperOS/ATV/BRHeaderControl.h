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
@property(readonly, retain) BRImageControl *icon;	// G=0x34825d; converted property
@property(assign) float iconEdgeSpace;	// G=0x348391; S=0x348345; converted property
@property(assign) float iconHorizontalOffset;	// G=0x34829d; S=0x34827d; converted property
@property(assign) float iconKerningFactor;	// G=0x3482cd; S=0x3482ad; converted property
@property(assign) int iconPosition;	// G=0x348335; S=0x34830d; converted property
@property(assign) float iconScaleFactor;	// G=0x3482fd; S=0x3482dd; converted property
@property(retain) BRTextControl *subtitle;	// G=0x348091; S=0x34807d; converted property
@property(retain) BRTextControl *title;	// G=0x347f69; S=0x347f55; converted property
@property(assign, nonatomic) BOOL titleHidesIcon;	// G=0x348b69; S=0x348b79; @synthesize=_titleHidesIcon
- (id)init;	// 0x347ccd
- (id)accessibilityLabel;	// 0x348ac5
- (void)controlWasActivated;	// 0x347dc1
- (void)dealloc;	// 0x347e01
// converted property getter: - (id)icon;	// 0x34825d
// converted property getter: - (float)iconEdgeSpace;	// 0x348391
- (CGRect)iconFrame;	// 0x3483a1
// converted property getter: - (float)iconHorizontalOffset;	// 0x34829d
// converted property getter: - (float)iconKerningFactor;	// 0x3482cd
// converted property getter: - (int)iconPosition;	// 0x348335
// converted property getter: - (float)iconScaleFactor;	// 0x3482fd
- (void)layoutSubcontrols;	// 0x348585
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x3480c9
- (void)setIcon:(id)icon position:(int)position edgeSpace:(float)space;	// 0x3481e9
// converted property setter: - (void)setIconEdgeSpace:(float)space;	// 0x348345
- (void)setIconHidden:(BOOL)hidden;	// 0x3483d1
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x34827d
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x3482ad
// converted property setter: - (void)setIconPosition:(int)position;	// 0x34830d
// converted property setter: - (void)setIconScaleFactor:(float)factor;	// 0x3482dd
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x34807d
- (void)setSubtitle:(id)subtitle withAttributes:(id)attributes;	// 0x347fa1
// converted property setter: - (void)setTitle:(id)title;	// 0x347f55
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x347e79
// declared property setter: - (void)setTitleHidesIcon:(BOOL)icon;	// 0x348b79
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3483f1
// converted property getter: - (id)subtitle;	// 0x348091
// converted property getter: - (id)title;	// 0x347f69
// declared property getter: - (BOOL)titleHidesIcon;	// 0x348b69
@end

