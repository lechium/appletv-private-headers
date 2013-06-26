/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import </libobjc.A.h>
#import "iWorkImport-Structs.h"

@class NSMutableDictionary, NSString;
@protocol GQZArchiveInputStream;

@interface GQZArchive : NSObject {
	NSMutableDictionary *mEntries;	// 4 = 0x4
	id<GQZArchiveInputStream> mInput;	// 8 = 0x8
	BOOL mIsEncrypted;	// 12 = 0xc
	NSString *mFilename;	// 16 = 0x10
}
- (id)initWithData:(id)data collapseCommonRootDirectory:(BOOL)directory;	// 0x33cebb29
- (id)initWithPath:(id)path collapseCommonRootDirectory:(BOOL)directory;	// 0x33ceb959
- (void)collapseCommonRootDirectory;	// 0x33cec0f1
- (void)dealloc;	// 0x33cebcbd
- (id)entryNames;	// 0x33cebd55
- (id)entryWithName:(id)name;	// 0x33cebd35
- (id)filename;	// 0x33cebd85
- (BOOL)isEncrypted;	// 0x33cebd75
- (GQZEndOfCentralDirectory)readEndOfCentralDirectory;	// 0x33cec39d
- (void)readEntries;	// 0x33cebd95
- (void)readExtraFieldFromBuffer:(const char *)buffer size:(unsigned long)size entry:(id)entry;	// 0x33cec9b5
- (id)readFilenameFromBuffer:(const char *)buffer size:(unsigned long)size;	// 0x33cec8e9
- (GQZEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromOffset:(long long)offset;	// 0x33cec7a9
- (GQZEndOfCentralDirectory)readZip64EndOfCentralDirectoryWithEocdOffset:(long long)eocdOffset;	// 0x33cec631
- (const char *)searchForEndOfCentralDirectoryOffset:(long long *)centralDirectoryOffset;	// 0x33cec4ed
@end
