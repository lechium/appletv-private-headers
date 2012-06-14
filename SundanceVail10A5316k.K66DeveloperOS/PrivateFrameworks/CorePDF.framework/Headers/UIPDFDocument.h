/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class NSString, UIPDFPageImageCache;

@interface UIPDFDocument : NSObject {
	CGPDFDocumentRef _cgDocument;	// 4 = 0x4
	id *_pageArray;	// 8 = 0x8
	unsigned _numberOfPages;	// 12 = 0xc
	float _cachedWidth;	// 16 = 0x10
	NSString *_documentID;	// 20 = 0x14
	NSString *_documentName;	// 24 = 0x18
	UIPDFPageImageCache *_pageImageCache;	// 28 = 0x1c
	unsigned _imageCacheCount;	// 32 = 0x20
	unsigned _imageCacheLookAhead;	// 36 = 0x24
	int _lock;	// 40 = 0x28
	int _imageCacheLock;	// 44 = 0x2c
}
@property(readonly, assign) CGPDFDocumentRef CGDocument;	// G=0x33a7c4b5; @synthesize=_cgDocument
@property(readonly, assign) NSString *documentID;	// G=0x33a7c34d; @dynamic
@property(readonly, assign) unsigned numberOfPages;	// G=0x33a7c159; @dynamic
@property(retain) UIPDFPageImageCache *pageImageCache;	// G=0x33a7c6d1; S=0x33a7c769; @dynamic
+ (id)documentNamed:(id)named;	// 0x33a7bc39
- (id)initWithCGPDFDocument:(CGPDFDocumentRef)cgpdfdocument;	// 0x33a7bf1d
- (id)initWithURL:(id)url;	// 0x33a7bfb1
// declared property getter: - (CGPDFDocumentRef)CGDocument;	// 0x33a7c4b5
- (void)_clearCachedState;	// 0x33a7bcdd
- (BOOL)allowsCopying;	// 0x33a7c495
- (CGPDFDocumentRef)copyCGPDFDocument;	// 0x33a7be6d
- (id)copyPageAtIndex:(unsigned)index;	// 0x33a7c265
- (void)dealloc;	// 0x33a7c085
// declared property getter: - (id)documentID;	// 0x33a7c34d
- (float)maxHeight;	// 0x33a7c579
- (float)maxWidth;	// 0x33a7c4c9
// declared property getter: - (unsigned)numberOfPages;	// 0x33a7c159
- (id)pageAtIndex:(unsigned)index;	// 0x33a7c18d
// declared property getter: - (id)pageImageCache;	// 0x33a7c6d1
- (void)purgePagesBefore:(unsigned)before;	// 0x33a7bdb5
- (void)setCGPDFDocument:(CGPDFDocumentRef)document;	// 0x33a7bea5
- (void)setImageCacheCount:(unsigned)count lookAhead:(unsigned)ahead;	// 0x33a7c109
// declared property setter: - (void)setPageImageCache:(id)cache;	// 0x33a7c769
- (float)sumHeight;	// 0x33a7c661
- (float)sumWidth;	// 0x33a7c5f1
@end

