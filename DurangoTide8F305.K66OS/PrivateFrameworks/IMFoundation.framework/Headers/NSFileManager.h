/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSFileManager.h> // Unknown library


@interface NSFileManager (FezAdditions)
- (BOOL)_isPathOnMissingVolume:(id)volume;	// 0x31ad36a9
- (BOOL)_moveItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error asCopy:(BOOL)copy;	// 0x31ad3381
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error;	// 0x31ad32b1
- (id)createUniqueDirectoryWithName:(id)name atPath:(id)path ofType:(id)type;	// 0x31ad3475
- (BOOL)makeDirectoriesInPath:(id)path mode:(unsigned long)mode;	// 0x31ad35e1
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error;	// 0x31ad32e5
- (id)uniqueFilename:(id)filename atPath:(id)path ofType:(id)type;	// 0x31ad3535
@end

