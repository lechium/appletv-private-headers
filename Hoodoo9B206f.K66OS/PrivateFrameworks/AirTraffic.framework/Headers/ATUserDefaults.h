/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;

@interface ATUserDefaults : NSObject {
	NSMutableDictionary *_defaults;	// 4 = 0x4
}
@property(retain, nonatomic) NSDictionary *diskUsageInfo;	// G=0x34858935; S=0x348588d9; 
@property(assign, nonatomic) BOOL hasCompletedDataMigration;	// G=0x34857d05; S=0x34858875; 
+ (id)readOnlyDefaults;	// 0x34858ae5
- (id)init;	// 0x3485895d
- (void)_updateDefaults;	// 0x34857da9
- (id)allHosts;	// 0x3485884d
- (void)dealloc;	// 0x34858a99
// declared property getter: - (id)diskUsageInfo;	// 0x34858935
// declared property getter: - (BOOL)hasCompletedDataMigration;	// 0x34857d05
- (id)hostInfoForIdentifier:(id)identifier;	// 0x34858811
- (void)removeHost:(id)host;	// 0x348587b9
// declared property setter: - (void)setDiskUsageInfo:(id)info;	// 0x348588d9
// declared property setter: - (void)setHasCompletedDataMigration:(BOOL)migration;	// 0x34858875
- (void)updateHostInfo:(id)info;	// 0x3485813d
- (void)updateLastSyncWithHostLibrary:(id)hostLibrary;	// 0x348586d1
- (void)upgradeDefaults;	// 0x34857e71
@end
