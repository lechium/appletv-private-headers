/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class WebArchivePrivate;

@interface WebArchive : NSObject <NSCoding, NSCopying> {
@private
	WebArchivePrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x302ce84d
- (id)initWithCoder:(id)coder;	// 0x302cf1d5
- (id)initWithData:(id)data;	// 0x302cf3c9
- (id)initWithMainResource:(id)mainResource subresources:(id)subresources subframeArchives:(id)archives;	// 0x302cf60d
- (LegacyWebArchive *)_coreLegacyWebArchive;	// 0x302cfe1d
- (id)_initWithCoreLegacyWebArchive:(PassRefPtr<WebCore::LegacyWebArchive>)coreLegacyWebArchive;	// 0x302cfc9d
- (id)copyWithZone:(NSZone *)zone;	// 0x302cf0e1
- (id)data;	// 0x302ce8b1
- (void)dealloc;	// 0x302cf0f1
- (void)encodeWithCoder:(id)coder;	// 0x302cf13d
- (id)mainResource;	// 0x302cef11
- (id)subframeArchives;	// 0x302ce9b9
- (id)subresources;	// 0x302cec4d
@end

