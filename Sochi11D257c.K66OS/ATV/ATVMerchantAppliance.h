/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAppliance.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRApplianceInfo;

__attribute__((visibility("hidden")))
@interface ATVMerchantAppliance : XXUnknownSuperclass <BRAppliance> {
	BRApplianceInfo *_applianceInfo;	// 4 = 0x4
}
@property(readonly, assign) BRApplianceInfo *applianceInfo;	// G=0x1a024d; 
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x1a01ed
- (void).cxx_destruct;	// 0x1a03d1
- (id)applianceCategories;	// 0x1a0261
- (id)applianceController;	// 0x1a0339
// declared property getter: - (id)applianceInfo;	// 0x1a024d
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x1a0285
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x1a03cd
- (id)identifierForContentAlias:(id)contentAlias;	// 0x1a0281
- (void)invalidateCategories;	// 0x1a027d
- (id)topShelfController;	// 0x1a0289
@end

