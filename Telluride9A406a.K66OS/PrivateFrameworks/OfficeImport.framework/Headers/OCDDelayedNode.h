/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@protocol OCDDelayedNodeContext;

__attribute__((visibility("hidden")))
@interface OCDDelayedNode : NSObject {
@private
	id<OCDDelayedNodeContext> mDelayedContext;	// 4 = 0x4
	bool mLoaded;	// 8 = 0x8
}
@property(retain) id delayedContext;	// G=0x32ae6691; S=0x328da7ad; converted property
@property(assign, getter=isLoaded) bool loaded;	// G=0x328e5669; S=0x32914305; converted property
+ (void)disableDelayedLoading;	// 0x32ae6669
+ (void)enableDelayedLoading;	// 0x32ae667d
- (void)dealloc;	// 0x328ada4d
// converted property getter: - (id)delayedContext;	// 0x32ae6691
// converted property getter: - (bool)isLoaded;	// 0x328e5669
- (bool)load;	// 0x328b2399
// converted property setter: - (void)setDelayedContext:(id)context;	// 0x328da7ad
// converted property setter: - (void)setLoaded:(bool)loaded;	// 0x32914305
@end

