/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDBorder.h"


__attribute__((visibility("hidden")))
@interface EPBorder : EDBorder {
@private
	int mPrecedence;	// 20 = 0x14
}
+ (id)borderWithBorder:(id)border precedence:(int)precedence resources:(id)resources;	// 0x32a69bf5
- (id)iniWithBorder:(id)border precedence:(int)precedence resources:(id)resources;	// 0x32a17201
- (BOOL)isEqualToBorder:(id)border;	// 0x32a17a51
- (int)precedence;	// 0x32a17a41
@end

