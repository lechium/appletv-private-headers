/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSHTTPURLResponseInternal : NSObject <NSCoding> {
	SecTrust *peerTrust;	// 4 = 0x4
	BOOL isMixedReplace;	// 8 = 0x8
}
- (id)initWithCoder:(id)coder;	// 0x373d640d
- (void)dealloc;	// 0x37322145
- (void)encodeWithCoder:(id)coder;	// 0x373d6571
@end

