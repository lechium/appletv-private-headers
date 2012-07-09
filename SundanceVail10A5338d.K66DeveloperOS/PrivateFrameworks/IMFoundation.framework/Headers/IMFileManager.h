/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSFileManager.h> // Unknown library


@interface IMFileManager : NSFileManager {
}
+ (id)defaultHFSFileManager;	// 0x36935e09
+ (id)defaultManager;	// 0x36935df9
- (id)MIMETypeOfPath:(id)path;	// 0x3693627d
- (id)MIMETypeOfPathExtension:(id)pathExtension;	// 0x36936215
- (id)UTITypeOfPath:(id)path;	// 0x36936301
- (id)UTITypeOfPathExtension:(id)pathExtension;	// 0x369363c5
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x36936029
- (id)createTempFileBasedOnName:(id)name hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags;	// 0x36935eb5
- (id)displayNameOfFileWithName:(id)name hfsFlags:(unsigned short)flags;	// 0x3693614d
- (BOOL)existingPath:(id)path toFSRef:(void *)fsref;	// 0x36936021
- (BOOL)existingPath:(id)path toFSSpec:(void *)fsspec;	// 0x36936025
- (id)kindStringForFile:(id)file;	// 0x36936095
- (id)kindStringForFileWithName:(id)name hfsType:(unsigned long)type hfsCreator:(unsigned long)creator hfsFlags:(unsigned short)flags;	// 0x369360ed
- (id)pathExtensionForMIMEType:(id)mimetype;	// 0x369361a5
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0x36936059
@end
