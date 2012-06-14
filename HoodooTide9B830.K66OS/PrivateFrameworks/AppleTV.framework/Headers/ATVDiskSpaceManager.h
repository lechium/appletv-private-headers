/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVDiskSpaceManager : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x32895e45
+ (id)singleton;	// 0x32895e35
- (id)init;	// 0x32895e55
- (id)_volumeSizeStringForSize:(unsigned long long)size;	// 0x328960c5
- (void)dealloc;	// 0x32895e81
- (unsigned long long)mediaCapacity;	// 0x32895f55
- (id)mediaCapacityString;	// 0x32895fd9
- (unsigned long long)mediaFreeSpace;	// 0x3289600d
- (id)mediaFreeSpaceString;	// 0x32896091
- (unsigned long long)primaryStreamedMediaRepositorySize;	// 0x32895ead
- (unsigned long long)primaryStreamedMediaRespositoryMaxFileSize;	// 0x32895f1d
- (unsigned long long)shortContentStreamedMediaRepositorySize;	// 0x32895f3d
- (unsigned long long)shortContentStreamedMediaRespositoryMaxFileSize;	// 0x32895f45
@end
