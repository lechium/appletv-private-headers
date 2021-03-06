/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface BRFileManager : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x394ee5
+ (id)singleton;	// 0x394ed5
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x395261
- (id)cachePath;	// 0x3953e5
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x394f75
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x395311
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes error:(id *)error;	// 0x394ef5
- (BOOL)fileExistsAtPath:(id)path;	// 0x39529d
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x3952d5
- (id)modDateOfFileAtPath:(id)path error:(id *)error;	// 0x395399
- (id)mostRecentModDateInDirectoryAtPath:(id)path error:(id *)error;	// 0x3950f1
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x395355
- (unsigned long long)onDiskFileSizeOfFileAtPath:(id)path status:(int *)status;	// 0x395611
- (id)ourApplicationSupportPath;	// 0x395569
- (id)preferencesPath;	// 0x3954c1
- (BOOL)removeContentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x394fb1
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x394f39
- (id)videoCachePath;	// 0x39548d
@end

