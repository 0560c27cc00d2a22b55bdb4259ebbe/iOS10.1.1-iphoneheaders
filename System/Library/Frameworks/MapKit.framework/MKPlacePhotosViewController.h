/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKPlacePhotosViewDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol MKPlaceCardPhotosControllerDelegate;
@class NSArray, MKMapItem, _MKPlaceViewController, NSString;

@interface MKPlacePhotosViewController : UIViewController <MKPlacePhotosViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	NSArray* _photoViews;
	BOOL _constraintsAdded;
	BOOL _canUseInlineViewer;
	unsigned long long _photosCount;
	unsigned long long _mode;
	MKMapItem* _mapItem;
	id<MKPlaceCardPhotosControllerDelegate> _photosControllerDelegate;
	_MKPlaceViewController* _owner;

}

@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                                //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardPhotosControllerDelegate> photosControllerDelegate;              //@synthesize photosControllerDelegate=_photosControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(unsigned long long)mode;
-(_MKPlaceViewController *)owner;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(id)photos;
-(void)infoCardThemeChanged:(id)arg1 ;
-(id)infoCardChildPossibleActions;
-(void)placePhotoViewerWillClose:(id)arg1 photo:(id)arg2 onIndex:(unsigned long long)arg3 ;
-(id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1 ;
-(void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2 ;
-(id)placePhotoViewerGetDelegatesMapItem;
-(void)_createPhotoViews;
-(void)_updatePhotoBackgroundColor:(id)arg1 ;
-(void)_reloadPhotos;
-(void)_photoSelected:(id)arg1 ;
-(void)_photoTappedAtIndex:(unsigned long long)arg1 ;
-(void)_callPhotoDelegateForPhotoAt:(unsigned long long)arg1 fromLicense:(BOOL)arg2 ;
-(id<MKPlaceCardPhotosControllerDelegate>)photosControllerDelegate;
-(void)setPhotosControllerDelegate:(id<MKPlaceCardPhotosControllerDelegate>)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)initWithLayoutMode:(unsigned long long)arg1 ;
@end

