/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRSelectionHandler.h"
#import "BRProvider.h"
#import "BRControlFactory.h"

@class ATVDataQuery, ATVDataType, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVRentedMediaProvider : XXUnknownSuperclass <BRProvider, BRSelectionHandler, BRControlFactory> {
	ATVDataType *_mediaType;	// 4 = 0x4
	ATVDataQuery *_dataQuery;	// 8 = 0x8
	NSMutableArray *_rentedMovies;	// 12 = 0xc
}
+ (id)providerWithMediaType:(id)mediaType;	// 0x2013b1
- (id)init;	// 0x2013fd
- (id)initWithMediaType:(id)mediaType;	// 0x20141d
- (void)_accountLoggedOut:(id)anOut;	// 0x201cb1
- (void)_reloadRentals;	// 0x201851
- (void)_rentalQueryComplete;	// 0x201b19
- (id)controlFactory;	// 0x2016e9
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2016ed
- (id)dataAtIndex:(long)index;	// 0x2016a9
- (long)dataCount;	// 0x2016c9
- (void)dealloc;	// 0x20159d
- (BOOL)handleSelectionForControl:(id)control;	// 0x201769
- (id)hashForDataAtIndex:(long)index;	// 0x201661
@end

