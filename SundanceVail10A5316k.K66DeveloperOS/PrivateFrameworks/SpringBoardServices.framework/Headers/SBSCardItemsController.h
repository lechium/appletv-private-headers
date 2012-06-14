/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"
#import "SBSCardItemsControllerRemoteInterface.h"

@class NSString;
@protocol SBCardItemsControllerRemoteInterface;

@interface SBSCardItemsController : NSObject <XPCProxyTarget, SBSCardItemsControllerRemoteInterface> {
@private
	id<SBCardItemsControllerRemoteInterface> _remoteProxy;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
- (id)initWithIdentifier:(id)identifier;	// 0x34d13c19
- (void)addCardItems:(id)items;	// 0x34d13de1
- (void)clearAllCardItems;	// 0x34d13e71
- (void)dealloc;	// 0x34d13d3d
- (void)getCardItemsWithHandler:(id)handler;	// 0x34d13e9d
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x34d13d89
- (void)removeCardItems:(id)items;	// 0x34d13e11
- (void)setCardItems:(id)items;	// 0x34d13e41
@end
