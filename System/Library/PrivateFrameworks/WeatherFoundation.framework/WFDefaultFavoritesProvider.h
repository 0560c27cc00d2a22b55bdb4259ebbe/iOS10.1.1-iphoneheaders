/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFFavoriteLocationProvider.h>

@protocol WFFavoriteLocationProviderDelegate;
@class NSString;

@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider> {

	id<WFFavoriteLocationProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WFFavoriteLocationProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setLocations:(id)arg1 ;
-(void)setDelegate:(id<WFFavoriteLocationProviderDelegate>)arg1 ;
-(id<WFFavoriteLocationProviderDelegate>)delegate;
-(id)locations;
-(void)addLocation:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 persistence:(id)arg2 ;
-(id)locationFromCity:(id)arg1 ;
-(void)removeLocation:(id)arg1 ;
-(BOOL)canProvideDefaultFavorites;
@end

