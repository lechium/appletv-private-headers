/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library
#import "FactoryDiags-Structs.h"


@interface OSDHIDEventRef : NSObject {
	IOHIDEventRef _eventRef;	// 4 = 0x4
}
@property(readonly, assign) IOHIDEventRef hidEventRef;	// G=0x3511c0d5; @synthesize=_eventRef
+ (id)refWithIOHIDEventRef:(IOHIDEventRef)iohideventRef;	// 0x3511c08d
- (id)initWithIOHIDEventRef:(IOHIDEventRef)iohideventRef;	// 0x3511c04d
- (id)description;	// 0x3511bfdd
// declared property getter: - (IOHIDEventRef)hidEventRef;	// 0x3511c0d5
@end
