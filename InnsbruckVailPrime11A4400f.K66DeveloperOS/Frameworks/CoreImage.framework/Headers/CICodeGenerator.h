/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface CICodeGenerator : CIFilter {
	NSData *inputMessage;	// 36 = 0x24
}
@property(copy, nonatomic) NSData *inputMessage;	// G=0x2d743589; S=0x2d74359d; @synthesize
// declared property getter: - (id)inputMessage;	// 0x2d743589
- (CGImageRef)outputCGImage;	// 0x2d7434fd
- (id)outputImage;	// 0x2d743501
- (void)setDefaults;	// 0x2d7434e9
// declared property setter: - (void)setInputMessage:(id)message;	// 0x2d74359d
@end
