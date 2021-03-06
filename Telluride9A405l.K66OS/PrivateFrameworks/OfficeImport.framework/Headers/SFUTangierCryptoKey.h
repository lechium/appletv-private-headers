/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUCryptoKey.h"


__attribute__((visibility("hidden")))
@interface SFUTangierCryptoKey : SFUCryptoKey {
@private
	char *mKey;	// 8 = 0x8
	unsigned mKeyLength;	// 12 = 0xc
}
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length;	// 0x30ebd439
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length iterationCount:(unsigned)count;	// 0x30ebd381
- (void)dealloc;	// 0x30ebd335
- (const char *)keyData;	// 0x30ebd2a5
- (unsigned long)keyLength;	// 0x30ebd2b5
@end

