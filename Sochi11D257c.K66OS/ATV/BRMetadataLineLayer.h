/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRMetadataLineLayer : BRControl {
	BRControl *_labelLayer;	// 84 = 0x54
	BRControl *_valueLayer;	// 88 = 0x58
	float _maxLabelWidth;	// 92 = 0x5c
}
- (id)initWithLabel:(id)label value:(id)value;	// 0x397501
- (id)accessibilityLabel;	// 0x397671
- (void)dealloc;	// 0x3975ed
- (id)label;	// 0x397651
- (void)layoutSubcontrols;	// 0x397791
- (void)setMaxLabelWidth:(float)width;	// 0x3976c1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3976e1
- (id)value;	// 0x397661
@end

