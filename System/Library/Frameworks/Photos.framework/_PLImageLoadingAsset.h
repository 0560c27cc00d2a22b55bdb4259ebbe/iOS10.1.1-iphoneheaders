/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _PLImageLoadingAsset <NSObject>
@required
-(double)duration;
-(int)orientation;
-(CGSize*)imageSize;
-(BOOL)complete;
-(short)kind;
-(id)uuid;
-(BOOL)isVideo;
-(BOOL)hasLegacyAdjustments;
-(id)pathForFullsizeRenderImageFile;
-(short)savedAssetType;
-(id)pathForVideoPreviewFile;
-(id)pathForLargeThumbnailFile;
-(id)originalFileName;
-(unsigned long long)effectiveThumbnailIndex;
-(void)generateLargeThumbnailFileIfNecessary;
-(short)kindSubtype;
-(BOOL)isInFlight;
-(id)thumbnailIdentifier;
-(id)pl_photoLibrary;
-(BOOL)isOriginalSRGB;
-(id)pathForAdjustedSRGBLargeThumbnailFile;
-(id)pathForNonAdjustedSRGBLargeThumbnailFile;
-(id)pathForAdjustmentFile;
-(id)pathForSubstandardFullsizeRenderImageFile;
-(id)pathForSRGBLargeThumbnailFile;
-(id)pathForMediumThumbnailFile;
-(unsigned long long)localResourcesState;
-(id)pathForPenultimateFullsizeRenderImageFile;
-(id)pathForPenultimateFullsizeRenderVideoFile;
-(id)fileURLForFullsizeRenderVideo;
-(id)pathForNonAdjustedFullsizeImageFile;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(id)debugFilename;
-(BOOL)isPartOfBurst;
-(id)pathForAdjustmentDataFile;
-(id)fileURLForFullsizeRenderImage;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(id)managedAssetForPhotoLibrary:(id)arg1;
-(BOOL)isStreamedVideo;
-(BOOL)isCloudSharedAsset;
-(long long)cloudPlaceholderKind;
-(BOOL)isRAW;
-(id)objectID;
-(BOOL)isCloudPlaceholder;
-(id)uniformTypeIdentifier;
-(double)aspectRatio;
-(BOOL)isTimelapsePlaceholder;
-(BOOL)isJPEG;
-(BOOL)hasAdjustments;
-(id)pathForOriginalFile;

@end

