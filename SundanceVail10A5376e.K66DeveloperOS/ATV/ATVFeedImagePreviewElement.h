/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedImagePreviewElement : ATVFeedElement {
	ATVFeedImageElement *_image;	// 4 = 0x4
}
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x14f7b1; S=0x14f7c1; @synthesize=_image
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x14f6cd
- (void)dealloc;	// 0x14f765
// declared property getter: - (id)image;	// 0x14f7b1
// declared property setter: - (void)setImage:(id)image;	// 0x14f7c1
@end

