/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class Protocol, NSMutableDictionary;

@interface NSXPCInterface : NSObject {
@private
	Protocol *_protocol;	// 4 = 0x4
	NSMutableDictionary *_methods;	// 8 = 0x8
	id _reserved1;	// 12 = 0xc
}
@property(assign) Protocol *protocol;	// G=0x31b3e439; S=0x31b3e36d; 
+ (id)interfaceWithProtocol:(id)protocol;	// 0x31b3df31
+ (id)signatureForBlock:(id)block;	// 0x31b3e305
- (id)init;	// 0x31b3df81
- (id)_allowedClassesForSelector:(id)selector reply:(BOOL)reply;	// 0x31b3fad9
- (id)_interfaceForArgument:(unsigned)argument ofSelector:(id)selector reply:(BOOL)reply;	// 0x31b3fc4d
- (id)_verifiedMethodSignatureForReplyBlockOfSelector:(id)selector;	// 0x31b3fa59
- (id)_verifiedMethodSignatureForSelector:(id)selector;	// 0x31b3f9fd
- (Class)classForSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31b3f485
- (id)classesForSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31b3e7f1
- (void)dealloc;	// 0x31b3dfdd
- (id)debugDescription;	// 0x31b3e029
- (id)interfaceForSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31b3f165
// declared property getter: - (id)protocol;	// 0x31b3e439
- (id)replyBlockSignatureForSelector:(SEL)selector;	// 0x31b3f7f1
- (void)setClass:(Class)aClass forSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31b3f43d
- (void)setClasses:(id)classes forSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31b3e449
- (void)setInterface:(id)interface forSelector:(SEL)selector argumentIndex:(unsigned)index ofReply:(BOOL)reply;	// 0x31b3ea95
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x31b3e36d
- (void)setReplyBlockSignature:(id)signature forSelector:(SEL)selector;	// 0x31b3f4b9
@end

