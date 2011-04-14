/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library


@interface NSDictionary (NSDictionary)
+ (id)dictionaryWithContentsOfFile:(id)file;	// 0x32417535
+ (id)dictionaryWithContentsOfURL:(id)url;	// 0x3244a45d
+ (id)newWithContentsOf:(id)of immutable:(BOOL)immutable;	// 0x3241756d
- (id)initWithCoder:(id)coder;	// 0x3243db15
- (id)initWithContentsOfFile:(id)file;	// 0x324633f9
- (id)initWithContentsOfURL:(id)url;	// 0x324633c1
- (id)_stringToWrite;	// 0x32463431
- (Class)classForCoder;	// 0x32463481
- (id)descriptionInStringsFileFormat;	// 0x324638cd
- (void)encodeWithCoder:(id)coder;	// 0x3244c5c9
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x32463a3d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x32463b09
@end

@interface NSDictionary (NSFileAttributes)
- (id)fileCreationDate;	// 0x3246792d
- (BOOL)fileExtensionHidden;	// 0x324679f9
- (id)fileGroupOwnerAccountID;	// 0x324678f5
- (id)fileGroupOwnerAccountName;	// 0x32467a7d
- (unsigned)fileGroupOwnerAccountNumber;	// 0x32466ee5
- (unsigned long)fileHFSCreatorCode;	// 0x324679cd
- (unsigned long)fileHFSTypeCode;	// 0x324679a1
- (BOOL)fileIsAppendOnly;	// 0x32467949
- (BOOL)fileIsImmutable;	// 0x32467975
- (id)fileModificationDate;	// 0x32467b01
- (id)fileOwnerAccountID;	// 0x32467911
- (id)fileOwnerAccountName;	// 0x32467a99
- (unsigned)fileOwnerAccountNumber;	// 0x32466ee1
- (unsigned)filePosixPermissions;	// 0x32467ab5
- (unsigned long long)fileSize;	// 0x32467b1d
- (unsigned)fileSystemFileNumber;	// 0x32467a25
- (int)fileSystemNumber;	// 0x32467a51
- (id)fileType;	// 0x32467ae5
@end

@interface NSDictionary (NSKeyValueCoding)
- (id)valueForKey:(id)key;	// 0x3241739d
- (id)valueForKeyPath:(id)keyPath;	// 0x32478839
@end

@interface NSDictionary (NSURLExtras)
- (int)_web_intForKey:(id)key;	// 0x324af821
- (id)_web_numberForKey:(id)key;	// 0x324af7c1
- (id)_web_objectForMIMEType:(id)mimetype;	// 0x324af845
- (id)_web_stringForKey:(id)key;	// 0x324af7f1
@end

