/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUCryptor : NSObject {
}
- (id)initWithKey:(id)key operation:(int)operation iv:(const char *)iv ivLength:(unsigned long)length;	// 0x36cbb4bd
- (BOOL)cryptDataFromBuffer:(const char *)buffer length:(unsigned long)length toStream:(id)stream finished:(BOOL)finished crc32:(unsigned *)a32 error:(id *)error;	// 0x36cbb50d
- (BOOL)cryptDataFromBuffer:(const char *)buffer length:(unsigned long)length toStream:(id)stream finished:(BOOL)finished error:(id *)error;	// 0x36cbb509
- (BOOL)cryptDataFromStream:(id)stream toBuffer:(char *)buffer length:(unsigned long)length bytesRead:(unsigned *)read error:(id *)error;	// 0x36cbb511
@end

