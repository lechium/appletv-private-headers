/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSFileManager : NSObject {
}
@property(assign) id delegate;	// G=0x30623425; S=0x306653c1; converted property
+ (id)defaultManager;	// 0x305fdbe1
- (id)URLForDirectory:(unsigned)directory inDomain:(unsigned)domain appropriateForURL:(id)url create:(BOOL)create error:(id *)error;	// 0x306644e5
- (id)URLForPublishingUbiquitousItemAtURL:(id)url expirationDate:(id *)date error:(id *)error;	// 0x306675b1
- (id)URLForUbiquityContainerIdentifier:(id)ubiquityContainerIdentifier;	// 0x306672bd
- (id)URLsForDirectory:(unsigned)directory inDomains:(unsigned)domains;	// 0x30647ecd
- (id)_URLForReplacingItemAtURL:(id)url error:(id *)error;	// 0x30664235
- (id)_attributesOfItemAtPath:(id)path filterResourceFork:(BOOL)fork error:(id *)error;	// 0x30666675
- (id)_attributesOfItemAtURL:(id)url filterResourceFork:(BOOL)fork error:(id *)error;	// 0x306666a5
- (id)_displayPathForPath:(id)path;	// 0x30664861
- (id)_info;	// 0x30623449
- (void)_performRemoveFileAtPath:(id)path;	// 0x306ad4ed
- (void)_web_backgroundRemoveFileAtPath:(id)path;	// 0x306ad535
- (void)_web_backgroundRemoveLeftoverFiles:(id)files;	// 0x306ad629
- (id)_web_carbonPathForPath_nowarn:(id)path_nowarn;	// 0x306ada25
- (BOOL)_web_changeFileAttributes_nowarn:(id)nowarn atPath:(id)path;	// 0x306add45
- (BOOL)_web_changeFinderAttributes:(id)attributes forFileAtPath:(id)path;	// 0x306ad4a1
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)intermediateDirectories attributes:(id)attributes;	// 0x30627655
- (BOOL)_web_createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x306ad4a5
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)intermediateDirectories contents:(id)contents attributes:(id)attributes directoryAttributes:(id)attributes4;	// 0x306ad40d
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)path_nowarn attributes:(id)attributes;	// 0x306ada75
- (BOOL)_web_fileExistsAtPath_nowarn:(id)path_nowarn isDirectory:(BOOL *)directory traverseLink:(BOOL)link;	// 0x306ad8ed
- (void)_web_noteFileChangedAtPath_nowarn:(id)path_nowarn;	// 0x306add41
- (id)_web_pathWithUniqueFilenameForPath:(id)path;	// 0x306ad73d
- (BOOL)_web_removeFileOnlyAtPath:(id)path;	// 0x3062816d
- (id)_web_startupVolumeName_nowarn;	// 0x306ada29
- (id)_web_visibleItemsInDirectoryAtPath:(id)path;	// 0x306ad729
- (id)attributesOfFileSystemForPath:(id)path error:(id *)error;	// 0x3061f00d
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x30630a89
- (BOOL)changeCurrentDirectoryPath:(id)path;	// 0x30664ae5
- (BOOL)changeFileAttributes:(id)attributes atPath:(id)path;	// 0x30664b41
- (id)componentsToDisplayForPath:(id)path;	// 0x30665121
- (id)contentsAtPath:(id)path;	// 0x3063e3b5
- (BOOL)contentsEqualAtPath:(id)path andPath:(id)path2;	// 0x30664d95
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x3062768d
- (id)contentsOfDirectoryAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options error:(id *)error;	// 0x30663f15
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x30665601
- (BOOL)copyItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x30665721
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x30664d21
- (BOOL)createDirectoryAtPath:(id)path withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x306016f1
- (BOOL)createDirectoryAtURL:(id)url withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x306664e5
- (BOOL)createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x3063dbe5
- (BOOL)createSymbolicLinkAtPath:(id)path pathContent:(id)content;	// 0x30664d71
- (BOOL)createSymbolicLinkAtPath:(id)path withDestinationPath:(id)destinationPath error:(id *)error;	// 0x306666d5
- (BOOL)createSymbolicLinkAtURL:(id)url withDestinationURL:(id)destinationURL error:(id *)error;	// 0x3066678d
- (id)currentDirectoryPath;	// 0x30664a9d
- (void)dealloc;	// 0x3061f705
// converted property getter: - (id)delegate;	// 0x30623425
- (id)destinationOfSymbolicLinkAtPath:(id)path error:(id *)error;	// 0x3063fbf5
- (BOOL)directoryCanBeCreatedAtPath:(id)path;	// 0x30664a39
- (id)directoryContentsAtPath:(id)path;	// 0x30664cd5
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4;	// 0x30664ca9
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4 error:(id *)error;	// 0x306276b9
- (id)displayNameAtPath:(id)path;	// 0x30664c41
- (id)enumeratorAtPath:(id)path;	// 0x3063faa9
- (id)enumeratorAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x30648079
- (BOOL)evictUbiquitousItemAtURL:(id)url error:(id *)error;	// 0x306670a9
- (id)extendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x30665159
- (id)extendedAttributesAtPath:(id)path error:(id *)error;	// 0x30665135
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x30664b25
- (BOOL)fileExistsAtPath:(id)path;	// 0x305fdc3d
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x306019dd
- (id)fileSystemAttributesAtPath:(id)path;	// 0x3066510d
- (const char *)fileSystemRepresentationWithPath:(id)path;	// 0x30601b8d
- (BOOL)filesystemItemCopyOperation:(id)operation shouldCopyItemAtPath:(id)path toPath:(id)path3;	// 0x306653e9
- (BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;	// 0x306654f1
- (BOOL)filesystemItemLinkOperation:(id)operation shouldLinkItemAtPath:(id)path toPath:(id)path3;	// 0x30665d51
- (BOOL)filesystemItemLinkOperation:(id)operation shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path4;	// 0x30665e59
- (BOOL)filesystemItemMoveOperation:(id)operation shouldMoveItemAtPath:(id)path toPath:(id)path3;	// 0x3066589d
- (BOOL)filesystemItemMoveOperation:(id)operation shouldProceedAfterError:(id)error movingItemAtPath:(id)path toPath:(id)path4;	// 0x306659a5
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldProceedAfterError:(id)error removingItemAtPath:(id)path;	// 0x30623821
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldRemoveItemAtPath:(id)path;	// 0x30623351
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length withPath:(id)path;	// 0x305fde49
- (BOOL)isDeletableFileAtPath:(id)path;	// 0x30664b75
- (BOOL)isExecutableFileAtPath:(id)path;	// 0x30664b65
- (BOOL)isReadableFileAtPath:(id)path;	// 0x3062bda9
- (BOOL)isUbiquitousItemAtURL:(id)url;	// 0x30666f0d
- (BOOL)isWritableFileAtPath:(id)path;	// 0x3061fac9
- (BOOL)linkItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x30665f69
- (BOOL)linkItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x30666089
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)keys options:(unsigned)options;	// 0x30663f11
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x30665ab5
- (BOOL)moveItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x30665bd5
- (id)pathContentOfSymbolicLinkAtPath:(id)path;	// 0x30664d5d
- (BOOL)removeExtendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x30665251
- (BOOL)removeFileAtPath:(id)path handler:(id)handler;	// 0x30664c91
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x30621dd1
- (BOOL)removeItemAtURL:(id)url error:(id *)error;	// 0x30666205
- (BOOL)replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x306668ed
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0x30646441
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x306653c1
- (BOOL)setExtendedAttribute:(id)attribute forKey:(id)key atPath:(id)path error:(id *)error;	// 0x306652dd
- (BOOL)setUbiquitous:(BOOL)ubiquitous itemAtURL:(id)url destinationURL:(id)url3 error:(id *)error;	// 0x30666ced
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)url error:(id *)error;	// 0x30666a11
- (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation length:(unsigned)length;	// 0x30601579
- (id)subpathsAtPath:(id)path;	// 0x30664cf9
- (id)subpathsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x306665a5
@end
