/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "MobileBackup-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface MBBackup : NSObject <NSCopying, NSCoding> {
	NSString *_backupUDID;	// 4 = 0x4
	NSString *_deviceClass;	// 8 = 0x8
	NSString *_productType;	// 12 = 0xc
	NSString *_hardwareModel;	// 16 = 0x10
	NSString *_marketingName;	// 20 = 0x14
	NSArray *_snapshots;	// 24 = 0x18
	BOOL _restoreSystemFiles;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *backupUDID;	// G=0x315ac001; @synthesize=_backupUDID
@property(readonly, assign, nonatomic) NSString *deviceClass;	// G=0x315ac011; @synthesize=_deviceClass
@property(readonly, assign, nonatomic) NSString *hardwareModel;	// G=0x315ac031; @synthesize=_hardwareModel
@property(readonly, assign, nonatomic) NSString *marketingName;	// G=0x315ac041; @synthesize=_marketingName
@property(readonly, assign, nonatomic) NSString *productType;	// G=0x315ac021; @synthesize=_productType
@property(readonly, assign, nonatomic, getter=canRestoreSystemFiles) BOOL restoreSystemFiles;	// G=0x315ac061; @synthesize=_restoreSystemFiles
@property(readonly, assign, nonatomic) NSArray *snapshots;	// G=0x315ac051; @synthesize=_snapshots
- (id)initWithBackupUDID:(id)backupUDID deviceClass:(id)aClass productType:(id)type hardwareModel:(id)model marketingName:(id)name snapshots:(id)snapshots restoreSystemFiles:(BOOL)files;	// 0x315aba01
- (id)initWithCoder:(id)coder;	// 0x315abaf5
// declared property getter: - (id)backupUDID;	// 0x315ac001
// declared property getter: - (BOOL)canRestoreSystemFiles;	// 0x315ac061
- (id)copyWithZone:(NSZone *)zone;	// 0x315abe2d
- (void)dealloc;	// 0x315abd79
- (id)description;	// 0x315abf25
// declared property getter: - (id)deviceClass;	// 0x315ac011
- (void)encodeWithCoder:(id)coder;	// 0x315abc61
// declared property getter: - (id)hardwareModel;	// 0x315ac031
- (BOOL)isEqual:(id)equal;	// 0x315abee9
// declared property getter: - (id)marketingName;	// 0x315ac041
// declared property getter: - (id)productType;	// 0x315ac021
// declared property getter: - (id)snapshots;	// 0x315ac051
@end

