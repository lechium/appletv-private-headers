/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSDictionary;

@interface APSOutgoingMessage : NSObject {
	NSMutableDictionary *_objects;	// 4 = 0x4
}
@property(assign, nonatomic, getter=isCritical) BOOL critical;	// G=0x320092b1; S=0x320092f1; 
@property(assign, nonatomic) unsigned identifier;	// G=0x320095a9; S=0x320095e9; 
@property(assign) unsigned messageID;	// G=0x32009085; S=0x320090c5; converted property
@property(assign, nonatomic) int payloadFormat;	// G=0x32009511; S=0x32009551; 
@property(assign, nonatomic) unsigned timeout;	// G=0x32009219; S=0x32009259; 
@property(retain) id timestamp;	// G=0x3200911d; S=0x32009145; converted property
@property(retain, nonatomic) NSString *topic;	// G=0x32009171; S=0x32009199; 
@property(retain, nonatomic) NSDictionary *userInfo;	// G=0x320091c5; S=0x320091ed; 
- (id)initWithData:(id)data;	// 0x32009991
- (id)initWithTopic:(id)topic userInfo:(id)info;	// 0x32009691
- (id)data;	// 0x320097bd
- (void)dealloc;	// 0x32009945
- (BOOL)hasTimedOut;	// 0x32009479
// declared property getter: - (unsigned)identifier;	// 0x320095a9
// declared property getter: - (BOOL)isCritical;	// 0x320092b1
// converted property getter: - (unsigned)messageID;	// 0x32009085
- (id)objectForKey:(id)key;	// 0x32009641
// declared property getter: - (int)payloadFormat;	// 0x32009511
- (void)setCancelled:(BOOL)cancelled;	// 0x32009421
// declared property setter: - (void)setCritical:(BOOL)critical;	// 0x320092f1
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x320095e9
// converted property setter: - (void)setMessageID:(unsigned)anId;	// 0x320090c5
- (void)setObject:(id)object forKey:(id)key;	// 0x32009665
// declared property setter: - (void)setPayloadFormat:(int)format;	// 0x32009551
- (void)setSent:(BOOL)sent;	// 0x32009389
- (void)setTimedOut:(BOOL)anOut;	// 0x320094b9
// declared property setter: - (void)setTimeout:(unsigned)timeout;	// 0x32009259
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x32009145
// declared property setter: - (void)setTopic:(id)topic;	// 0x32009199
// declared property setter: - (void)setUserInfo:(id)info;	// 0x320091ed
// declared property getter: - (unsigned)timeout;	// 0x32009219
// converted property getter: - (id)timestamp;	// 0x3200911d
// declared property getter: - (id)topic;	// 0x32009171
// declared property getter: - (id)userInfo;	// 0x320091c5
- (BOOL)wasCancelled;	// 0x320093e1
- (BOOL)wasSent;	// 0x32009349
@end

