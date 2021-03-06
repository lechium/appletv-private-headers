/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import "MobileBackup-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSDate, NSString;

@interface MBApp : NSObject <NSCopying> {
	NSMutableDictionary *_plist;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *bundleID;	// G=0x30594f91; 
@property(readonly, assign, nonatomic) NSString *bundleVersion;	// G=0x30594fbd; 
@property(retain, nonatomic) NSString *containerDir;	// G=0x30594fe9; S=0x30595011; 
@property(retain, nonatomic) NSDate *datePlacedInSafeHarbor;	// G=0x305950f1; S=0x30595119; 
@property(readonly, assign, nonatomic) NSDictionary *infoPlist;	// G=0x30595d01; @synthesize=_plist
@property(readonly, assign, nonatomic) BOOL isPlaceholder;	// G=0x3059516d; 
@property(readonly, assign, nonatomic) BOOL isSystemApp;	// G=0x305951a1; 
@property(readonly, assign, nonatomic, getter=isSafeHarbor) BOOL safeHarbor;	// G=0x30595141; 
@property(readonly, assign, nonatomic) NSString *safeHarborDir;	// G=0x30595039; 
+ (id)appWithBundleID:(id)bundleID;	// 0x30594cb5
+ (id)appWithPropertyList:(id)propertyList;	// 0x30594d05
+ (id)safeHarborWithPath:(id)path;	// 0x30594d4d
- (id)initWithPropertyList:(id)propertyList;	// 0x30594dd1
- (id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)cache;	// 0x3059544d
// declared property getter: - (id)bundleID;	// 0x30594f91
// declared property getter: - (id)bundleVersion;	// 0x30594fbd
// declared property getter: - (id)containerDir;	// 0x30594fe9
- (id)copyWithZone:(NSZone *)zone;	// 0x30594e25
// declared property getter: - (id)datePlacedInSafeHarbor;	// 0x305950f1
- (void)dealloc;	// 0x30594e8d
- (id)domain;	// 0x30595341
- (unsigned)hash;	// 0x30594f69
// declared property getter: - (id)infoPlist;	// 0x30595d01
- (BOOL)isEqual:(id)equal;	// 0x30594ed9
- (BOOL)isEqualToApp:(id)app;	// 0x30594f31
// declared property getter: - (BOOL)isPlaceholder;	// 0x3059516d
// declared property getter: - (BOOL)isSafeHarbor;	// 0x30595141
// declared property getter: - (BOOL)isSystemApp;	// 0x305951a1
- (id)placeholderDomainWithCache:(id)cache;	// 0x30595c65
- (id)propertyListForBackupProperties;	// 0x30595215
- (id)propertyListForSafeHarborInfo;	// 0x3059515d
// declared property getter: - (id)safeHarborDir;	// 0x30595039
// declared property setter: - (void)setContainerDir:(id)dir;	// 0x30595011
// declared property setter: - (void)setDatePlacedInSafeHarbor:(id)safeHarbor;	// 0x30595119
@end

