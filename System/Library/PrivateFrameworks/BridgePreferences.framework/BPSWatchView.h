/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BridgePreferences-Structs.h>
#import <UIKit/UIView.h>

@class NSString, BPSRemoteImageView, UIImageView;

@interface BPSWatchView : UIView {

	NSString* _screenImageSearchBundleIdentifier;
	NSString* _screenImageName;
	unsigned long long _style;
	unsigned long long _sizeOverride;
	BPSRemoteImageView* _watchImageView;
	NSString* _styleVersionSuffix;
	UIImageView* _watchScreenImageView;

}

@property (assign,nonatomic) unsigned long long style;                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long sizeOverride;                           //@synthesize sizeOverride=_sizeOverride - In the implementation block
@property (nonatomic,retain) BPSRemoteImageView * watchImageView;                       //@synthesize watchImageView=_watchImageView - In the implementation block
@property (nonatomic,copy) NSString * styleVersionSuffix;                               //@synthesize styleVersionSuffix=_styleVersionSuffix - In the implementation block
@property (nonatomic,readonly) UIImageView * watchScreenImageView;                      //@synthesize watchScreenImageView=_watchScreenImageView - In the implementation block
@property (nonatomic,retain) NSString * screenImageSearchBundleIdentifier;              //@synthesize screenImageSearchBundleIdentifier=_screenImageSearchBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * screenImageName;                                  //@synthesize screenImageName=_screenImageName - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)style;
-(id)image;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 versionModifier:(id)arg2 allowsMaterialFallback:(BOOL)arg3 ;
-(id)watchAssetBundle;
-(void)applyScreenStyle;
-(unsigned long long)deviceSize;
-(CGSize)screenImageSize;
-(id)initWithStyle:(unsigned long long)arg1 andVersionModifier:(id)arg2 ;
-(void)setScreenImageName:(NSString *)arg1 ;
-(NSString *)screenImageSearchBundleIdentifier;
-(void)setScreenImageSearchBundleIdentifier:(NSString *)arg1 ;
-(NSString *)screenImageName;
-(void)setWatchImageView:(BPSRemoteImageView *)arg1 ;
-(NSString *)styleVersionSuffix;
-(void)setStyleVersionSuffix:(NSString *)arg1 ;
-(UIImageView *)watchScreenImageView;
-(unsigned long long)sizeOverride;
-(void)setSizeOverride:(unsigned long long)arg1 ;
-(BPSRemoteImageView *)watchImageView;
-(id)initWithStyle:(unsigned long long)arg1 allowsMaterialFallback:(BOOL)arg2 ;
-(void)overrideMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
@end

