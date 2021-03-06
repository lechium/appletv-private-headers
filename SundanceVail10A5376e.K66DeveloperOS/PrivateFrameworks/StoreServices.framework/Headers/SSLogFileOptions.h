/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying> {
	NSString *_directoryPath;	// 4 = 0x4
	NSString *_fileName;	// 8 = 0x8
	int _maxNumberOfLogFiles;	// 12 = 0xc
	unsigned long _maxSizeInBytes;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *logDirectoryPath;	// G=0x32cadff5; S=0x32cae009; @synthesize=_directoryPath
@property(copy, nonatomic) NSString *logFileBaseName;	// G=0x32cae019; S=0x32cae02d; @synthesize=_fileName
@property(assign, nonatomic) unsigned long maxLogFileSize;	// G=0x32cae03d; S=0x32cae04d; @synthesize=_maxSizeInBytes
@property(assign, nonatomic) int maxNumberOfLogFiles;	// G=0x32cae05d; S=0x32cae06d; @synthesize=_maxNumberOfLogFiles
- (id)init;	// 0x32cade91
- (id)copyWithZone:(NSZone *)zone;	// 0x32cadf45
- (void)dealloc;	// 0x32cadee1
// declared property getter: - (id)logDirectoryPath;	// 0x32cadff5
// declared property getter: - (id)logFileBaseName;	// 0x32cae019
// declared property getter: - (unsigned long)maxLogFileSize;	// 0x32cae03d
// declared property getter: - (int)maxNumberOfLogFiles;	// 0x32cae05d
// declared property setter: - (void)setLogDirectoryPath:(id)path;	// 0x32cae009
// declared property setter: - (void)setLogFileBaseName:(id)name;	// 0x32cae02d
// declared property setter: - (void)setMaxLogFileSize:(unsigned long)size;	// 0x32cae04d
// declared property setter: - (void)setMaxNumberOfLogFiles:(int)logFiles;	// 0x32cae06d
@end

