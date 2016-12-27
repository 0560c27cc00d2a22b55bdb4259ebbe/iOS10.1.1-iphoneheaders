/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class SBWallpaperDefaults;

@interface SBFWallpaperDefaults : NSObject {

	SBWallpaperDefaults* _defaultsStore;

}

@property (nonatomic,readonly) SBWallpaperDefaults * defaultsStore;              //@synthesize defaultsStore=_defaultsStore - In the implementation block
+(id)defaults;
-(id)init;
-(id)description;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(double)stillTimeInVideo;
-(void)setStillTimeInVideo:(double)arg1 ;
-(id)initWithDefaultsStore:(id)arg1 ;
-(double)parallaxFactorForVariant:(long long)arg1 ;
-(double)zoomScaleForVariant:(long long)arg1 ;
-(CGRect)cropRectForVariant:(long long)arg1 ;
-(BOOL)supportsCroppingForVariant:(long long)arg1 ;
-(void)resetParallaxFactorDefaults;
-(void)resetZoomScaleDefaults;
-(void)resetCroppingDefaults;
-(void)resetMagnifyDefaults;
-(BOOL)magnifyEnabledForVariant:(long long)arg1 ;
-(BOOL)isPortraitForVariant:(long long)arg1 ;
-(id)nameForVariant:(long long)arg1 ;
-(BOOL)hasVideoForVariant:(long long)arg1 ;
-(double)stillTimeInVideoForVariant:(long long)arg1 ;
-(void)setSupportsCropping:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setCropRect:(CGRect)arg1 forLocations:(long long)arg2 ;
-(void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2 ;
-(void)setMagnifyEnabled:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setZoomScale:(double)arg1 forLocations:(long long)arg2 ;
-(void)setPortrait:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setName:(id)arg1 forLocations:(long long)arg2 ;
-(SBWallpaperDefaults *)defaultsStore;
-(void)resetDefaults;
-(id)wallpaperOptionsForVariant:(long long)arg1 ;
-(void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2 ;
-(void)resetPortraitDefaults;
-(void)resetHasVideoDefaults;
-(void)resetStillTimeInVideoDefaults;
-(void)resetNameDefaults;
@end

