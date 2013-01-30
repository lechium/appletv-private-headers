/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MOVAppliance.h"

@class NSArray, ATVRentedMediaProvider;

__attribute__((visibility("hidden")))
@interface ATVMoviesAppliance : MOVAppliance {
	ATVRentedMediaProvider *_rentals;	// 12 = 0xc
	NSArray *_existingCategories;	// 16 = 0x10
}
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x90725
- (void).cxx_destruct;	// 0x90e79
- (void)_rentalsUpdated:(id)updated;	// 0x90c21
- (id)applianceSpecificControllerForIdentifier:(id)identifier args:(id)args;	// 0x90afd
- (void)dealloc;	// 0x90835
- (id)loadCategories;	// 0x908a1
- (id)topShelfController;	// 0x90ac5
@end
