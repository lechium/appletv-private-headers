/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class UIImage, NSURL;

__attribute__((visibility("hidden")))
@interface UIActivityItemURLRep : NSObject {
	NSURL *_URL;	// 4 = 0x4
	UIImage *_thumbnail;	// 8 = 0x8
	int _attachmentURLType;	// 12 = 0xc
}
@property(retain, nonatomic) NSURL *URL;	// G=0x2f8fa335; S=0x2f8fa345; @synthesize=_URL
@property(assign, nonatomic) int attachmentURLType;	// G=0x2f8fa375; S=0x2f8fa385; @synthesize=_attachmentURLType
@property(retain, nonatomic) UIImage *thumbnail;	// G=0x2f8fa355; S=0x2f8fa365; @synthesize=_thumbnail
// declared property getter: - (id)URL;	// 0x2f8fa335
// declared property getter: - (int)attachmentURLType;	// 0x2f8fa375
- (void)dealloc;	// 0x2f8fa28d
- (BOOL)isFileURL;	// 0x2f8fa2e5
- (id)scheme;	// 0x2f8fa30d
// declared property setter: - (void)setAttachmentURLType:(int)type;	// 0x2f8fa385
// declared property setter: - (void)setThumbnail:(id)thumbnail;	// 0x2f8fa365
// declared property setter: - (void)setURL:(id)url;	// 0x2f8fa345
// declared property getter: - (id)thumbnail;	// 0x2f8fa355
@end
