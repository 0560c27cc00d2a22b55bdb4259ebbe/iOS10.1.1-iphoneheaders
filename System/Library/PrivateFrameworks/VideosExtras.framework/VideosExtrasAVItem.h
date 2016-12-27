/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreAVItem.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@class IKAssetElement, NSString;

@interface VideosExtrasAVItem : MPStoreAVItem <AVAssetResourceLoaderDelegate> {

	BOOL _loadedHLS;
	BOOL _background;
	IKAssetElement* _assetElement;
	unsigned long long _mediaType;

}

@property (nonatomic,readonly) IKAssetElement * assetElement;                    //@synthesize assetElement=_assetElement - In the implementation block
@property (getter=isBackground,nonatomic,readonly) BOOL background;              //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType;                     //@synthesize mediaType=_mediaType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)type;
-(BOOL)isBackground;
-(long long)_expectedPlaybackMode;
-(void)loadAssetAndPlayerItem;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isAssetURLValid;
-(unsigned long long)streamType;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(unsigned long long)mediaType;
-(void)_networkSettingsChanged:(id)arg1 ;
-(IKAssetElement *)assetElement;
-(id)initWithAssetElement:(id)arg1 mediaType:(unsigned long long)arg2 isBackground:(BOOL)arg3 ;
@end

