/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoElement : ATVFeedElement {
	NSArray *_badges;	// 4 = 0x4
	NSArray *_previewImages;	// 8 = 0x8
	NSString *_caption;	// 12 = 0xc
}
@property(retain, nonatomic) NSArray *badges;	// G=0x3e19d5; S=0x3e19e5; @synthesize=_badges
@property(retain, nonatomic) NSString *caption;	// G=0x3e1a45; S=0x3e1a55; @synthesize=_caption
@property(retain, nonatomic) NSArray *previewImages;	// G=0x3e1a0d; S=0x3e1a1d; @synthesize=_previewImages
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3e1685
- (void).cxx_destruct;	// 0x3e1a7d
// declared property getter: - (id)badges;	// 0x3e19d5
// declared property getter: - (id)caption;	// 0x3e1a45
// declared property getter: - (id)previewImages;	// 0x3e1a0d
// declared property setter: - (void)setBadges:(id)badges;	// 0x3e19e5
// declared property setter: - (void)setCaption:(id)caption;	// 0x3e1a55
// declared property setter: - (void)setPreviewImages:(id)images;	// 0x3e1a1d
@end

