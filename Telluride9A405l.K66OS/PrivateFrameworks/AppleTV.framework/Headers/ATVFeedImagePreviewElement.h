/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedImagePreviewElement : ATVFeedElement {
@private
	ATVFeedImageElement *_image;	// 28 = 0x1c
}
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x35f31bb9; S=0x35f31bc9; @synthesize=_image
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x35f31ad5
- (void)dealloc;	// 0x35f31b6d
// declared property getter: - (id)image;	// 0x35f31bb9
// declared property setter: - (void)setImage:(id)image;	// 0x35f31bc9
@end
