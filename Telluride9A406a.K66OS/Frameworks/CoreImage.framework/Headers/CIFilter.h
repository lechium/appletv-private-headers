/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library

@class CIImage;

@interface CIFilter : NSObject <NSCoding, NSCopying> {
	void *_priv[8];	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CIImage *outputImage;	// G=0x30215765; @dynamic
+ (id)_filterArrayFromProperties:(id)properties;	// 0x30216ab9
+ (id)_filterArrayFromProperties:(id)properties inputImageExtent:(CGRect)extent;	// 0x3021641d
+ (id)_propertyArrayFromFilters:(id)filters inputImageExtent:(CGRect)extent;	// 0x30215d25
+ (id)customAttributes;	// 0x30215ce1
+ (id)filterNamesInCategories:(id)categories;	// 0x30215195
+ (id)filterNamesInCategory:(id)category;	// 0x30215155
+ (id)filterWithName:(id)name;	// 0x30215021
+ (id)filterWithName:(id)name keysAndValues:(id)values;	// 0x302150f5
- (id)initWithCoder:(id)coder;	// 0x302158f9
- (void)_copyAttributesTo:(id)to;	// 0x30215a69
- (id)_copyFilterWithZone:(NSZone *)zone;	// 0x30215a6d
- (id)_filterClassDescription;	// 0x30215ce5
- (id)_initFromProperties:(id)properties;	// 0x30216c65
- (BOOL)_isIdentity;	// 0x30214f55
- (BOOL)_isIdentity;	// 0x30215d1d
- (id)_outputProperties;	// 0x30215d21
- (id)attributes;	// 0x30215769
- (id)copyWithZone:(NSZone *)zone;	// 0x30215aa9
- (void)dealloc;	// 0x30215645
- (id)description;	// 0x30215ba9
- (void)encodeWithCoder:(id)coder;	// 0x30215795
- (unsigned)hash;	// 0x30214f59
- (id)inputKeys;	// 0x30215715
- (BOOL)isEqual:(id)equal;	// 0x30214e2d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30215b99
- (id)name;	// 0x30215629
// declared property getter: - (id)outputImage;	// 0x30215765
- (id)outputKeys;	// 0x3021573d
- (void)setDefaults;	// 0x30215791
@end

