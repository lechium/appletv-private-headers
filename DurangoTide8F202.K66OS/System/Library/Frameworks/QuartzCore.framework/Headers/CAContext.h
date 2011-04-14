/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class CALayer;

@interface CAContext : NSObject {
}
@property(assign) CGColorSpaceRef colorSpace;	// @dynamic
@property(readonly, assign) unsigned contextId;	// @dynamic
@property(retain) CALayer *layer;	// @dynamic
@property(assign) float level;	// @dynamic
@property(readonly, assign) BOOL valid;	// @dynamic
+ (id)allContexts;	// 0x3028ac81
+ (id)currentContext;	// 0x3028ac9d
+ (id)localContext;	// 0x3028ac69
+ (id)localContextWithOptions:(id)options;	// 0x3028ac29
+ (id)objectForSlot:(unsigned)slot;	// 0x3028abd1
+ (id)remoteContext;	// 0x3028ac11
+ (id)remoteContextWithOptions:(id)options;	// 0x30227799
+ (void)setClientPort:(unsigned)port;	// 0x30227789
- (unsigned)createSlot;	// 0x3028ab69
- (void)deleteSlot:(unsigned)slot;	// 0x3028ab6d
- (void)invalidate;	// 0x3028ab59
- (void)orderAbove:(unsigned)above;	// 0x3028ab5d
- (void)orderBelow:(unsigned)below;	// 0x3028ab61
- (void)setFence:(unsigned)fence count:(unsigned)count;	// 0x3028ab65
- (void)setObject:(id)object forSlot:(unsigned)slot;	// 0x3028ab71
@end

