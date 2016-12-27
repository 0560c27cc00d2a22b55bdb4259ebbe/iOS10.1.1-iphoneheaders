/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBFProceduralWallpaper;
@class SBWallpaperImage, SBFWallpaperOptions, NSDictionary, NSURL, SBFWallpaperConfigurationManager, UIImage, NSString;

@interface SBFWallpaperConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	id<SBFProceduralWallpaper> _proceduralWallpaper;
	long long _wallpaperType;
	SBWallpaperImage* _wallpaperImage;
	SBFWallpaperOptions* _wallpaperOptions;
	NSDictionary* _proceduralWallpaperInfo;
	NSURL* _videoURL;
	SBFWallpaperConfigurationManager* _wallpaperConfigurationManager;
	long long _variant;

}

@property (nonatomic,readonly) SBFWallpaperConfigurationManager * wallpaperConfigurationManager;              //@synthesize wallpaperConfigurationManager=_wallpaperConfigurationManager - In the implementation block
@property (nonatomic,readonly) long long variant;                                                             //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) SBWallpaperImage * wallpaperImage;                                               //@synthesize wallpaperImage=_wallpaperImage - In the implementation block
@property (nonatomic,copy) NSDictionary * proceduralWallpaperInfo;                                            //@synthesize proceduralWallpaperInfo=_proceduralWallpaperInfo - In the implementation block
@property (nonatomic,copy) NSURL * videoURL;                                                                  //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy) SBFWallpaperOptions * wallpaperOptions;                                            //@synthesize wallpaperOptions=_wallpaperOptions - In the implementation block
@property (nonatomic,readonly) long long wallpaperType;                                                       //@synthesize wallpaperType=_wallpaperType - In the implementation block
@property (nonatomic,readonly) UIImage * wallpaperOriginalImage; 
@property (nonatomic,readonly) UIImage * wallpaperThumbnailImage; 
@property (nonatomic,readonly) id<SBFProceduralWallpaper> proceduralWallpaper; 
@property (nonatomic,copy,readonly) NSString * proceduralWallpaperIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * proceduralWallpaperOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SBFWallpaperOptions *)wallpaperOptions;
-(void)setWallpaperOptions:(SBFWallpaperOptions *)arg1 ;
-(NSString *)proceduralWallpaperIdentifier;
-(NSDictionary *)proceduralWallpaperOptions;
-(id)initWithWallpaperConfigurationManager:(id)arg1 variant:(long long)arg2 type:(long long)arg3 ;
-(void)setProceduralWallpaperInfo:(NSDictionary *)arg1 ;
-(void)setWallpaperImage:(SBWallpaperImage *)arg1 ;
-(SBFWallpaperConfigurationManager *)wallpaperConfigurationManager;
-(NSDictionary *)proceduralWallpaperInfo;
-(UIImage *)wallpaperThumbnailImage;
-(id)wallpaperThumbnailImageData;
-(UIImage *)wallpaperOriginalImage;
-(id<SBFProceduralWallpaper>)proceduralWallpaper;
-(long long)wallpaperType;
-(SBWallpaperImage *)wallpaperImage;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)variant;
@end

