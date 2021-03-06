/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library


@interface MBFileManager : NSObject {
}
+ (id)defaultManager;	// 0x315aa179
- (BOOL)copyPath:(id)path toPath:(id)path2;	// 0x315aa231
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x315aa331
- (id)directoryContentsAtPath:(id)path;	// 0x315aa2b9
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x315aa2f5
- (BOOL)fileExistsAtPath:(id)path;	// 0x315aa1c1
- (BOOL)movePath:(id)path toPath:(id)path2;	// 0x315aa275
- (BOOL)removeFileAtPath:(id)path;	// 0x315aa1f9
@end

