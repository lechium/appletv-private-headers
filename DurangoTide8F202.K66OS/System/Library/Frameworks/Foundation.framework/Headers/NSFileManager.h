/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSFileManager : NSObject {
}
@property(assign) id delegate;	// G=0x324402c5; S=0x32467645; converted property
+ (id)defaultManager;	// 0x32417a45
- (id)URLForDirectory:(unsigned)directory inDomain:(unsigned)domain appropriateForURL:(id)url create:(BOOL)create error:(id *)error;	// 0x32468861
- (id)URLsForDirectory:(unsigned)directory inDomains:(unsigned)domains;	// 0x324689fd
- (id)_URLForReplacingItemAtURL:(id)url error:(id *)error;	// 0x32468b15
- (id)_attributesOfItemAtPath:(id)path filterResourceFork:(BOOL)fork error:(id *)error;	// 0x3246702d
- (id)_attributesOfItemAtURL:(id)url filterResourceFork:(BOOL)fork error:(id *)error;	// 0x32466ffd
- (id)_displayPathForPath:(id)path;	// 0x3246b171
- (id)_info;	// 0x324402e5
- (void)_performRemoveFileAtPath:(id)path;	// 0x324afd89
- (BOOL)_replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x3246a581
- (void)_web_backgroundRemoveFileAtPath:(id)path;	// 0x324afdc9
- (void)_web_backgroundRemoveLeftoverFiles:(id)files;	// 0x324afc0d
- (id)_web_carbonPathForPath_nowarn:(id)path_nowarn;	// 0x324af8c5
- (BOOL)_web_changeFileAttributes_nowarn:(id)nowarn atPath:(id)path;	// 0x324af8cd
- (BOOL)_web_changeFinderAttributes:(id)attributes forFileAtPath:(id)path;	// 0x324af8c1
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)intermediateDirectories attributes:(id)attributes;	// 0x3243cf15
- (BOOL)_web_createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x324afcd5
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)intermediateDirectories contents:(id)contents attributes:(id)attributes directoryAttributes:(id)attributes4;	// 0x324afd15
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)path_nowarn attributes:(id)attributes;	// 0x324af915
- (BOOL)_web_fileExistsAtPath_nowarn:(id)path_nowarn isDirectory:(BOOL *)directory traverseLink:(BOOL)link;	// 0x324afb91
- (void)_web_noteFileChangedAtPath_nowarn:(id)path_nowarn;	// 0x324af8c9
- (id)_web_pathWithUniqueFilenameForPath:(id)path;	// 0x324afeb5
- (BOOL)_web_removeFileOnlyAtPath:(id)path;	// 0x3243d771
- (id)_web_startupVolumeName_nowarn;	// 0x324afb51
- (id)_web_visibleItemsInDirectoryAtPath:(id)path;	// 0x324afbf9
- (id)attributesOfFileSystemForPath:(id)path error:(id *)error;	// 0x3243cd61
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x324217c1
- (BOOL)changeCurrentDirectoryPath:(id)path;	// 0x32468eb5
- (BOOL)changeFileAttributes:(id)attributes atPath:(id)path;	// 0x32467725
- (id)componentsToDisplayForPath:(id)path;	// 0x32466f3d
- (id)contentsAtPath:(id)path;	// 0x3244da99
- (BOOL)contentsEqualAtPath:(id)path andPath:(id)path2;	// 0x3246b5f9
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x3243cfa5
- (id)contentsOfDirectoryAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options error:(id *)error;	// 0x3246b999
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x32469a3d
- (BOOL)copyItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x3246988d
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x32468fad
- (BOOL)createDirectoryAtPath:(id)path withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x3241e969
- (BOOL)createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x3244d369
- (BOOL)createSymbolicLinkAtPath:(id)path pathContent:(id)content;	// 0x32467681
- (BOOL)createSymbolicLinkAtPath:(id)path withDestinationPath:(id)destinationPath error:(id *)error;	// 0x3246a3e5
- (id)currentDirectoryPath;	// 0x32468e75
- (void)dealloc;	// 0x32422175
// converted property getter: - (id)delegate;	// 0x324402c5
- (id)destinationOfSymbolicLinkAtPath:(id)path error:(id *)error;	// 0x3244fa89
- (BOOL)directoryCanBeCreatedAtPath:(id)path;	// 0x32468e19
- (id)directoryContentsAtPath:(id)path;	// 0x3244ab21
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4;	// 0x3244ab49
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4 error:(id *)error;	// 0x3243cfd1
- (id)displayNameAtPath:(id)path;	// 0x324676e1
- (id)enumeratorAtPath:(id)path;	// 0x3244f91d
- (id)enumeratorAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x324687bd
- (id)extendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x32468399
- (id)extendedAttributesAtPath:(id)path error:(id *)error;	// 0x324683d1
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x32467749
- (BOOL)fileExistsAtPath:(id)path;	// 0x3241de51
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x3242f03d
- (id)fileSystemAttributesAtPath:(id)path;	// 0x32467669
- (const char *)fileSystemRepresentationWithPath:(id)path;	// 0x3241ec81
- (BOOL)filesystemItemCopyOperation:(id)operation shouldCopyItemAtPath:(id)path toPath:(id)path3;	// 0x3246754d
- (BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;	// 0x3246744d
- (BOOL)filesystemItemLinkOperation:(id)operation shouldLinkItemAtPath:(id)path toPath:(id)path3;	// 0x3246715d
- (BOOL)filesystemItemLinkOperation:(id)operation shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path4;	// 0x3246705d
- (BOOL)filesystemItemMoveOperation:(id)operation shouldMoveItemAtPath:(id)path toPath:(id)path3;	// 0x32467355
- (BOOL)filesystemItemMoveOperation:(id)operation shouldProceedAfterError:(id)error movingItemAtPath:(id)path toPath:(id)path4;	// 0x32467255
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldProceedAfterError:(id)error removingItemAtPath:(id)path;	// 0x324404b5
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldRemoveItemAtPath:(id)path;	// 0x324401fd
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length withPath:(id)path;	// 0x32417aa1
- (BOOL)isDeletableFileAtPath:(id)path;	// 0x32468ef5
- (BOOL)isExecutableFileAtPath:(id)path;	// 0x32468e09
- (BOOL)isReadableFileAtPath:(id)path;	// 0x3243e539
- (BOOL)isWritableFileAtPath:(id)path;	// 0x3243eeb9
- (BOOL)linkItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3246949d
- (BOOL)linkItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x324692ed
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)keys options:(unsigned)options;	// 0x32466f39
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3246976d
- (BOOL)moveItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x324695bd
- (id)pathContentOfSymbolicLinkAtPath:(id)path;	// 0x3244fa71
- (BOOL)removeExtendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x32468fdd
- (BOOL)removeFileAtPath:(id)path handler:(id)handler;	// 0x324676c9
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x3243ffad
- (BOOL)removeItemAtURL:(id)url error:(id *)error;	// 0x32468219
- (BOOL)replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x32468715
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0x32469be9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32467645
- (BOOL)setExtendedAttribute:(id)attribute forKey:(id)key atPath:(id)path error:(id *)error;	// 0x324690f1
- (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation length:(unsigned)length;	// 0x3241e875
- (id)subpathsAtPath:(id)path;	// 0x324676a5
- (id)subpathsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x32469225
@end

