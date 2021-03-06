/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreBaseAppliance.h"


__attribute__((visibility("hidden")))
@interface MOVAppliance : ATVMusicStoreBaseAppliance {
	BOOL _wishlistCategoryEnabled;	// 8 = 0x8
}
+ (void)initialize;	// 0x8dc49
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x8dd65
- (void)_favoritesUpdated:(id)updated;	// 0x8e559
- (id)applianceController;	// 0x8e159
- (id)applianceSpecificControllerForIdentifier:(id)identifier args:(id)args;	// 0x8e2dd
- (void)dealloc;	// 0x8de35
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x8e1a5
- (id)loadCategories;	// 0x8decd
- (id)localizedSearchTitle;	// 0x8e4d9
- (int)noContentBRError;	// 0x8e549
- (int)noRemoteContentBRError;	// 0x8e551
- (BOOL)supportsPurchase;	// 0x8dec5
- (BOOL)supportsRental;	// 0x8dec9
- (id)topShelfController;	// 0x8e121
@end

