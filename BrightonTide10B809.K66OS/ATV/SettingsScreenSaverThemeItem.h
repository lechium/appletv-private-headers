/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, ATVScreenSaverTheme;

__attribute__((visibility("hidden")))
@interface SettingsScreenSaverThemeItem : XXUnknownSuperclass {
	ATVScreenSaverTheme *_theme;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	int _target;	// 12 = 0xc
}
@property(assign, nonatomic) int target;	// G=0xb18c9; S=0xb18d9; @synthesize=_target
@property(retain, nonatomic) ATVScreenSaverTheme *theme;	// G=0xb186d; S=0xb187d; @synthesize=_theme
@property(copy, nonatomic) NSString *title;	// G=0xb18a5; S=0xb18b9; @synthesize=_title
- (void).cxx_destruct;	// 0xb18e9
// declared property setter: - (void)setTarget:(int)target;	// 0xb18d9
// declared property setter: - (void)setTheme:(id)theme;	// 0xb187d
// declared property setter: - (void)setTitle:(id)title;	// 0xb18b9
// declared property getter: - (int)target;	// 0xb18c9
// declared property getter: - (id)theme;	// 0xb186d
// declared property getter: - (id)title;	// 0xb18a5
@end
