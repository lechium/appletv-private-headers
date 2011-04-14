/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying> {
@private
	WebResourcePrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x32c702c1
- (id)initWithCoder:(id)coder;	// 0x32c70635
- (id)initWithData:(id)data URL:(id)url MIMEType:(id)type textEncodingName:(id)name frameName:(id)name5;	// 0x32c70e11
- (id)MIMEType;	// 0x32c70405
- (id)URL;	// 0x32c70441
- (ArchiveResource *)_coreResource;	// 0x32c70121
- (void)_ignoreWhenUnarchiving;	// 0x32c7013d
- (id)_initWithCoreResource:(PassRefPtr<WebCore::ArchiveResource>)coreResource;	// 0x32c70eb1
- (id)_initWithData:(id)data URL:(id)url MIMEType:(id)type textEncodingName:(id)name frameName:(id)name5 response:(id)response copyData:(BOOL)data7;	// 0x32c71065
- (id)_initWithData:(id)data URL:(id)url response:(id)response;	// 0x32c70e4d
- (id)_response;	// 0x32c715c1
- (id)_stringValue;	// 0x32c71661
- (id)_suggestedFilename;	// 0x32c71621
- (id)copyWithZone:(NSZone *)zone;	// 0x32c704ad
- (id)data;	// 0x32c7046d
- (void)dealloc;	// 0x32c704c1
- (id)description;	// 0x32c7032d
- (void)encodeWithCoder:(id)coder;	// 0x32c7050d
- (id)frameName;	// 0x32c7038d
- (id)textEncodingName;	// 0x32c703c9
@end

