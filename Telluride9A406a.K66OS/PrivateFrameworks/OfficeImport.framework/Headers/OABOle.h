/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABOle : NSObject {
}
+ (BOOL)isBiffCLSID:(id)clsid;	// 0x32976c19
+ (BOOL)isChart:(id)chart;	// 0x32976bcd
+ (id)read4ByteFromStream:(SsrwOOStream *)stream;	// 0x32a138c9
+ (id)readAnsiStringFromStream:(SsrwOOStream *)stream;	// 0x329d24a9
+ (id)readCLSIDFromStream:(SsrwOOStream *)stream;	// 0x32976a89
+ (id)readCompressedFromStream:(SsrwOOStream *)stream compressedSize:(unsigned long)size uncompressedSize:(unsigned long)size3 cancel:(id)cancel;	// 0x329d224d
+ (id)readFromData:(id)data cancel:(id)cancel;	// 0x329e41b5
+ (id)readFromFileName:(id)fileName cancel:(id)cancel;	// 0x32975e7d
+ (id)readFromParentStorage:(SsrwOOStorage *)parentStorage storageName:(id)name cancel:(id)cancel;	// 0x32973a51
+ (id)readFromStream:(SsrwOOStream *)stream size:(unsigned long)size cancel:(id)cancel;	// 0x32a2d719
+ (BOOL)readSharedInfoFor:(id)aFor fromStorage:(SsrwOOStorage *)storage;	// 0x329763c9
+ (id)readUnicodeStringFromStream:(SsrwOOStream *)stream;	// 0x329d2619
+ (id)stringForCLSID:(SsrwOO_GUID)clsid;	// 0x32976b19
@end

