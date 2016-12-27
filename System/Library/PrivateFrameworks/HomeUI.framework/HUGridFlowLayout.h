/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <libobjc.A.dylib/HUControllableCollectionViewLayout.h>

@class HUGridLayoutOptions, HUWallpaperView, HFWallpaperSlice, NSMutableDictionary, NSString;

@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout> {

	HUGridLayoutOptions* _layoutOptions;
	HUWallpaperView* _wallpaperView;
	HFWallpaperSlice* _blurredWallpaperSlice;
	NSMutableDictionary* _overrideAttributesByIndexPath;

}

@property (nonatomic,readonly) NSMutableDictionary * overrideAttributesByIndexPath;              //@synthesize overrideAttributesByIndexPath=_overrideAttributesByIndexPath - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic,__weak) HUWallpaperView * wallpaperView;                             //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                           //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layoutAttributesClass;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)invalidateLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)applyOverrideAttributes:(id)arg1 toItemAtIndexPath:(id)arg2 ;
-(void)clearOverrideAttributesForItemAtIndexPath:(id)arg1 ;
-(void)clearAllOverrideAttributes;
-(HUGridLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(id)_modifiedLayoutAttributesForAttributes:(id)arg1 ;
-(void)_invalidateCollectionViewLayoutsForSubviewsOfView:(id)arg1 ;
-(NSMutableDictionary *)overrideAttributesByIndexPath;
-(HUWallpaperView *)wallpaperView;
-(void)setWallpaperView:(HUWallpaperView *)arg1 ;
@end

