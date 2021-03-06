/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ISURLOperationDelegate.h"
#import "BRMercantile.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSError, BRMerchant, SSURLRequestProperties, NSDate, ISURLOperation, NSData, NSURLRequest, NSURLResponse, NSArray;

__attribute__((visibility("hidden")))
@interface ATVURLDocument : XXUnknownSuperclass <ISURLOperationDelegate, BRMercantile> {
	SSURLRequestProperties *_properties;	// 4 = 0x4
	ISURLOperation *_operation;	// 8 = 0x8
	id _completionBlock;	// 12 = 0xc
	NSMutableDictionary *_metadata;	// 16 = 0x10
	NSArray *_behaviors;	// 20 = 0x14
	BOOL _decoratedByMerchant;	// 24 = 0x18
	BOOL _shouldCompleteOnMainThread;	// 25 = 0x19
	BRMerchant *_merchant;	// 28 = 0x1c
	NSURLRequest *_URLRequest;	// 32 = 0x20
	NSURLResponse *_URLResponse;	// 36 = 0x24
	NSError *_error;	// 40 = 0x28
	NSDate *_requestDate;	// 44 = 0x2c
	NSDate *_loadedDate;	// 48 = 0x30
	NSData *_content;	// 52 = 0x34
	BOOL isCanceled;	// 56 = 0x38
	BOOL _didLoad;	// 57 = 0x39
}
@property(retain, nonatomic) NSURLRequest *URLRequest;	// G=0x1d1ddd; S=0x1d1ded; @synthesize=_URLRequest
@property(retain, nonatomic) NSURLResponse *URLResponse;	// G=0x1d1e15; S=0x1d1e25; @synthesize=_URLResponse
@property(retain, nonatomic) NSArray *behaviors;	// G=0x1d1d2d; S=0x1d1d3d; @synthesize=_behaviors
@property(retain, nonatomic) NSData *content;	// G=0x1d1ef5; S=0x1d1f05; @synthesize=_content
@property(assign, nonatomic, getter=isDecoratedByMerchant) BOOL decoratedByMerchant;	// G=0x1d1d65; S=0x1d1d75; @synthesize=_decoratedByMerchant
@property(assign) BOOL didLoad;	// G=0x1d1f5d; S=0x1d1f75; @synthesize=_didLoad
@property(retain, nonatomic) NSError *error;	// G=0x1d1e4d; S=0x1d1e5d; @synthesize=_error
@property(assign) BOOL isCanceled;	// G=0x1d1f2d; S=0x1d1f45; @synthesize
@property(retain, nonatomic) NSDate *loadedDate;	// G=0x1d1ebd; S=0x1d1ecd; @synthesize=_loadedDate
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x1d1979; S=0x1d1db5; @synthesize=_merchant
@property(readonly, assign, nonatomic) id propertyList;	// G=0x1d1455; 
@property(retain, nonatomic) NSDate *requestDate;	// G=0x1d1e85; S=0x1d1e95; @synthesize=_requestDate
@property(assign) BOOL shouldCompleteOnMainThread;	// G=0x1d1d85; S=0x1d1d9d; @synthesize=_shouldCompleteOnMainThread
@property(readonly, assign, nonatomic) int statusCode;	// G=0x1d13b5; 
+ (void)addActiveDocument:(id)document;	// 0x1d1885
+ (id)documentWithRequestProperties:(id)requestProperties forMerchant:(id)merchant;	// 0x1d07e9
+ (id)documentWithURLRequest:(id)urlrequest forMerchant:(id)merchant;	// 0x1d0849
+ (void)initialize;	// 0x1d08a9
+ (void)loadDocuments:(id)documents forEachResponse:(id)eachResponse completionHandler:(id)handler;	// 0x1d1089
+ (void)removeActiveDocument:(id)document;	// 0x1d1925
- (id)init;	// 0x1d0afd
- (id)initWithRequestProperties:(id)requestProperties forMerchant:(id)merchant;	// 0x1d0915
- (id)initWithURLRequest:(id)urlrequest forMerchant:(id)merchant;	// 0x1d0b21
- (void).cxx_destruct;	// 0x1d1f8d
// declared property getter: - (id)URLRequest;	// 0x1d1ddd
// declared property getter: - (id)URLResponse;	// 0x1d1e15
- (void)_applyBehaviors;	// 0x1d14dd
- (void)_finish:(id)finish;	// 0x1d1709
- (void)_runCompletionBlock;	// 0x1d17bd
- (void)addBehavior:(id)behavior;	// 0x1d0bb1
// declared property getter: - (id)behaviors;	// 0x1d1d2d
- (void)cancel;	// 0x1d0fc1
// declared property getter: - (id)content;	// 0x1d1ef5
- (void)dealloc;	// 0x1d0f6d
// declared property getter: - (BOOL)didLoad;	// 0x1d1f5d
// declared property getter: - (id)error;	// 0x1d1e4d
// declared property getter: - (BOOL)isCanceled;	// 0x1d1f2d
// declared property getter: - (BOOL)isDecoratedByMerchant;	// 0x1d1d65
- (void)load;	// 0x1d0fad
- (void)loadWithReponseBlock:(id)reponseBlock;	// 0x1d0c59
// declared property getter: - (id)loadedDate;	// 0x1d1ebd
// declared property getter: - (id)merchant;	// 0x1d1979
- (id)metadataForKey:(id)key;	// 0x1d1395
- (void)operation:(id)operation didReceiveResponse:(id)response;	// 0x1d1aad
- (void)operation:(id)operation failedWithError:(id)error;	// 0x1d1a55
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x1d1ac1
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x1d1d19
// declared property getter: - (id)propertyList;	// 0x1d1455
// declared property getter: - (id)requestDate;	// 0x1d1e85
// declared property setter: - (void)setBehaviors:(id)behaviors;	// 0x1d1d3d
// declared property setter: - (void)setContent:(id)content;	// 0x1d1f05
// declared property setter: - (void)setDecoratedByMerchant:(BOOL)merchant;	// 0x1d1d75
// declared property setter: - (void)setDidLoad:(BOOL)load;	// 0x1d1f75
// declared property setter: - (void)setError:(id)error;	// 0x1d1e5d
// declared property setter: - (void)setIsCanceled:(BOOL)canceled;	// 0x1d1f45
// declared property setter: - (void)setLoadedDate:(id)date;	// 0x1d1ecd
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x1d1db5
- (void)setMetadata:(id)metadata forKey:(id)key;	// 0x1d1359
// declared property setter: - (void)setRequestDate:(id)date;	// 0x1d1e95
// declared property setter: - (void)setShouldCompleteOnMainThread:(BOOL)completeOnMainThread;	// 0x1d1d9d
// declared property setter: - (void)setURLRequest:(id)request;	// 0x1d1ded
// declared property setter: - (void)setURLResponse:(id)response;	// 0x1d1e25
// declared property getter: - (BOOL)shouldCompleteOnMainThread;	// 0x1d1d85
// declared property getter: - (int)statusCode;	// 0x1d13b5
@end

