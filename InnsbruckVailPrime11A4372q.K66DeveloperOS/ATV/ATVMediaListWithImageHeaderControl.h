/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMediaListControl.h"

@class ATVImageHeaderView;

__attribute__((visibility("hidden")))
@interface ATVMediaListWithImageHeaderControl : BRMediaListControl {
	ATVImageHeaderView *_imageHeaderView;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) ATVImageHeaderView *imageHeaderView;	// G=0x42d9a5; @synthesize=_imageHeaderView
+ (BOOL)_wantsHeader;	// 0x42d9a1
- (id)init;	// 0x42d631
- (void).cxx_destruct;	// 0x42d9b5
// declared property getter: - (id)imageHeaderView;	// 0x42d9a5
- (void)layoutSubcontrols;	// 0x42d6ed
@end

