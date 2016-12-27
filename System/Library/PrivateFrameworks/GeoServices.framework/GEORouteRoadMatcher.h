/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapAccessRestrictions.h>

@class GEOMapAccess, NSString;

@interface GEORouteRoadMatcher : NSObject <GEOMapAccessRestrictions> {

	GEOMapAccess* _mapAccess;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
-(id)init;
-(void)dealloc;
-(BOOL)allowsNetworkTileLoad;
-(SCD_Struct_GE93*)findRoadOnCoordinate:(SCD_Struct_GE26)arg1 withCourse:(double)arg2 ;
@end

