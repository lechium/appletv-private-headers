/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class NSArray;

@interface CAWindowServer : NSObject {
	CAWindowServerImpl *_impl;	// 4 = 0x4
}
@property(readonly, assign) NSArray *displays;	// G=0x3650e881; 
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;	// G=0x365d7a61; S=0x365d79fd; 
@property(assign) unsigned rendererFlags;	// G=0x365d7b11; S=0x365d7aa9; 
+ (id)context;	// 0x365d74c9
+ (id)contextWithOptions:(id)options;	// 0x365d74dd
+ (id)server;	// 0x365d7559
+ (id)serverIfRunning;	// 0x3650e871
- (id)init;	// 0x365d7689
- (void)_detectDisplays;	// 0x365d78a5
- (id)_init;	// 0x365d76a1
- (void)addDisplay:(id)display;	// 0x365d7709
- (void)dealloc;	// 0x365d79a9
- (id)description;	// 0x365d7b25
- (id)displayWithName:(id)name;	// 0x365d7821
// declared property getter: - (id)displays;	// 0x3650e881
// declared property getter: - (BOOL)isMirroringEnabled;	// 0x365d7a61
- (void)removeAllDisplays;	// 0x365d77cd
- (void)removeDisplay:(id)display;	// 0x365d7765
// declared property getter: - (unsigned)rendererFlags;	// 0x365d7b11
// declared property setter: - (void)setMirroringEnabled:(BOOL)enabled;	// 0x365d79fd
// declared property setter: - (void)setRendererFlags:(unsigned)flags;	// 0x365d7aa9
@end

