/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "NSSecureCoding.h"
#import </libobjc.A.h>


@interface TIKeyEventMap : NSObject <NSSecureCoding> {
}
+ (BOOL)supportsSecureCoding;	// 0x32a0c6dd
- (id)initWithCoder:(id)coder;	// 0x32a0c6e1
- (void)encodeWithCoder:(id)coder;	// 0x32a0c70d
- (id)remapKeyWithString:(id)string stringWithoutModifiers:(id)modifiers modifierFlags:(unsigned)flags keyboardState:(id)state;	// 0x32a0c711
@end

