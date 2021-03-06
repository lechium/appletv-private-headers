/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQUOutputBundle.h"


__attribute__((visibility("hidden")))
@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle> {
@private
	CFDictionaryRef mAttachments;	// 4 = 0x4
	CFDataRef mMainHtmlData;	// 8 = 0x8
	CFStringRef mUriPrefix;	// 12 = 0xc
	CFStringRef mUuidStr;	// 16 = 0x10
}
- (id)init;	// 0x359b2dad
- (CFDictionaryRef)attachments;	// 0x359b23b9
- (CFDictionaryRef)createOutputDictionary;	// 0x359b2bc1
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x359b2ca9
- (void)dealloc;	// 0x359b2d25
- (CFDataRef)mainHtmlData;	// 0x359b23a9
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x359b2c35
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x359b2c89
- (void)setDocumentSize:(CGSize)size;	// 0x359b23c9
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x359b23cd
- (void)setUriPrefix:(CFStringRef)prefix;	// 0x359b2cfd
@end

