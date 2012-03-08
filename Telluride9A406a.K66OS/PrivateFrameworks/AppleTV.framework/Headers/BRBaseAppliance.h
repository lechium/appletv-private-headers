/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAppliance.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface BRBaseAppliance : NSObject <BRAppliance> {
@private
	NSArray *_categories;	// 4 = 0x4
}
- (id)init;	// 0x33026b81
- (BOOL)_anySharesAvailable;	// 0x33027985
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x33027a19
- (id)_applianceCategories;	// 0x33027335
- (BOOL)_isCategoryWithIdentifier:(id)identifier memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x330278f9
- (id)accessibilityLabel;	// 0x33027269
- (id)alertControllerForNoContent;	// 0x33027195
- (id)alertControllerForNoRemoteContent;	// 0x330271f5
- (id)applianceCategories;	// 0x33026f21
- (id)applianceCategoryDescriptions;	// 0x330272a1
- (id)applianceInfo;	// 0x33026ec9
- (id)baseMediaType;	// 0x33026db9
- (id)categoryWithIdentifier:(id)identifier;	// 0x330270fd
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x3302700d
- (void)dealloc;	// 0x33026cbd
- (id)description;	// 0x33026d39
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x33027011
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x33027015
- (id)identifierForContentAlias:(id)contentAlias;	// 0x33027009
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x33027019
- (int)noContentBRError;	// 0x330271ed
- (int)noRemoteContentBRError;	// 0x3302724d
- (BOOL)previewError;	// 0x33027255
- (id)previewErrorIconImage;	// 0x33027261
- (id)previewErrorSubtext;	// 0x3302725d
- (id)previewErrorText;	// 0x33027259
- (void)reloadCategories;	// 0x330272c9
- (id)topShelfController;	// 0x33027265
@end

