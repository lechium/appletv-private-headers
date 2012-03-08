/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVFeedDocument, ATVMerchant, NSMutableDictionary, ATVJSRoot, ATVJSStorage, NSMutableArray;

@interface ATVJSContext : NSObject {
@private
	ATVMerchant *_merchant;	// 4 = 0x4
	ATVFeedDocument *_feedDocument;	// 8 = 0x8
	OpaqueJSContext *_context;	// 12 = 0xc
	dispatch_queue_s *_queue;	// 16 = 0x10
	ATVJSStorage *_atvLocalStorage;	// 20 = 0x14
	ATVJSStorage *_atvSessionStorage;	// 24 = 0x18
	ATVJSRoot *_atvRoot;	// 28 = 0x1c
	NSMutableDictionary *_classesByName;	// 32 = 0x20
	NSMutableArray *_postEvalCommandBlocks;	// 36 = 0x24
}
@property(retain, nonatomic) ATVJSStorage *atvLocalStorage;	// G=0x3022c585; S=0x3022c595; @synthesize=_atvLocalStorage
@property(retain, nonatomic) ATVJSRoot *atvRoot;	// G=0x3022c5ed; S=0x3022c5fd; @synthesize=_atvRoot
@property(retain, nonatomic) ATVJSStorage *atvSessionStorage;	// G=0x3022c5b9; S=0x3022c5c9; @synthesize=_atvSessionStorage
@property(retain, nonatomic) NSMutableDictionary *classesByName;	// G=0x3022c621; S=0x3022c631; @synthesize=_classesByName
@property(assign, nonatomic) OpaqueJSContext *context;	// G=0x3022c545; S=0x3022c555; @synthesize=_context
@property(assign, nonatomic) ATVFeedDocument *feedDocument;	// G=0x3022c525; S=0x3022c535; @synthesize=_feedDocument
@property(readonly, assign, nonatomic) ATVMerchant *merchant;	// G=0x3022c515; @synthesize=_merchant
@property(retain, nonatomic) NSMutableArray *postEvalCommandBlocks;	// G=0x3022c655; S=0x3022c665; @synthesize=_postEvalCommandBlocks
@property(assign, nonatomic) dispatch_queue_s *queue;	// G=0x3022c565; S=0x3022c575; @synthesize=_queue
+ (id)contextFromJSContext:(OpaqueJSContext *)jscontext;	// 0x3022b165
+ (id)contextWithMerchant:(id)merchant;	// 0x3022b105
+ (id)contextWithMerchant:(id)merchant feedDocument:(id)document;	// 0x3022b119
- (id)initWithMerchant:(id)merchant feedDocument:(id)document;	// 0x3022af25
- (void)_setupGlobalObjects:(OpaqueJSContext *)objects isPageLevelContext:(BOOL)context;	// 0x3022ca79
- (void)addPostEvalCommand:(id)command;	// 0x3022c771
- (void)appExit;	// 0x3022d649
// declared property getter: - (id)atvLocalStorage;	// 0x3022c585
// declared property getter: - (id)atvRoot;	// 0x3022c5ed
// declared property getter: - (id)atvSessionStorage;	// 0x3022c5b9
- (void)authenticateUsername:(id)username password:(id)password object:(id)object completionHandler:(id)handler;	// 0x3022d18d
- (void)callFunction:(id)function;	// 0x3022c31d
- (void)callFunction:(id)function withArguments:(id)arguments;	// 0x3022c341
- (void)callFunction:(id)function withArguments:(id)arguments completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x3022be49
- (BOOL)callSynchronousFunction:(id)function withArguments:(id)arguments returnValue:(id *)value;	// 0x3022bbb9
- (OpaqueJSClass *)classForName:(id)name;	// 0x3022c739
// declared property getter: - (id)classesByName;	// 0x3022c621
// declared property getter: - (OpaqueJSContext *)context;	// 0x3022c545
- (void)dealloc;	// 0x3022b179
- (void)destroyJSContext;	// 0x3022b201
- (void)evaluateBlockInContextsQueue:(id)contextsQueue;	// 0x3022b2f9
- (void)evaluateBlockInContextsQueue:(id)contextsQueue completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x3022b319
- (void)evaluateScript:(id)script;	// 0x3022b901
- (void)evaluateScript:(id)script completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x3022b569
- (void)evaluateScriptAtURL:(id)url completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x3022b921
// declared property getter: - (id)feedDocument;	// 0x3022c525
- (BOOL)generateRequest:(id)request;	// 0x3022ced9
- (void)logout;	// 0x3022d62d
// declared property getter: - (id)merchant;	// 0x3022c515
- (void)pageLoad:(id)load;	// 0x3022d665
- (void)pageUnload:(id)unload;	// 0x3022d6ad
// declared property getter: - (id)postEvalCommandBlocks;	// 0x3022c655
- (id)pruneUndefinedFunctions:(id)functions;	// 0x3022c365
// declared property getter: - (dispatch_queue_s *)queue;	// 0x3022c565
// declared property setter: - (void)setAtvLocalStorage:(id)storage;	// 0x3022c595
// declared property setter: - (void)setAtvRoot:(id)root;	// 0x3022c5fd
// declared property setter: - (void)setAtvSessionStorage:(id)storage;	// 0x3022c5c9
- (void)setClass:(OpaqueJSClass *)aClass forName:(id)name;	// 0x3022c689
// declared property setter: - (void)setClassesByName:(id)name;	// 0x3022c631
// declared property setter: - (void)setContext:(OpaqueJSContext *)context;	// 0x3022c555
// declared property setter: - (void)setFeedDocument:(id)document;	// 0x3022c535
// declared property setter: - (void)setPostEvalCommandBlocks:(id)blocks;	// 0x3022c665
// declared property setter: - (void)setQueue:(dispatch_queue_s *)queue;	// 0x3022c575
@end

