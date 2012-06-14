/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIRuntimeConnection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {
@private
	NSString *runtimeCollectionClassName;	// 16 = 0x10
	BOOL addsContentToExistingCollection;	// 20 = 0x14
}
@property(assign) BOOL addsContentToExistingCollection;	// G=0x303c5a01; S=0x303c5a19; @synthesize
@property(copy) NSString *runtimeCollectionClassName;	// G=0x303c59dd; S=0x303c59f1; @synthesize
- (id)initWithCoder:(id)coder;	// 0x303c5479
// declared property getter: - (BOOL)addsContentToExistingCollection;	// 0x303c5a01
- (void)connect;	// 0x303c5865
- (void)connectForSimulator;	// 0x303c5875
- (void)dealloc;	// 0x303c559d
- (id)description;	// 0x303c5949
- (void)encodeWithCoder:(id)coder;	// 0x303c5515
- (void)performConnect;	// 0x303c55e9
// declared property getter: - (id)runtimeCollectionClassName;	// 0x303c59dd
// declared property setter: - (void)setAddsContentToExistingCollection:(BOOL)existingCollection;	// 0x303c5a19
// declared property setter: - (void)setRuntimeCollectionClassName:(id)name;	// 0x303c59f1
@end

