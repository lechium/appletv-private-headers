/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface InstallableResourceRecord : XXUnknownSuperclass {
	NSString *name;	// 4 = 0x4
	NSString *version;	// 8 = 0x8
	NSString *path;	// 12 = 0xc
	NSDate *lastAccessed;	// 16 = 0x10
	unsigned long long totalBytes;	// 20 = 0x14
}
@property(retain, nonatomic) NSDate *lastAccessed;	// G=0x196f59; S=0x196f69; @synthesize
@property(copy, nonatomic) NSString *name;	// G=0x196eed; S=0x196f01; @synthesize
@property(copy, nonatomic) NSString *path;	// G=0x196f35; S=0x196f49; @synthesize
@property(assign, nonatomic) unsigned long long totalBytes;	// G=0x196f79; S=0x196f91; @synthesize
@property(copy, nonatomic) NSString *version;	// G=0x196f11; S=0x196f25; @synthesize
+ (id)resourceRecordFromResourcePath:(id)resourcePath;	// 0x196c35
+ (id)resourceRecordFromResourcePath:(id)resourcePath withVersion:(id)version withLastAccessed:(id)lastAccessed;	// 0x1968dd
- (void)dealloc;	// 0x196d05
// declared property getter: - (id)lastAccessed;	// 0x196f59
// declared property getter: - (id)name;	// 0x196eed
// declared property getter: - (id)path;	// 0x196f35
- (void)remove;	// 0x196e85
- (void)save;	// 0x196d91
// declared property setter: - (void)setLastAccessed:(id)accessed;	// 0x196f69
// declared property setter: - (void)setName:(id)name;	// 0x196f01
// declared property setter: - (void)setPath:(id)path;	// 0x196f49
// declared property setter: - (void)setTotalBytes:(unsigned long long)bytes;	// 0x196f91
// declared property setter: - (void)setVersion:(id)version;	// 0x196f25
// declared property getter: - (unsigned long long)totalBytes;	// 0x196f79
// declared property getter: - (id)version;	// 0x196f11
@end

