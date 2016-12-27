/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class UITapGestureRecognizer, MKMapView, GEOPDFlyover;

@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView {

	BOOL _animationPaused;
	BOOL _animationPrepared;
	UITapGestureRecognizer* _interactionTapRecognizer;
	MKMapView* _mapView;
	GEOPDFlyover* _flyover;

}
-(void)setFrame:(CGRect)arg1 ;
-(void)reset;
-(void)resume;
-(void)present;
-(void)pause;
-(id)flyover;
-(void)setFlyover:(id)arg1 ;
-(void)prepareForPresentation;
-(id)initWithFrame:(CGRect)arg1 mapItem:(id)arg2 ;
-(void)_pauseTour;
-(void)setMapView:(id)arg1 ;
-(id)mapView;
@end

