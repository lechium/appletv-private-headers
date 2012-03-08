/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {
@private
	NSURLFileTypeMappingsInternal *_internal;	// 4 = 0x4
}
+ (id)sharedMappings;	// 0x31047d4d
- (id)MIMETypeForExtension:(id)extension;	// 0x31048049
- (id)_UTIMIMETypeForExtension:(id)extension;	// 0x310480ad
- (id)_UTIextensionForMIMEType:(id)mimetype;	// 0x310b9c3d
- (id)_init;	// 0x31047db9
- (id)extensionsForMIMEType:(id)mimetype;	// 0x310b9d51
- (id)preferredExtensionForMIMEType:(id)mimetype;	// 0x310b9cd9
@end

