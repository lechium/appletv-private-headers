/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDWPStorage : NSObject {
@private
	GQDSStylesheet *mStylesheet;	// 4 = 0x4
	CFArrayRef mBody;	// 8 = 0x8
	CFArrayRef mAttachments;	// 12 = 0xc
}
- (CFArrayRef)attachments;	// 0x36c60d91
- (void)dealloc;	// 0x36c60d09
- (id)stylesheet;	// 0x36c60d81
@end

