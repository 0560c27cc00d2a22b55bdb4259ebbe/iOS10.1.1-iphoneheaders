/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaItem.h>

@class MPMediaItem;

@interface OKMPMediaItem : OKMediaItem {

	MPMediaItem* _mediaItem;

}

@property (retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
+(BOOL)isRemote;
+(id)scheme;
+(id)urlForMediaObject:(id)arg1 ;
+(id)urlForMPAsset:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(void)setMediaObject:(id)arg1 ;
-(id)mediaObject;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)avAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsDiskCachedMetadata;
-(void)_resolveAssetIfNeeded;
-(id)initWithMPMediaItem:(id)arg1 ;
@end

