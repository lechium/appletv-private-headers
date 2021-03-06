/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSData.h> // Unknown library
#import "WebCore-Structs.h"


__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferData : NSData {
@private
	RefPtr<WebCore::SharedBuffer> sharedBuffer;	// 4 = 0x4
}
+ (void)initialize;	// 0x319d3c6d
- (id)initWithSharedBuffer:(SharedBuffer *)sharedBuffer;	// 0x319d3c85
- (id).cxx_construct;	// 0x319d3c71
- (void).cxx_destruct;	// 0x319d4195
- (const void *)bytes;	// 0x319d3d81
- (void)dealloc;	// 0x319d4141
- (void)finalize;	// 0x31f4eea5
- (unsigned)length;	// 0x319d3cf1
@end

