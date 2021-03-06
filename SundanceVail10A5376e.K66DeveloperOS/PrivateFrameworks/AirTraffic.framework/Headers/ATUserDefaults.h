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
@property(retain, nonatomic) NSDictionary *diskUsageInfo;	// G=0x33870db5; S=0x33870d59; 
@property(assign, nonatomic) BOOL hasCompletedDataMigration;	// G=0x33870475; S=0x33870cf5; 
+ (id)readOnlyDefaults;	// 0x33870f55
- (id)init;	// 0x33870ddd
- (void)_updateDefaults;	// 0x33870519
- (id)allHosts;	// 0x33870ccd
- (void)dealloc;	// 0x33870f09
// declared property getter: - (id)diskUsageInfo;	// 0x33870db5
// declared property getter: - (BOOL)hasCompletedDataMigration;	// 0x33870475
- (id)hostInfoForIdentifier:(id)identifier;	// 0x33870c91
- (void)removeHost:(id)host;	// 0x33870c39
// declared property setter: - (void)setDiskUsageInfo:(id)info;	// 0x33870d59
// declared property setter: - (void)setHasCompletedDataMigration:(BOOL)migration;	// 0x33870cf5
- (void)updateHostInfo:(id)info disabledAssetTypes:(id)types;	// 0x338705e5
- (void)updateLastSyncWithHostLibrary:(id)hostLibrary;	// 0x33870b51
@end

