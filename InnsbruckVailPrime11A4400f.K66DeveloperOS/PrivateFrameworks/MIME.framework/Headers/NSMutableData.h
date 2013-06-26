/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSMutableData.h>
#import "MIME-Structs.h"


@interface NSMutableData (RFC2231Support)
- (void)mf_appendRFC2231CompliantValue:(id)value forKey:(id)key;	// 0x312d40b9
@end

@interface NSMutableData (NSDataUtils)
- (void)mf_appendCString:(const char *)string;	// 0x312d4f29
- (void)mf_convertNetworkLineEndingsToUnix;	// 0x312d5069
- (void)mf_convertNetworkLineEndingsToUnixInRange:(NSRange)range;	// 0x312d4f51
- (void)mf_makeImmutable;	// 0x312d509d
@end
