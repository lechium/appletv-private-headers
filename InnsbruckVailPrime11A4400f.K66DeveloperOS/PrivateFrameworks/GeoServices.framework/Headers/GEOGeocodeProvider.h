/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import </libobjc.A.h>


@interface GEOGeocodeProvider : NSObject {
	id _successHandler;	// 4 = 0x4
	id _batchSuccessHandler;	// 8 = 0x8
	id _errorHandler;	// 12 = 0xc
}
@property(copy, nonatomic) id batchSuccessHandler;	// G=0x30f0ba1d; S=0x30f0ba31; @synthesize=_batchSuccessHandler
@property(copy, nonatomic) id errorHandler;	// G=0x30f0ba41; S=0x30eafef9; @synthesize=_errorHandler
@property(copy, nonatomic) id successHandler;	// G=0x30eb047d; S=0x30eaff89; @synthesize=_successHandler
+ (unsigned short)provider;	// 0x30f0b9bd
+ (id)providerName;	// 0x30f0b9c1
- (void)batchReverseGeocode:(id)geocode success:(id)success error:(id)error;	// 0x30f0b9f5
// declared property getter: - (id)batchSuccessHandler;	// 0x30f0ba1d
- (void)cancel;	// 0x30f0ba09
- (void)dealloc;	// 0x30eb0519
// declared property getter: - (id)errorHandler;	// 0x30f0ba41
- (void)forwardGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x30f0b9cd
- (void)reverseGeocode:(id)geocode success:(id)success error:(id)error;	// 0x30f0b9e1
// declared property setter: - (void)setBatchSuccessHandler:(id)handler;	// 0x30f0ba31
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x30eafef9
// declared property setter: - (void)setSuccessHandler:(id)handler;	// 0x30eaff89
// declared property getter: - (id)successHandler;	// 0x30eb047d
@end

