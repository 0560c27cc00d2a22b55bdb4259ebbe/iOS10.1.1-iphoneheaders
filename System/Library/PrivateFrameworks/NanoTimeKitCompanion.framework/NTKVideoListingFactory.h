/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableSet;

@interface NTKVideoListingFactory : NSObject {

	NSArray* _butterflyListings;
	NSArray* _jellyfishListings;
	NSArray* _flowerListings;
	NSMutableSet* _assetListings;

}
+(id)sharedInstance;
-(void)discardAssets;
-(id)posterImageWithTheme:(unsigned long long)arg1 ;
-(id)defaultListingWithTheme:(unsigned long long)arg1 ;
-(id)anyListingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 ;
-(long long)behaviorForTheme:(unsigned long long)arg1 ;
-(id)anyListingWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 matchingTag:(unsigned long long)arg3 ;
-(id)anyListingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 notMatchingClip:(long long)arg4 ;
-(id)_initLibrary;
-(id)_listingsWithTheme:(unsigned long long)arg1 ;
-(id)_listingWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 variant:(long long)arg2 tag:(unsigned long long)arg3 notMatchingClip:(long long)arg4 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 matchingTag:(unsigned long long)arg3 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 variant:(long long)arg2 ;
-(id)_listingsWithTheme:(unsigned long long)arg1 notMatchingVariant:(long long)arg2 ;
-(void)setVideoListingHasAssets:(id)arg1 ;
@end

