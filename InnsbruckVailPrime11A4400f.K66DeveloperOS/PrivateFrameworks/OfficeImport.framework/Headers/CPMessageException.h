/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <Foundation/NSException.h>

@class CPMessageEntry;

__attribute__((objc_exception))
@interface CPMessageException : NSException {
	CPMessageEntry *m_entry;	// 20 = 0x14
}
+ (id)exceptionWithMessage:(CPTaggedMessageStructure *)message;	// 0x318b698d
+ (id)exceptionWithUntaggedMessage:(id)untaggedMessage;	// 0x318b6a2d
+ (void)initialize;	// 0x316a6f59
+ (id)nsError:(id)error domain:(id)domain;	// 0x318b6be5
+ (void)raise:(CPTaggedMessageStructure *)raise;	// 0x31752261
+ (void)raiseUntaggedMessage:(id)message;	// 0x318b6ae9
- (id)initWithMessage:(CPTaggedMessageStructure *)message;	// 0x318b6851
- (id)initWithUntaggedMessage:(id)untaggedMessage;	// 0x318b68e9
- (void)dealloc;	// 0x31759959
- (id)description;	// 0x318b6b95
- (id)getEntry;	// 0x318b6ad9
@end

