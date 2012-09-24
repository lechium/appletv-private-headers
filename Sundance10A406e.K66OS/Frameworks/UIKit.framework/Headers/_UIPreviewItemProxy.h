/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIPreviewItemProxy : NSObject {
	NSURL *_URL;	// 4 = 0x4
	NSURL *_previewURLOverride;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSURL *_URLsToDeleteOnDealloc;	// 16 = 0x10
	NSString *_previewItemContentType;	// 20 = 0x14
	NSURL *_URLToDeleteOnDealloc;	// 24 = 0x18
}
@property(copy, nonatomic) NSURL *URLToDeleteOnDealloc;	// G=0x30be607d; S=0x30be6091; @synthesize=_URLToDeleteOnDealloc
@property(copy, nonatomic) NSString *previewItemContentType;	// G=0x30be5f71; S=0x30be5f2d; 
@property(copy, nonatomic) NSString *previewItemTitle;	// G=0x30be6059; S=0x30be606d; @synthesize=_name
@property(copy, nonatomic) NSURL *previewItemURL;	// G=0x30be6011; S=0x30be6025; @synthesize=_URL
@property(copy, nonatomic) NSURL *previewItemURLOverride;	// G=0x30be6035; S=0x30be6049; @synthesize=_previewURLOverride
// declared property getter: - (id)URLToDeleteOnDealloc;	// 0x30be607d
- (id)_primitive_previewItemContentType;	// 0x30be5fcd
- (void)dealloc;	// 0x30be5e49
// declared property getter: - (id)previewItemContentType;	// 0x30be5f71
// declared property getter: - (id)previewItemTitle;	// 0x30be6059
// declared property getter: - (id)previewItemURL;	// 0x30be6011
- (id)previewItemURLForDisplay;	// 0x30be5fdd
// declared property getter: - (id)previewItemURLOverride;	// 0x30be6035
// declared property setter: - (void)setPreviewItemContentType:(id)type;	// 0x30be5f2d
// declared property setter: - (void)setPreviewItemTitle:(id)title;	// 0x30be606d
// declared property setter: - (void)setPreviewItemURL:(id)url;	// 0x30be6025
// declared property setter: - (void)setPreviewItemURLOverride:(id)override;	// 0x30be6049
// declared property setter: - (void)setURLToDeleteOnDealloc:(id)deleteOnDealloc;	// 0x30be6091
@end
