/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQUOutputBundle.h"

@class GQUProgressiveHelper;

__attribute__((visibility("hidden")))
@interface GQUProgressiveOutputBundle : NSObject <GQUOutputBundle> {
@private
	GQUProgressiveHelper *mHelper;	// 4 = 0x4
	CFDictionaryRef mQuickLookProperties;	// 8 = 0x8
	CFDictionaryRef mAttachmentsURLs;	// 12 = 0xc
	CFDictionaryRef mComputedAttachments;	// 16 = 0x10
	CFStringRef mUuidStr;	// 20 = 0x14
	CFStringRef mUriScheme;	// 24 = 0x18
	BOOL mPreviewStarted;	// 28 = 0x1c
}
- (id)initWithHandler:(id)handler;	// 0x33c432a1
- (BOOL)appendData:(CFDataRef)data mimeType:(CFStringRef)type resourceName:(CFStringRef)name;	// 0x33c42451
- (void)closeAttachment:(CFStringRef)attachment;	// 0x33c424a5
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x33c43161
- (void)dealloc;	// 0x33c431d1
- (CFURLRef)getAttachmentURL:(CFStringRef)url mimeType:(CFStringRef)type;	// 0x33c42e31
- (void)setCurrentSheetUri:(CFStringRef)uri;	// 0x33c424e1
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x33c42fb5
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x33c42421
- (void)setDocumentSize:(CGSize)size;	// 0x33c423d5
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x33c423d9
- (void)startProgressiveData;	// 0x33c42f4d
@end

