/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedImageAssetElementType : ATVFeedElement {
	NSString *_src;	// 4 = 0x4
	float _height;	// 8 = 0x8
	float _width;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
}
@property(assign, nonatomic) float height;	// G=0x3f27f5; S=0x3f2805; @synthesize=_height
@property(retain, nonatomic) NSString *name;	// G=0x3f2835; S=0x3f2845; @synthesize=_name
@property(retain, nonatomic) NSString *src;	// G=0x3f27bd; S=0x3f27cd; @synthesize=_src
@property(assign, nonatomic) float width;	// G=0x3f2815; S=0x3f2825; @synthesize=_width
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3f2645
- (void).cxx_destruct;	// 0x3f286d
// declared property getter: - (float)height;	// 0x3f27f5
// declared property getter: - (id)name;	// 0x3f2835
// declared property setter: - (void)setHeight:(float)height;	// 0x3f2805
// declared property setter: - (void)setName:(id)name;	// 0x3f2845
// declared property setter: - (void)setSrc:(id)src;	// 0x3f27cd
// declared property setter: - (void)setWidth:(float)width;	// 0x3f2825
// declared property getter: - (id)src;	// 0x3f27bd
// declared property getter: - (float)width;	// 0x3f2815
@end

