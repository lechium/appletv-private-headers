/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADColorMap, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface PDSlideChild : PDSlideBase {
@private
	BOOL mShowMasterPlaceholderAnimations;	// 32 = 0x20
	BOOL mShowMasterShapes;	// 33 = 0x21
	OADThemeOverrides *mThemeOverrides;	// 36 = 0x24
	OADColorMap *mColorMapOverride;	// 40 = 0x28
}
@property(retain) id colorMapOverride;	// G=0x328a7385; S=0x329e31d5; converted property
@property(assign) BOOL showMasterPlaceholderAnimations;	// G=0x32a37335; S=0x329cea05; converted property
@property(assign) BOOL showMasterShapes;	// G=0x328a0629; S=0x3282655d; converted property
- (id)init;	// 0x32825e8d
- (id)colorMap;	// 0x328a7345
// converted property getter: - (id)colorMapOverride;	// 0x328a7385
- (id)colorScheme;	// 0x328a73c5
- (void)dealloc;	// 0x328a91b1
- (void)doneWithContent;	// 0x32a373a1
- (id)drawingTheme;	// 0x32a37345
- (id)fontScheme;	// 0x329ced0d
// converted property setter: - (void)setColorMapOverride:(id)override;	// 0x329e31d5
// converted property setter: - (void)setShowMasterPlaceholderAnimations:(BOOL)animations;	// 0x329cea05
// converted property setter: - (void)setShowMasterShapes:(BOOL)shapes;	// 0x3282655d
// converted property getter: - (BOOL)showMasterPlaceholderAnimations;	// 0x32a37335
// converted property getter: - (BOOL)showMasterShapes;	// 0x328a0629
- (id)styleMatrix;	// 0x329ebd4d
- (id)themeOverrides;	// 0x328a740d
@end

