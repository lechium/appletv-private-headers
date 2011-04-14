/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSMutableArray;

@interface BRApplianceManager : BRSingleton {
@private
	NSMutableArray *_applianceList;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x328a24a5
+ (void)showMainMenu;	// 0x3293ed2d
+ (id)singleton;	// 0x328a2499
- (id)init;	// 0x3293e699
- (id)_applianceForInfo:(id)info;	// 0x328a7585
- (id)_controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x3293e875
- (BOOL)_handlePlay:(id)play userInfo:(id)info;	// 0x3293e70d
- (void)_loadApplianceAtPath:(id)path;	// 0x328a2649
- (void)_loadAppliancesInFolder:(id)folder;	// 0x328a2509
- (void)_unloadCurrentAppliances;	// 0x3293e6e5
- (id)applianceForInfo:(id)info;	// 0x328a7571
- (id)applianceInfoList;	// 0x328a6905
- (id)controllerForApplianceInfo:(id)applianceInfo identifier:(id)identifier args:(id)args;	// 0x3293ec95
- (id)controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x3293ed7d
- (id)controllerForContentAlias:(id)contentAlias;	// 0x3293ec05
- (void)dealloc;	// 0x3293ecbd
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x3293eb81
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x3293eafd
- (void)loadAppliances;	// 0x328a24b1
@end

