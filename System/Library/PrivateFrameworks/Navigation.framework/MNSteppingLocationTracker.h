/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNLocationTracker.h>

@class GEORouteMatcher;

@interface MNSteppingLocationTracker : MNLocationTracker {

	GEORouteMatcher* _routeMatcher;

}
-(int)transportType;
-(id)initWithNavigationSession:(id)arg1 ;
-(id)matchedLocationForLocation:(id)arg1 ;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)resetForTracePlayerAtLocation:(id)arg1 ;
@end

