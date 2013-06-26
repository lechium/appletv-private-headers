/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QLPreviewItem.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSURL, NSString;

@interface QLPreviewItemProxy : NSObject <NSCoding, QLPreviewItem> {
	NSString *_fileExtensionToken;	// 4 = 0x4
	int _fileExtensionHandle;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSString *_title;	// 16 = 0x10
	NSURL *_urlForDisplay;	// 20 = 0x14
	NSString *_contentType;	// 24 = 0x18
	NSString *_password;	// 28 = 0x1c
}
@property(retain) NSString *contentType;	// G=0x32a4d3c9; S=0x32a4d3dd; @synthesize=_contentType
@property(retain) NSString *password;	// G=0x32a4d3ed; S=0x32a4d401; @synthesize=_password
@property(readonly, assign) NSString *previewItemTitle;	// G=0x32a4d119; 
@property(readonly, assign) NSURL *previewItemURL;	// G=0x32a4d0e1; 
@property(retain) NSString *title;	// G=0x32a4d381; S=0x32a4d395; @synthesize=_title
@property(retain) NSURL *url;	// G=0x32a4d35d; S=0x32a4d371; @synthesize=_url
@property(retain) NSURL *urlForDisplay;	// G=0x32a4d3a5; S=0x32a4d3b9; @synthesize=_urlForDisplay
+ (id)proxyWithPreviewItem:(id)previewItem;	// 0x32a4cb41
- (id)initWithCoder:(id)coder;	// 0x32a4cf3d
- (id)initWithPreviewItem:(id)previewItem;	// 0x32a4cbcd
- (void)consumeFileExtension;	// 0x32a4d311
// declared property getter: - (id)contentType;	// 0x32a4d3c9
- (void)dealloc;	// 0x32a4ccf5
- (id)description;	// 0x32a4d079
- (void)encodeWithCoder:(id)coder;	// 0x32a4cdc1
- (void)issueFileExtension;	// 0x32a4d1dd
// declared property getter: - (id)password;	// 0x32a4d3ed
- (id)previewItemContentType;	// 0x32a4d151
// declared property getter: - (id)previewItemTitle;	// 0x32a4d119
// declared property getter: - (id)previewItemURL;	// 0x32a4d0e1
- (id)previewItemURLForDisplay;	// 0x32a4d189
// declared property setter: - (void)setContentType:(id)type;	// 0x32a4d3dd
// declared property setter: - (void)setPassword:(id)password;	// 0x32a4d401
// declared property setter: - (void)setTitle:(id)title;	// 0x32a4d395
// declared property setter: - (void)setUrl:(id)url;	// 0x32a4d371
// declared property setter: - (void)setUrlForDisplay:(id)display;	// 0x32a4d3b9
// declared property getter: - (id)title;	// 0x32a4d381
// declared property getter: - (id)url;	// 0x32a4d35d
// declared property getter: - (id)urlForDisplay;	// 0x32a4d3a5
@end
