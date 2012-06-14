/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageStore.h"

@class NSData;

@interface MFDataMessageStore : MessageStore {
	NSData *_data;	// 24 = 0x18
	Class _messageClass;	// 28 = 0x1c
}
- (id)initWithData:(id)data;	// 0x366b5899
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x366b5bb1
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;	// 0x366b5ba9
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;	// 0x366b5bad
- (id)account;	// 0x366b59fd
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x366b5ac9
- (void)dealloc;	// 0x366b58f1
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x366b5a01
- (id)mailboxUid;	// 0x366b5bd5
- (id)message;	// 0x366b5955
- (void)setMessageClass:(Class)aClass;	// 0x366b5945
- (id)storePath;	// 0x366b593d
- (void)writeUpdatedMessageDataToDisk;	// 0x366b5941
@end
