/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSNumber, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface PKPrinter : NSObject {
@private
	NSString *name;	// 4 = 0x4
	int type;	// 8 = 0x8
	int accessState;	// 12 = 0xc
	NSDictionary *printInfoSupported;	// 16 = 0x10
	http_s *job_http;	// 20 = 0x14
	NSMutableDictionary *privateData;	// 24 = 0x18
	NSMutableSet *mediaReady;	// 28 = 0x1c
	int maxPDFKBytes;	// 32 = 0x20
	int maxJPEGKBytes;	// 36 = 0x24
	int maxCopies;	// 40 = 0x28
	int preferred_landscape;	// 44 = 0x2c
	BOOL isLocal;	// 48 = 0x30
	BOOL hasIdentifyPrinterOp;	// 49 = 0x31
@protected
	int kind;	// 52 = 0x34
}
@property(retain) NSDictionary *TXTRecord;	// G=0x34d626c5; S=0x34d62599; @dynamic
@property(readonly, assign) int accessState;	// G=0x34d5f1a1; @synthesize
@property(assign) int accessState;	// S=0x34d5f1e1; 
@property(readonly, assign) BOOL hasIdentifyPrinterOp;	// G=0x34d5f171; @synthesize
@property(readonly, assign) BOOL hasPrintInfoSupported;	// G=0x34d6174d; @dynamic
@property(retain) NSString *hostname;	// G=0x34d6186d; S=0x34d618b9; @dynamic
@property(readonly, assign) BOOL isAdobeRGBSupported;	// G=0x34d6016d; @dynamic
@property(readonly, assign) BOOL isIPPS;	// G=0x34d5f389; @dynamic
@property(assign) BOOL isLocal;	// G=0x34d5f181; S=0x34d5f191; @synthesize
@property(readonly, assign) int kind;	// G=0x34d5f1c1; @synthesize
@property(readonly, assign) NSString *name;	// G=0x34d5f1d1; @synthesize
@property(retain) NSNumber *port;	// G=0x34d618dd; S=0x34d61929; @dynamic
@property(readonly, assign) NSDictionary *printInfoSupported;	// G=0x34d602a1; 
@property(readonly, retain) NSString *scheme;	// G=0x34d62a11; 
@property(readonly, assign) int type;	// G=0x34d5f1b1; @synthesize
@property(readonly, assign) NSString *uuid;	// G=0x34d5f3b9; @dynamic
+ (BOOL)printerLookupWithName:(id)name andTimeout:(double)timeout;	// 0x34d5f4b9
+ (id)printerWithName:(id)name;	// 0x34d5f415
- (id)initWithName:(id)name TXT:(id)txt;	// 0x34d62f69
- (id)initWithName:(id)name TXTRecord:(id)record;	// 0x34d61961
// declared property getter: - (id)TXTRecord;	// 0x34d626c5
- (int)abortJob;	// 0x34d5f3ed
// declared property getter: - (int)accessState;	// 0x34d5f1a1
- (void)cancelUnlock;	// 0x34d5f5f9
- (void)checkOperations:(ipp_s *)operations;	// 0x34d61615
- (ipp_s *)createRequest:(id)request ofType:(id)type url:(id)url;	// 0x34d634a1
- (void)dealloc;	// 0x34d61775
- (id)description;	// 0x34d5f1f1
- (id)displayName;	// 0x34d5f201
- (int)finalizeJob:(int)job;	// 0x34d63b85
- (int)finishJob;	// 0x34d5f401
- (ipp_s *)getPrinterAttributes;	// 0x34d62aa9
// declared property getter: - (BOOL)hasIdentifyPrinterOp;	// 0x34d5f171
// declared property getter: - (BOOL)hasPrintInfoSupported;	// 0x34d6174d
// declared property getter: - (id)hostname;	// 0x34d6186d
- (void)identifySelf;	// 0x34d6166d
// declared property getter: - (BOOL)isAdobeRGBSupported;	// 0x34d6016d
// declared property getter: - (BOOL)isIPPS;	// 0x34d5f389
// declared property getter: - (BOOL)isLocal;	// 0x34d5f181
- (BOOL)isPaperReady:(id)ready;	// 0x34d5f341
// declared property getter: - (int)kind;	// 0x34d5f1c1
- (BOOL)knowsReadyPaperList;	// 0x34d5f141
- (id)localName;	// 0x34d63ea9
- (id)location;	// 0x34d5f30d
- (id)matchedPaper:(id)paper preferBorderless:(BOOL)borderless withDuplexMode:(id)duplexMode didMatch:(BOOL *)match;	// 0x34d5f725
// declared property getter: - (id)name;	// 0x34d5f1d1
- (ipp_s *)newMediaColFromPaper:(id)paper Source:(id)source Type:(id)type DoMargins:(BOOL)margins;	// 0x34d6330d
- (id)paperListForDuplexMode:(id)duplexMode;	// 0x34d5fffd
// declared property getter: - (id)port;	// 0x34d618dd
// declared property getter: - (id)printInfoSupported;	// 0x34d602a1
- (int)printURL:(id)url ofType:(id)type printSettings:(id)settings;	// 0x34d5fb6d
- (id)privateObjectForKey:(id)key;	// 0x34d61a75
- (void)reconfirmWithForce:(BOOL)force;	// 0x34d5f559
- (void)resolve;	// 0x34d6194d
- (BOOL)resolveWithTimeout:(int)timeout;	// 0x34d6309d
// declared property getter: - (id)scheme;	// 0x34d62a11
- (int)sendData:(const char *)data ofLength:(int)length;	// 0x34d5fb19
// declared property setter: - (void)setAccessState:(int)state;	// 0x34d5f1e1
- (void)setAccessStateFromTXT:(id)txt;	// 0x34d61801
// declared property setter: - (void)setHostname:(id)hostname;	// 0x34d618b9
// declared property setter: - (void)setIsLocal:(BOOL)local;	// 0x34d5f191
// declared property setter: - (void)setPort:(id)port;	// 0x34d61929
- (void)setPrivateObject:(id)object forKey:(id)key;	// 0x34d61b61
// declared property setter: - (void)setTXTRecord:(id)record;	// 0x34d62599
- (int)startJob:(id)job ofType:(id)type;	// 0x34d5f925
// declared property getter: - (int)type;	// 0x34d5f1b1
- (void)unlockWithCompletionHandler:(id)completionHandler;	// 0x34d5f635
- (void)updateType;	// 0x34d62855
// declared property getter: - (id)uuid;	// 0x34d5f3b9
@end

