/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageListHeaderControl : BRControl {
	BRImageControl *_image;	// 84 = 0x54
}
@property(readonly, assign) BRImageControl *image;	// G=0x118f0d; @synthesize=_image
- (id)init;	// 0x118d15
- (id)accessibilityLabel;	// 0x118eed
- (void)dealloc;	// 0x118d99
// declared property getter: - (id)image;	// 0x118f0d
- (void)layoutSubcontrols;	// 0x118e5d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x118de5
@end
