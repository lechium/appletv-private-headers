/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library


@interface GEOGeocodeProvider : NSObject {
	id _successHandler;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
}
@property(copy, nonatomic) id errorHandler;	// G=0x32d01631; S=0x32d01641; @synthesize=_errorHandler
@property(copy, nonatomic) id successHandler;	// G=0x32d015fd; S=0x32d0160d; @synthesize=_successHandler
+ (unsigned short)provider;	// 0x32d01551
+ (id)providerName;	// 0x32d01555
- (void)cancel;	// 0x32d015e9
- (void)dealloc;	// 0x32d01561
// declared property getter: - (id)errorHandler;	// 0x32d01631
- (void)forwardGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x32d015c1
- (void)reverseGeocode:(id)geocode success:(id)success error:(id)error;	// 0x32d015d5
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x32d01641
// declared property setter: - (void)setSuccessHandler:(id)handler;	// 0x32d0160d
// declared property getter: - (id)successHandler;	// 0x32d015fd
@end

