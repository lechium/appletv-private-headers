/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QLPreviewParts.h"
#import "QuickLook-Structs.h"


@interface QLBasePreviewParts : QLPreviewParts {
}
+ (BOOL)canConvertDocumentType:(id)type;	// 0x33b34719
+ (/*function-pointer*/ void *)dataCallbackForUTI:(id)uti andSize:(unsigned)size;	// 0x33b348fd
+ (BOOL)isBundleURL:(id)url;	// 0x33b347a9
+ (/*function-pointer*/ void *)urlCallbackForUTI:(id)uti;	// 0x33b34821
- (void)computePreview;	// 0x33b349b1
@end
