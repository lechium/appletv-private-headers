/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "NSObject.h"


@protocol GQUOutputBundle <NSObject>
- (CFStringRef)createUriForResource:(CFStringRef)resource;
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;
- (void)setDocumentSize:(CGSize)size;
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;
@end

