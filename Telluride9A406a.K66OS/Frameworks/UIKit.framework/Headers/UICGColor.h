/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIColor.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UICGColor : UIColor {
@private
	CGColorRef cachedColor;	// 8 = 0x8
}
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x35738391
- (CGColorRef)CGColor;	// 0x357383f1
- (float)alphaComponent;	// 0x3574d0e1
- (id)colorSpaceName;	// 0x358a2399
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x358a2315
- (void)dealloc;	// 0x3573e9f5
- (id)description;	// 0x358a2431
- (unsigned)hash;	// 0x3574dfd1
- (BOOL)isEqual:(id)equal;	// 0x35810721
- (BOOL)isPatternColor;	// 0x358107c5
- (void)set;	// 0x3574dced
- (void)setFill;	// 0x358a2359
- (void)setStroke;	// 0x358a2379
@end

