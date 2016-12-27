/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFWallpaperDataStore.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSString;

@interface SBFWallpaperMemoryDataStore : NSObject <SBFWallpaperDataStore, BSDescriptionProviding> {

	NSMutableDictionary* _images;
	NSMutableDictionary* _originalImages;
	NSMutableDictionary* _thumbnails;
	NSMutableDictionary* _proceduralInfo;
	NSMutableDictionary* _videoURLs;
	NSMutableDictionary* _wallpaperOptions;

}

@property (nonatomic,readonly) unsigned long long numberOfStoredImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)wallpaperOptionsForVariant:(long long)arg1 ;
-(id)wallpaperImageForVariant:(long long)arg1 ;
-(BOOL)hasWallpaperImageForVariant:(long long)arg1 ;
-(id)wallpaperOriginalImageForVariant:(long long)arg1 ;
-(id)wallpaperThumbnailDataForVariant:(long long)arg1 ;
-(BOOL)setWallpaperImage:(id)arg1 forVariant:(long long)arg2 ;
-(BOOL)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2 ;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 ;
-(void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3 ;
-(void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2 ;
-(id)verifiedVideoURLForVariant:(long long)arg1 ;
-(BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 ;
-(void)removeVideoForVariant:(long long)arg1 ;
-(id)proceduralWallpaperInfoForVariant:(long long)arg1 ;
-(BOOL)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2 ;
-(void)removeProceduralWallpaperForVariants:(long long)arg1 ;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 ;
-(void)removeWallpaperOptionsForVariants:(long long)arg1 ;
-(unsigned long long)numberOfStoredImages;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

