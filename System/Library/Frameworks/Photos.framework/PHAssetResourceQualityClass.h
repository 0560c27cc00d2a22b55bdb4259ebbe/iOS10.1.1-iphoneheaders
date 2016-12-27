/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLImageFormat;

@interface PHAssetResourceQualityClass : NSObject {

	BOOL _video;
	BOOL _croppedToSquare;
	BOOL _table;
	BOOL _thumbnail;
	PLImageFormat* _backingImageFormat;
	unsigned long long _backingCPLResourceType;
	unsigned long long _maxSideLengthIfSquare;
	unsigned long long _maxNumberOfPixelsIfSquare;

}

@property (nonatomic,retain) PLImageFormat * backingImageFormat;                           //@synthesize backingImageFormat=_backingImageFormat - In the implementation block
@property (assign,nonatomic) unsigned long long backingCPLResourceType;                    //@synthesize backingCPLResourceType=_backingCPLResourceType - In the implementation block
@property (getter=isVideo,nonatomic,readonly) BOOL video;                                  //@synthesize video=_video - In the implementation block
@property (getter=isCroppedToSquare,nonatomic,readonly) BOOL croppedToSquare;              //@synthesize croppedToSquare=_croppedToSquare - In the implementation block
@property (getter=isTable,nonatomic,readonly) BOOL table;                                  //@synthesize table=_table - In the implementation block
@property (getter=isThumbnail,nonatomic,readonly) BOOL thumbnail;                          //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSideLengthIfSquare;                   //@synthesize maxSideLengthIfSquare=_maxSideLengthIfSquare - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumberOfPixelsIfSquare;               //@synthesize maxNumberOfPixelsIfSquare=_maxNumberOfPixelsIfSquare - In the implementation block
+(id)_thumbnailAssetResourceQualityClassesForCurrentDevice;
+(id)_cplDerivativeAssetResourceQualityClasses;
+(id)assetResourceQualityClasses;
+(id)anyQualityClassMatchingPredicate:(id)arg1 ;
+(id)allQualityClassesMatchingPredicate:(id)arg1 ;
-(id)description;
-(long long)_compare:(id)arg1 ;
-(BOOL)isVideo;
-(BOOL)isTable;
-(id)initWithThumbnailFormat:(id)arg1 ;
-(PLImageFormat *)backingImageFormat;
-(unsigned long long)backingCPLResourceType;
-(BOOL)isCroppedToSquare;
-(id)initWithCPLResourceType:(unsigned long long)arg1 ;
-(unsigned long long)maxSideLengthIfSquare;
-(void)setBackingImageFormat:(PLImageFormat *)arg1 ;
-(void)setBackingCPLResourceType:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfPixelsIfSquare;
-(BOOL)isThumbnail;
@end

