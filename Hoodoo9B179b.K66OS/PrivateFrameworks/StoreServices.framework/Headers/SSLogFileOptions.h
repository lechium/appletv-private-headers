/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSCopying.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying> {
	NSString *_directoryPath;	// 4 = 0x4
	NSString *_fileName;	// 8 = 0x8
	int _maxNumberOfLogFiles;	// 12 = 0xc
	unsigned long _maxSizeInBytes;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *logDirectoryPath;	// G=0x33c8016d; S=0x33c8017d; @synthesize=_directoryPath
@property(copy, nonatomic) NSString *logFileBaseName;	// G=0x33c801a1; S=0x33c801b1; @synthesize=_fileName
@property(assign, nonatomic) unsigned long maxLogFileSize;	// G=0x33c801d5; S=0x33c801e5; @synthesize=_maxSizeInBytes
@property(assign, nonatomic) int maxNumberOfLogFiles;	// G=0x33c801f5; S=0x33c80205; @synthesize=_maxNumberOfLogFiles
- (id)init;	// 0x33c80009
- (id)copyWithZone:(NSZone *)zone;	// 0x33c800b9
- (void)dealloc;	// 0x33c80059
// declared property getter: - (id)logDirectoryPath;	// 0x33c8016d
// declared property getter: - (id)logFileBaseName;	// 0x33c801a1
// declared property getter: - (unsigned long)maxLogFileSize;	// 0x33c801d5
// declared property getter: - (int)maxNumberOfLogFiles;	// 0x33c801f5
// declared property setter: - (void)setLogDirectoryPath:(id)path;	// 0x33c8017d
// declared property setter: - (void)setLogFileBaseName:(id)name;	// 0x33c801b1
// declared property setter: - (void)setMaxLogFileSize:(unsigned long)size;	// 0x33c801e5
// declared property setter: - (void)setMaxNumberOfLogFiles:(int)logFiles;	// 0x33c80205
@end
