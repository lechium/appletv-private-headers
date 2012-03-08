/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRAppliance.h"

@class BRApplianceInfo, NSArray;

@interface BRBaseAppliance : NSObject <BRAppliance> {
@private
	NSArray *_categories;	// 4 = 0x4
	BRApplianceInfo *_applianceInfo;	// 8 = 0x8
}
@property(retain) BRApplianceInfo *applianceInfo;	// G=0x30246b61; S=0x30246b75; @synthesize=_applianceInfo
- (id)init;	// 0x30246325
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x30246329
- (BOOL)_anySharesAvailable;	// 0x302472b1
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x30247345
- (id)_applianceCategories;	// 0x30246c6d
- (BOOL)_isCategoryWithIdentifier:(id)identifier memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x30247225
- (id)accessibilityLabel;	// 0x30246b29
- (id)alertControllerForNoContent;	// 0x30246a55
- (id)alertControllerForNoRemoteContent;	// 0x30246ab5
- (id)applianceCategories;	// 0x30246789
- (id)applianceCategoryDescriptions;	// 0x30246b99
- (id)applianceController;	// 0x302468cd
// declared property getter: - (id)applianceInfo;	// 0x30246b61
- (id)baseMediaType;	// 0x30246655
- (id)categoryWithIdentifier:(id)identifier;	// 0x302469bd
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x302468c9
- (void)dealloc;	// 0x3024647d
- (id)description;	// 0x302465d5
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x302468d1
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x302468d5
- (unsigned)hash;	// 0x30246589
- (id)identifierForContentAlias:(id)contentAlias;	// 0x302468c5
- (BOOL)isEqual:(id)equal;	// 0x30246511
- (id)loadCategories;	// 0x30246bc1
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x302468d9
- (int)noContentBRError;	// 0x30246aad
- (int)noRemoteContentBRError;	// 0x30246b0d
- (BOOL)previewError;	// 0x30246b15
- (id)previewErrorIconImage;	// 0x30246b21
- (id)previewErrorSubtext;	// 0x30246b1d
- (id)previewErrorText;	// 0x30246b19
- (void)reloadCategories;	// 0x30246bd1
// declared property setter: - (void)setApplianceInfo:(id)info;	// 0x30246b75
- (id)topShelfController;	// 0x30246b25
@end

