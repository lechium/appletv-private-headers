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
@property(copy, nonatomic) NSURL *URLToDeleteOnDealloc;	// G=0x32fc2a05; S=0x32fc2a19; @synthesize=_URLToDeleteOnDealloc
@property(copy, nonatomic) NSString *previewItemContentType;	// G=0x32fc28f9; S=0x32fc28b5; 
@property(copy, nonatomic) NSString *previewItemTitle;	// G=0x32fc29e1; S=0x32fc29f5; @synthesize=_name
@property(copy, nonatomic) NSURL *previewItemURL;	// G=0x32fc2999; S=0x32fc29ad; @synthesize=_URL
@property(copy, nonatomic) NSURL *previewItemURLOverride;	// G=0x32fc29bd; S=0x32fc29d1; @synthesize=_previewURLOverride
// declared property getter: - (id)URLToDeleteOnDealloc;	// 0x32fc2a05
- (id)_primitive_previewItemContentType;	// 0x32fc2955
- (void)dealloc;	// 0x32fc27d1
// declared property getter: - (id)previewItemContentType;	// 0x32fc28f9
// declared property getter: - (id)previewItemTitle;	// 0x32fc29e1
// declared property getter: - (id)previewItemURL;	// 0x32fc2999
- (id)previewItemURLForDisplay;	// 0x32fc2965
// declared property getter: - (id)previewItemURLOverride;	// 0x32fc29bd
// declared property setter: - (void)setPreviewItemContentType:(id)type;	// 0x32fc28b5
// declared property setter: - (void)setPreviewItemTitle:(id)title;	// 0x32fc29f5
// declared property setter: - (void)setPreviewItemURL:(id)url;	// 0x32fc29ad
// declared property setter: - (void)setPreviewItemURLOverride:(id)override;	// 0x32fc29d1
// declared property setter: - (void)setURLToDeleteOnDealloc:(id)deleteOnDealloc;	// 0x32fc2a19
@end

