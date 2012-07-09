/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library


@interface NSDictionary (NSDictionary)
+ (id)dictionaryWithContentsOfFile:(id)file;	// 0x3730f6f1
+ (id)dictionaryWithContentsOfURL:(id)url;	// 0x3736f235
+ (id)newWithContentsOf:(id)of immutable:(BOOL)immutable;	// 0x3730f731
+ (BOOL)supportsSecureCoding;	// 0x3736f0a5
- (id)initWithCoder:(id)coder;	// 0x37318ac5
- (id)initWithContentsOfFile:(id)file;	// 0x3736f275
- (id)initWithContentsOfURL:(id)url;	// 0x3736f2b1
- (id)_stringToWrite;	// 0x3736f0c5
- (Class)classForCoder;	// 0x3736f0a9
- (id)descriptionInStringsFileFormat;	// 0x373467fd
- (void)encodeWithCoder:(id)coder;	// 0x37349e71
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x3734bbbd
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x3736f125
@end

@interface NSDictionary (NSFileAttributes)
- (id)fileCreationDate;	// 0x37374db1
- (BOOL)fileExtensionHidden;	// 0x37374cb9
- (id)fileGroupOwnerAccountID;	// 0x37374de9
- (id)fileGroupOwnerAccountName;	// 0x37374c31
- (unsigned)fileGroupOwnerAccountNumber;	// 0x37374c4d
- (unsigned long)fileHFSCreatorCode;	// 0x37374ce9
- (unsigned long)fileHFSTypeCode;	// 0x37374d1d
- (BOOL)fileIsAppendOnly;	// 0x37374d81
- (BOOL)fileIsImmutable;	// 0x37374d51
- (id)fileModificationDate;	// 0x37374ba5
- (id)fileOwnerAccountID;	// 0x37374dcd
- (id)fileOwnerAccountName;	// 0x37374c11
- (unsigned)fileOwnerAccountNumber;	// 0x37374c2d
- (unsigned)filePosixPermissions;	// 0x37374bdd
- (unsigned long long)fileSize;	// 0x37374b71
- (unsigned)fileSystemFileNumber;	// 0x37374c85
- (int)fileSystemNumber;	// 0x37374c51
- (id)fileType;	// 0x37374bc1
@end

@interface NSDictionary (NSKeyValueCoding)
- (id)valueForKey:(id)key;	// 0x37311205
- (id)valueForKeyPath:(id)keyPath;	// 0x37386631
@end

@interface NSDictionary (NSURLExtras)
- (int)_web_intForKey:(id)key;	// 0x373c0b35
- (id)_web_numberForKey:(id)key;	// 0x373c0b99
- (id)_web_objectForMIMEType:(id)mimetype;	// 0x373c0bcd
- (id)_web_stringForKey:(id)key;	// 0x373c0b65
@end

@interface NSDictionary (NSDictionaryPortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x37459815
@end
