/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSMutableArray, NSArray, BRMainMenuControl, BRBackgroundTask;
@protocol BRAppliance;

@interface BRMainMenuController : BRController {
@private
	NSArray *_applianceInfos;	// 80 = 0x50
	NSMutableArray *_topShelfControllers;	// 84 = 0x54
	BRMainMenuControl *_browser;	// 88 = 0x58
	BOOL _enabled;	// 92 = 0x5c
	BOOL _handlingMainMenuEvent;	// 93 = 0x5d
	BRBackgroundTask *_topShelfRefreshTask;	// 96 = 0x60
}
@property(readonly, assign) id<BRAppliance> currentAppliance;	// G=0x33a57515; 
+ (BOOL)handlingMainMenuEvent;	// 0x33a57075
+ (void)highlightApplianceWithKey:(id)key andCategoryWithIdentifier:(id)identifier;	// 0x33a56fe5
+ (void)setHandlingMainMenuEvent:(BOOL)event;	// 0x33a570f1
- (id)init;	// 0x33a57175
- (BOOL)_browserItemSelected:(id)selected;	// 0x33a57a8d
- (BOOL)_handlingMainMenuEvent;	// 0x33a57b71
- (void)_highlightApplianceWithKey:(id)key andCategoryWithIdentifier:(id)identifier;	// 0x33a57a6d
- (void)_loadAppliances;	// 0x33a57909
- (void)_reloadTopShelvesByRecreating:(BOOL)recreating;	// 0x33a57c15
- (void)_setHandlingMainMenuEvent:(BOOL)event;	// 0x33a57b81
- (void)_shelfNoLongerFocusable:(id)focusable;	// 0x33a57b91
- (void)_topShelfControllerWillBeHidden:(id)_topShelfController;	// 0x33a57e95
- (void)_topShelfControllerWillBeShown:(id)_topShelfController;	// 0x33a57e5d
- (id)accessibilityLabel;	// 0x33a57535
- (BOOL)canBeRemovedFromStack;	// 0x33a57389
- (void)clearRemembery;	// 0x33a574f5
- (void)controlWasActivated;	// 0x33a577c5
- (void)controlWasDeactivated;	// 0x33a57885
// declared property getter: - (id)currentAppliance;	// 0x33a57515
- (void)dealloc;	// 0x33a572b1
- (void)enable;	// 0x33a5738d
- (void)mainMenu:(id)menu didSelectCategoryAtIndexPath:(id)indexPath;	// 0x33a575dd
- (id)mainMenu:(id)menu shelfForApplianceAtIndex:(unsigned)index;	// 0x33a5755d
- (void)mainMenu:(id)menu willHideShelfAtApplianceIndex:(long)applianceIndex;	// 0x33a57745
- (void)mainMenu:(id)menu willShowShelfAtApplianceIndex:(long)applianceIndex;	// 0x33a57785
- (void)reloadMainMenu;	// 0x33a573a1
@end
