/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVBindingInfo.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface _ATVBindingAdaptorBindingInfo : ATVBindingInfo {
	objc_method *_instanceMethodForUpdate;	// 16 = 0x10
}
@property(assign) objc_method *instanceMethodForUpdate;	// G=0x233c09; S=0x233c1d; @synthesize=_instanceMethodForUpdate
- (id)initWithObservedObject:(id)observedObject observedKeyPath:(id)path bindingOptions:(id)options instanceMethodForUpdate:(objc_method *)update;	// 0x233b15
- (id)description;	// 0x233b5d
// declared property getter: - (objc_method *)instanceMethodForUpdate;	// 0x233c09
// declared property setter: - (void)setInstanceMethodForUpdate:(objc_method *)update;	// 0x233c1d
@end

