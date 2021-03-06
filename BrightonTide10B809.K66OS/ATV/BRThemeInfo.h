/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRThemeInfo : XXUnknownSuperclass {
	CGSize _size;	// 4 = 0x4
	NSString *_controllerBackgroundImageName;	// 12 = 0xc
	NSMutableDictionary *_ratingsImages;	// 16 = 0x10
	NSMutableDictionary *_starRatingsImages;	// 20 = 0x14
	NSMutableDictionary *_cachedImages;	// 24 = 0x18
}
+ (id)sharedTheme;	// 0x2c0071
- (id)init;	// 0x2c00b9
- (id)QImage;	// 0x2c0645
- (id)_atvImageForFile:(id)file ofType:(id)type;	// 0x2c3e4d
- (id)_cachedATVImageForFile:(id)file ofType:(id)type;	// 0x2c3de1
- (id)_cachedImageForFile:(id)file ofType:(id)type;	// 0x2c30fd
- (id)_imageForFile:(id)file ofType:(id)type;	// 0x2c316d
- (id)actionButtonBackgroundImage;	// 0x2c0909
- (id)actionButtonSheenImage;	// 0x2c08c1
- (id)airportImageForSignalStrength:(long)signalStrength;	// 0x2c0b91
- (id)appleTVIconOOB;	// 0x2c06e1
- (float)appleTVIconOOBVerticalOffset;	// 0x2c081d
- (id)appleTVImage;	// 0x2c0b6d
- (float)arrowSizeToRowHeightRatio;	// 0x2c2e79
- (id)blankImage;	// 0x2c0215
- (id)boxTitleAttributesForRelated:(BOOL)related;	// 0x2c1f69
- (CGRect)brandImageFrame;	// 0x2c3085
- (id)carouselPlaceholderImage;	// 0x2c33ad
- (id)ccBadge;	// 0x2c3211
- (CGRect)centeredMenuHeaderFrameForMasterFrame:(CGRect)masterFrame;	// 0x2c2c31
- (id)checkForPurchasesTextAttributes;	// 0x2c3605
- (id)closedCaptionImage;	// 0x2c1081
- (float)comboRowHeight;	// 0x2c2d21
- (id)copyrightAttributes;	// 0x2c1dfd
- (id)currentlyPlayingImage;	// 0x2c0431
- (id)cursorBlueGlowSelectionCenterImage;	// 0x2c07f9
- (id)cursorBottomCenterSquareImage;	// 0x2c0769
- (id)cursorLeftCenterSquareImage;	// 0x2c07d5
- (id)cursorLowerLeftSquareImage;	// 0x2c07b1
- (id)cursorTopCenterSquareImage;	// 0x2c0745
- (id)cursorUpperLeftSquareImage;	// 0x2c078d
- (id)dashedActionButtonOutlineImage;	// 0x2c08e5
- (void)dealloc;	// 0x2c0165
- (id)defaultChapterImage;	// 0x2c0e89
- (id)deleteActionHighlightedImage;	// 0x2c0999
- (id)deleteActionImage;	// 0x2c0975
- (id)digitalExtrasImage;	// 0x2c0ead
- (id)digitalExtrasMetadataBadge;	// 0x2c0f19
- (id)digitalLPMetadataBadge;	// 0x2c0f3d
- (float)dimValue;	// 0x2c2ec9
- (id)dividerLabelAttributes;	// 0x2c1d79
- (float)dividerRowHeight;	// 0x2c2cd1
- (id)dolbyDigitalBadge;	// 0x2c31ed
- (id)downloadButtonImage;	// 0x2c0239
- (id)downloadMenuItemPrimaryTextAttributes;	// 0x2c3625
- (id)downloadMenuItemSecondaryTextAttributes;	// 0x2c3645
- (CGSize)downsampleSize;	// 0x2c3019
- (id)emptyPhotoAlbumImage;	// 0x2c02c9
- (id)emptyPhotoEventImage;	// 0x2c02a5
- (id)emptyPhotoShelfImage;	// 0x2c025d
- (id)emptyPhotoShelfSquareImage;	// 0x2c0281
- (id)errorFailureReasonAttributes;	// 0x2c1a09
- (id)errorIcon;	// 0x2c01f1
- (id)errorSuggestionAttributes;	// 0x2c1a29
- (id)folderIcon;	// 0x2c0db1
- (id)fourByThreePlaceholderImage;	// 0x2c3365
- (id)fullScreenPhotoCaptionAttributes;	// 0x2c1ff9
- (id)geniusIcon;	// 0x2c0dd5
- (id)goldenPlaceholderImage;	// 0x2c3389
- (id)hdBadge;	// 0x2c0f61
- (id)hdPosterBadge;	// 0x2c31c9
- (float)heightForDownloadItemRow;	// 0x2c3689
- (id)highlightedCurrentlyPlayingImage;	// 0x2c0455
- (id)highlightedDigitalExtrasImage;	// 0x2c0ed1
- (id)highlightedDragBarImage;	// 0x2c0621
- (id)highlightedMenuArrowImage;	// 0x2c05b5
- (id)highlightedRefreshIcon;	// 0x2c0e65
- (id)highlightedReturnToImage;	// 0x2c037d
- (id)highlightedSelectedSettingImage;	// 0x2c056d
- (id)highlightedShuffleImage;	// 0x2c05fd
- (id)highlightedSyncLinkArrowImage;	// 0x2c040d
- (id)highlightedSyncLinkImage;	// 0x2c03c5
- (id)highlightedVideoItemImage;	// 0x2c0c6d
- (float)iTunesAccountSetupHorizontalOffset;	// 0x2c0851
- (id)iTunesAccountSetupIcon;	// 0x2c082d
- (float)iTunesAccountSetupKerningFactor;	// 0x2c0855
- (float)iTunesAccountSetupScaleFactor;	// 0x2c0861
- (id)iTunesNotes;	// 0x2c0b25
- (id)iTunesNotesWithReflection;	// 0x2c0b49
- (id)imageForFileURLString:(id)fileURLString;	// 0x2c3539
- (id)labelTextAttributes;	// 0x2c1929
- (id)largeGeniusIcon;	// 0x2c0df9
- (id)largeGeniusIconWithReflection;	// 0x2c0e1d
- (id)leftFadeImage;	// 0x2c1039
- (id)likesBadgeTextAttributes;	// 0x2c22a9
- (float)listIconHeight;	// 0x2c2e31
- (float)listRowHeight;	// 0x2c2c85
- (id)loadMoreRectangleImage;	// 0x2c3269
- (id)loadMoreSquareImage;	// 0x2c3245
- (id)loadingVideoDetailPageAttributes;	// 0x2c2935
- (id)loadingVideoMenuItemAttributes;	// 0x2c2a61
- (id)loadingVideoPosterAttributes;	// 0x2c27d9
- (id)localContentProviderImage;	// 0x2c1799
- (id)localContentProviderImageProxy;	// 0x2c17bd
- (id)lockedThumbnail;	// 0x2c0cfd
- (id)mainMenuAppTileShadow;	// 0x2c0721
- (CGSize)mainMenuAppTileShadowSize;	// 0x2c0705
- (id)mainMenuVerticalDividerImage;	// 0x2c0681
- (CGSize)mainMenuVerticalDividerSize;	// 0x2c0669
- (id)menuActionFocusedImage;	// 0x2c0cd9
- (id)menuActionUnfocusedImage;	// 0x2c0cb5
- (id)menuArrowImage;	// 0x2c0591
- (id)menuItemBoldTextAttributes;	// 0x2c18e9
- (id)menuItemSmallTextAttributes;	// 0x2c1969
- (id)menuItemTextAttributes;	// 0x2c18a9
- (float)menuMaximumWidthFactor;	// 0x2c2e6d
- (float)menuMinimumWidthFactor;	// 0x2c2e61
- (id)menuTitleSubtextAttributes;	// 0x2c19c9
- (id)menuTitleTextAttributes;	// 0x2c1989
- (float)menuTransitionDuration;	// 0x2c2eb1
- (id)metadataLabelAttributes;	// 0x2c1bb5
- (id)metadataLineAttributes;	// 0x2c1ae9
- (id)metadataNumReviewsAttributes;	// 0x2c1bf5
- (id)metadataOrangeLineAttributes;	// 0x2c1b69
- (id)metadataSummaryFieldAttributes;	// 0x2c1aa9
- (id)metadataTitleAttributes;	// 0x2c1a49
- (id)metadataTitleSubtextAttributes;	// 0x2c1a69
- (float)minimumHorizontalTextLayerSpacing;	// 0x2c1829
- (id)missingImage;	// 0x2c0d21
- (id)moreActionHighlightedImage;	// 0x2c34cd
- (id)moreActionImage;	// 0x2c34a9
- (id)movieMetadataLabelAttributes;	// 0x2c1c35
- (id)multiLineMetadataLineAttributes;	// 0x2c1b29
- (id)musicFeaturedPlaceholderImage;	// 0x2c343d
- (id)musicPlaceholderImage;	// 0x2c32f9
- (id)networkPhotosImage;	// 0x2c0add
- (id)normalPosterTitleTextAttributes;	// 0x2c1869
- (id)nowPlayingPlayhead;	// 0x2c0311
- (id)nowPlayingTransport;	// 0x2c02ed
- (id)numberBadgeAttributes;	// 0x2c3d5d
- (float)oneLineWithThumbRowHeight;	// 0x2c2db9
- (float)osdLongTimeOutValue;	// 0x2c2ea9
- (float)osdMediumTimeOutValue;	// 0x2c2ea1
- (float)osdShortTimeOutValue;	// 0x2c2e99
- (float)osdTimeOutValue;	// 0x2c2e91
- (float)pageLoadSpinnerDelay;	// 0x2c2ec1
- (id)pairImage;	// 0x2c0b01
- (id)pairingPINTextAttributes;	// 0x2c1c59
- (int)paradeCountThreshold;	// 0x2c304d
- (float)paragraphRowHeight;	// 0x2c2e09
- (id)partiallyplayedVideoImage;	// 0x2c04e1
- (id)pauseButtonImage;	// 0x2c36e5
- (id)photoCommentFooterAttributes;	// 0x2c224d
- (id)photoMetadataHeaderAttributes;	// 0x2c21f1
- (id)photoSettingsImage;	// 0x2c0a95
- (id)photosImage;	// 0x2c0ab9
- (id)playActionHighlightedImage;	// 0x2c09e1
- (id)playActionImage;	// 0x2c09bd
- (id)playlistIcon;	// 0x2c0d45
- (id)podcastFeaturedPlaceholderImage;	// 0x2c3461
- (id)podcastPlaceholderImage;	// 0x2c331d
- (id)previewActionHighlightedImage;	// 0x2c0951
- (id)previewActionImage;	// 0x2c092d
- (float)previewDelayDuration;	// 0x2c2e85
- (id)progressBarActive_Endcap;	// 0x2c37f5
- (id)progressBarComponents_ActiveEmpty;	// 0x2c3779
- (id)progressBarComponents_ActiveFilled;	// 0x2c36fd
- (id)progressBarComponents_PausedEmpty;	// 0x2c3889
- (id)progressBarComponents_PausedFilled;	// 0x2c380d
- (id)progressBarComponents_Waiting;	// 0x2c391d
- (id)progressBarPaused_Endcap;	// 0x2c3905
- (id)promptCenteredTextAttributes;	// 0x2c1cf9
- (id)promptTextAttributes;	// 0x2c1cd9
- (id)purchasedPlaylistIcon;	// 0x2c0d69
- (void)purgeCache;	// 0x2c30a9
- (id)queueActionHighlightedImage;	// 0x2c0a71
- (id)queueActionImage;	// 0x2c0a4d
- (id)radioItemImage;	// 0x2c0c91
- (id)rateActionHighlightedImage;	// 0x2c0a29
- (id)rateActionImage;	// 0x2c0a05
- (id)ratingImageForString:(id)string;	// 0x2c10a5
- (id)ratingImageFromStoreString:(id)storeString;	// 0x2c1609
- (id)refreshIcon;	// 0x2c0e41
- (id)rentalDetailsAttributesForDate:(id)date;	// 0x2c22f1
- (id)rentalMenuItemAttributesForDate:(id)date;	// 0x2c2629
- (id)rentalPosterAttributesForDate:(id)date;	// 0x2c2479
- (id)returnToImage;	// 0x2c0359
- (id)rightFadeImage;	// 0x2c105d
- (float)roundRectCornerRadius;	// 0x2c2fad
- (id)scrollWidget;	// 0x2c0335
- (id)segmentedControlLabelTextAttributes;	// 0x2c1fd9
- (id)selectedSettingImage;	// 0x2c0549
- (void)setSize:(CGSize)size;	// 0x2c17ed
- (float)settingsAboutRowHeight;	// 0x2c2c09
- (id)settingsItemSmallTextAttributes;	// 0x2c1d59
- (int)shelfColumnCountForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related moreInfoContent:(BOOL)content showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x2c3cb9
- (float)shelfCoverflowMarginForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x2c3b7d
- (float)shelfHeightForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x2c3999
- (float)shelfHorizontalGapForCollectionType:(id)collectionType featured:(BOOL)featured related:(BOOL)related showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x2c3b01
- (float)shelfReflectionAmountForCollectionType:(id)collectionType featured:(BOOL)featured showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles related:(BOOL)related;	// 0x2c3ba9
- (BOOL)shelfScrollabilityForCollectionType:(id)collectionType featured:(BOOL)featured showTitleAndSubtitle:(BOOL)subtitle showAllTitles:(BOOL)titles;	// 0x2c3d51
- (id)shuffleImage;	// 0x2c05d9
- (float)slightDimValue;	// 0x2c2ed5
- (float)smallHeightDividerRowHeight;	// 0x2c2cf9
- (id)smallHeightListDividerLabelAttributes;	// 0x2c1d99
- (id)smallHeightListItemAttributes;	// 0x2c1dbd
- (float)smallHeightListRowHeight;	// 0x2c2cad
- (id)smallMenuTitleTextAttributes;	// 0x2c1949
- (id)smallTextAttributes;	// 0x2c19e9
- (id)smartPlaylistIcon;	// 0x2c0d8d
- (id)spinnerDialogSubtextAttributes;	// 0x2c1f99
- (float)spinnerSizeToRowHeightRatio;	// 0x2c2e59
- (id)sportTeamPlaceholderImage;	// 0x2c33d1
- (id)starRatingImageForString:(id)string;	// 0x2c1419
- (id)stationsSubtitleAttributes;	// 0x2c2bc5
- (id)storeRentalFeaturedPlaceholderImage;	// 0x2c33f5
- (float)storeRentalIconHorizontalOffset;	// 0x2c3235
- (float)storeRentalIconKerningFactor;	// 0x2c3239
- (id)storeRentalPlaceholderImage;	// 0x2c328d
- (id)storeRentalPlaceholderImageLarge;	// 0x2c32b1
- (id)superHDBadge;	// 0x2c0fcd
- (id)syncLinkArrowImage;	// 0x2c03e9
- (id)syncLinkImage;	// 0x2c03a1
- (id)syncProgressMainAttributes;	// 0x2c1ee5
- (id)syncProgressSecondaryAttributes;	// 0x2c1f05
- (id)textEntryInputFieldAttributes;	// 0x2c1c79
- (id)textEntryPromptTextAttributesDuJour;	// 0x2c1c99
- (float)textImageNoThumbnailRowHeight;	// 0x2c2d81
- (float)textImageRowHeight;	// 0x2c2d49
- (float)textMenuDividerInset;	// 0x2c2f4d
- (float)textMenuItemHDBadgeIconInsetFactor;	// 0x2c2eed
- (float)textMenuItemHDBadgeIconScaleFactor;	// 0x2c2ee1
- (float)textMenuItemLeftInsetAndRightInset:(float *)inset;	// 0x2c2ef9
- (float)textMenuItemLeftInsetFromOuterMenuEdge;	// 0x2c2f59
- (float)thinBorderWidth;	// 0x2c0889
- (id)tinyDigitalExtrasImage;	// 0x2c0ef5
- (CGRect)titleSafeFrame;	// 0x2c1739
- (id)trackInfoPrimaryAttributes;	// 0x2c1f25
- (id)trackInfoSecondaryAttributes;	// 0x2c1f45
- (float)trickPlayFrameTransitionDuration;	// 0x2c2eb9
- (id)truncationEllipsis;	// 0x2c3051
- (id)tvShowFeaturedPlaceholderImage;	// 0x2c3419
- (id)tvShowPlaceholderImage;	// 0x2c32d5
- (id)tvShowPlaceholderImageForMenuItem;	// 0x2c3485
- (float)twoLineRowHeight;	// 0x2c2de1
- (id)unboxedLozengeBottom:(BOOL)bottom useBrighterImage:(BOOL)image;	// 0x2c16ed
- (id)unboxedLozengeTop:(BOOL)top useBrighterImage:(BOOL)image;	// 0x2c16a5
- (id)unplayedVideoImage;	// 0x2c0479
- (id)verticalDividerImage;	// 0x2c06bd
- (CGSize)verticalDividerSize;	// 0x2c06a5
- (float)verticalSpacingOOB;	// 0x2c0825
- (id)videoClipPlaceholderImage;	// 0x2c3341
- (id)videoItemImage;	// 0x2c0c49
- (id)waitSpinnerPromptAttributes;	// 0x2c1d39
- (float)wirelessIconHorizontalOffset;	// 0x2c086d
- (float)wirelessIconKerningFactor;	// 0x2c0871
- (float)wirelessIconScaleFactor;	// 0x2c087d
- (id)wishListActionHighlightedImage;	// 0x2c3515
- (id)wishListActionImage;	// 0x2c34f1
- (int)ytApproximateTotalResults:(int)results;	// 0x27e9dd
- (id)ytFormattedTotalResults:(int)results;	// 0x27ea65
- (id)ytListMenuIconImage;	// 0x27e6f5
- (id)ytLogoPreviewController;	// 0x27e899
- (id)ytPlaceHolderImage;	// 0x27e629
- (void)ytSetupListHeader:(id)header withTitle:(id)title;	// 0x27e7a9
@end

