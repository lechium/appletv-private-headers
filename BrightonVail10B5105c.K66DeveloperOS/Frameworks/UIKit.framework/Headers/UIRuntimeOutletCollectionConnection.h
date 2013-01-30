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
	NSString *runtimeCollectionClassName;	// 16 = 0x10
	BOOL addsContentToExistingCollection;	// 20 = 0x14
}
@property(assign) BOOL addsContentToExistingCollection;	// G=0x348a2e69; S=0x348a2e81; @synthesize
@property(copy) NSString *runtimeCollectionClassName;	// G=0x348a2e45; S=0x348a2e59; @synthesize
- (id)initWithCoder:(id)coder;	// 0x348a28e1
// declared property getter: - (BOOL)addsContentToExistingCollection;	// 0x348a2e69
- (void)connect;	// 0x348a2ccd
- (void)connectForSimulator;	// 0x348a2cdd
- (void)dealloc;	// 0x348a2a05
- (id)description;	// 0x348a2db1
- (void)encodeWithCoder:(id)coder;	// 0x348a297d
- (void)performConnect;	// 0x348a2a51
// declared property getter: - (id)runtimeCollectionClassName;	// 0x348a2e45
// declared property setter: - (void)setAddsContentToExistingCollection:(BOOL)existingCollection;	// 0x348a2e81
// declared property setter: - (void)setRuntimeCollectionClassName:(id)name;	// 0x348a2e59
@end
