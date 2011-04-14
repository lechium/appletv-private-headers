/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, NSDictionary;

@interface NSFileWrapper : NSObject <NSCoding> {
@private
	NSDictionary *_fileAttributes;	// 4 = 0x4
	NSString *_preferredFileName;	// 8 = 0x8
	NSString *_fileName;	// 12 = 0xc
	id _contents;	// 16 = 0x10
	id _icon;	// 20 = 0x14
	id _moreVars;	// 24 = 0x18
}
@property(retain) NSDictionary *fileAttributes;	// G=0x324f04b1; S=0x324f0271; converted property
@property(retain) id filename;	// G=0x324ee5fd; S=0x324ee62d; converted property
@property(retain) id preferredFilename;	// G=0x324ee669; S=0x324f0351; converted property
+ (BOOL)_canSafelyMapFilesAtPath:(id)path;	// 0x324f23cd
+ (BOOL)_finishWritingToURL:(id)url byMovingItemAtURL:(id)url2 addingAttributes:(id)attributes error:(id *)error;	// 0x324edcfd
+ (BOOL)_finishWritingToURL:(id)url byTakingContentsFromItemAtURL:(id)url2 addingAttributes:(id)attributes usingTemporaryDirectoryAtURL:(id)url4 backupFileName:(id)name error:(id *)error;	// 0x324edc89
+ (BOOL)_forPath:(id)path getItemKind:(id *)kind modificationDate:(id *)date;	// 0x324f22d5
+ (id)_newContentsAtURL:(id)url path:(id)path itemKind:(id)kind oldChildrenByUniqueFileName:(id)name options:(unsigned)options error:(id *)error;	// 0x324ef5e9
+ (id)_pathForURL:(id)url reading:(BOOL)reading error:(id *)error;	// 0x324ede91
+ (void)_removeTemporaryDirectoryAtURL:(id)url;	// 0x324f257d
+ (id)_temporaryDirectoryURLForWritingToURL:(id)url error:(id *)error;	// 0x324ede51
+ (void)_writeAttributes:(id)attributes toURL:(id)url;	// 0x324eddb1
+ (void)initialize;	// 0x324eebd9
- (id)init;	// 0x324eebc1
- (id)initDirectoryWithFileWrappers:(id)fileWrappers;	// 0x324efe89
- (id)initRegularFileWithContents:(id)contents;	// 0x324eea9d
- (id)initSymbolicLinkWithDestinationURL:(id)destinationURL;	// 0x324ee9c9
- (id)initWithCoder:(id)coder;	// 0x324edfa1
- (id)initWithSerializedRepresentation:(id)serializedRepresentation;	// 0x324ee7f9
- (id)initWithURL:(id)url options:(unsigned)options error:(id *)error;	// 0x324eef71
- (id)_addChild:(id)child forUniqueFileName:(id)uniqueFileName;	// 0x324ee125
- (void)_addParent:(id)parent;	// 0x324f21e1
- (id)_attributesToWrite;	// 0x324ee279
- (void)_forWritingToURL:(id)url returnContentsLazyReadingError:(id *)error;	// 0x324eec69
- (id)_fullDescription:(BOOL)description;	// 0x324edc4d
- (id)_init;	// 0x324eec0d
- (void)_initDirectoryContents;	// 0x324f2275
- (id)_initWithImpl:(id)impl preferredFileName:(id)name uniqueFileName:(id)name3 docInfo:(id)info iconData:(id)data;	// 0x324f1601
- (BOOL)_matchesItemKind:(id)kind modificationDate:(id)date;	// 0x324ee4c5
- (id)_newImpl;	// 0x324f1f49
- (void)_observePreferredFileNameOfChild:(id)child;	// 0x324ee699
- (BOOL)_readContentsFromURL:(id)url path:(id)path itemKind:(id)kind options:(unsigned)options error:(id *)error;	// 0x324ef375
- (void)_removeChild:(id)child forUniqueFileName:(id)uniqueFileName;	// 0x324ee071
- (void)_removeParent:(id)parent;	// 0x324f2199
- (void)_resetFileModificationDate;	// 0x324ee0a9
- (id)_uniqueFileNameOfChild:(id)child;	// 0x324ef1bd
- (void)_updateDescendantFileNames;	// 0x324ef289
- (BOOL)_writeContentsToURL:(id)url path:(id)path originalContentsURL:(id)url3 tryHardLinking:(BOOL)linking didHardLinking:(BOOL *)linking5 error:(id *)error;	// 0x324f05ad
- (id)addFileWrapper:(id)wrapper;	// 0x324f1135
- (id)addRegularFileWithContents:(id)contents preferredFilename:(id)filename;	// 0x324f0191
- (void)dealloc;	// 0x324efcad
- (void)encodeWithCoder:(id)coder;	// 0x324ee015
// converted property getter: - (id)fileAttributes;	// 0x324f04b1
- (id)fileWrappers;	// 0x324f0f55
// converted property getter: - (id)filename;	// 0x324ee5fd
- (BOOL)isDirectory;	// 0x324ee7b9
- (BOOL)isRegularFile;	// 0x324ee779
- (BOOL)isSymbolicLink;	// 0x324ee739
- (id)keyForFileWrapper:(id)fileWrapper;	// 0x324f0031
- (BOOL)matchesContentsOfURL:(id)url;	// 0x324efa8d
// converted property getter: - (id)preferredFilename;	// 0x324ee669
- (BOOL)readFromURL:(id)url options:(unsigned)options error:(id *)error;	// 0x324eece9
- (id)regularFileContents;	// 0x324f0d99
- (void)removeFileWrapper:(id)wrapper;	// 0x324f00b5
- (id)serializedRepresentation;	// 0x324f1cf5
// converted property setter: - (void)setFileAttributes:(id)attributes;	// 0x324f0271
// converted property setter: - (void)setFilename:(id)filename;	// 0x324ee62d
// converted property setter: - (void)setPreferredFilename:(id)filename;	// 0x324f0351
- (id)symbolicLinkDestinationURL;	// 0x324f0bdd
- (BOOL)writeToURL:(id)url options:(unsigned)options originalContentsURL:(id)url3 error:(id *)error;	// 0x324f1379
@end

