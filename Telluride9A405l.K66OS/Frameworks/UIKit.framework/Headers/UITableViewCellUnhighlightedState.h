/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITableViewCellUnhighlightedState : NSObject {
@private
	BOOL _opaque;	// 4 = 0x4
	BOOL _highlighted;	// 5 = 0x5
	UIColor *_backgroundColor;	// 8 = 0x8
}
@property(retain) UIColor *backgroundColor;	// G=0x32da2035; S=0x32da0381; @synthesize=_backgroundColor
@property(assign) BOOL highlighted;	// G=0x32db8c09; S=0x32db8bf9; @synthesize=_highlighted
@property(assign) BOOL opaque;	// G=0x32da2025; S=0x32da0371; @synthesize=_opaque
// declared property getter: - (id)backgroundColor;	// 0x32da2035
- (void)dealloc;	// 0x32da2049
// declared property getter: - (BOOL)highlighted;	// 0x32db8c09
// declared property getter: - (BOOL)opaque;	// 0x32da2025
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x32da0381
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x32db8bf9
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x32da0371
@end
