/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UIAttributedStringView : UIView {
@private
	NSAttributedString *_string;	// 84 = 0x54
}
+ (Class)layerClass;	// 0x3041dae1
- (id)initWithFrame:(CGRect)frame;	// 0x3041dafd
- (void)_updateContentsScale:(id)scale;	// 0x3041dcbd
- (void)dealloc;	// 0x3041dbf5
- (void)didMoveToSuperview;	// 0x3041dd51
- (void)setFrame:(CGRect)frame;	// 0x3041dc71
- (void)setString:(id)string;	// 0x3041ddcd
- (void)setTextRotationAngle:(float)angle;	// 0x3041de31
@end

