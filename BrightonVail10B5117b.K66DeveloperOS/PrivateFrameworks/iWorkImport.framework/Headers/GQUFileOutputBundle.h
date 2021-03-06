/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQUOutputBundle.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQUFileOutputBundle : NSObject <GQUOutputBundle> {
	CFURLRef mOutputUrl;	// 4 = 0x4
}
- (id)initWithOutputPath:(CFStringRef)outputPath;	// 0x36accba5
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x36accc89
- (void)dealloc;	// 0x36accc45
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x36acccb9
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x36accc91
- (void)setDocumentSize:(CGSize)size;	// 0x36accde5
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x36accde9
@end

