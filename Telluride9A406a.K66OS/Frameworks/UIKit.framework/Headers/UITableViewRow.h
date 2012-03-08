/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {
@private
	int _indentationLevel;	// 4 = 0x4
	UITableViewCell *_cell;	// 8 = 0x8
	float _height;	// 12 = 0xc
}
@property(retain, nonatomic) UITableViewCell *cell;	// G=0x359e34b9; S=0x359e34c9; @synthesize=_cell
@property(assign, nonatomic) float height;	// G=0x359e3499; S=0x359e34a9; @synthesize=_height
@property(assign, nonatomic) int indentationLevel;	// G=0x359e3479; S=0x359e3489; @synthesize=_indentationLevel
+ (id)row;	// 0x359e3199
- (id)initWithCoder:(id)coder;	// 0x359e31e1
// declared property getter: - (id)cell;	// 0x359e34b9
- (void)dealloc;	// 0x359e342d
- (void)encodeWithCoder:(id)coder;	// 0x359e32f5
// declared property getter: - (float)height;	// 0x359e3499
// declared property getter: - (int)indentationLevel;	// 0x359e3479
// declared property setter: - (void)setCell:(id)cell;	// 0x359e34c9
// declared property setter: - (void)setHeight:(float)height;	// 0x359e34a9
// declared property setter: - (void)setIndentationLevel:(int)level;	// 0x359e3489
@end

