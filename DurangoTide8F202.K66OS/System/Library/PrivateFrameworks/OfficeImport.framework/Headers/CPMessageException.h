/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSException.h> // Unknown library
#import "OfficeImport-Structs.h"

@class CPMessageEntry;

__attribute__((visibility("hidden"),objc_exception))
@interface CPMessageException : NSException {
@private
	CPMessageEntry *m_entry;	// 20 = 0x14
}
+ (id)exceptionWithMessage:(CPTaggedMessageStructure *)message;	// 0x31b65739
+ (id)exceptionWithUntaggedMessage:(id)untaggedMessage;	// 0x31b6569d
+ (void)initialize;	// 0x31a95219
+ (id)nsError:(id)error domain:(id)domain;	// 0x31b648c5
+ (void)raise:(CPTaggedMessageStructure *)raise;	// 0x319f2309
+ (void)raiseUntaggedMessage:(id)message;	// 0x31b65601
- (id)initWithMessage:(CPTaggedMessageStructure *)message;	// 0x31b65869
- (id)initWithUntaggedMessage:(id)untaggedMessage;	// 0x31b657dd
- (void)dealloc;	// 0x319f2629
- (id)description;	// 0x31b649bd
- (id)getEntry;	// 0x31b645c1
@end

