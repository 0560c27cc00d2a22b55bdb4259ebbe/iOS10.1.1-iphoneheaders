/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKPlaceHeaderViewCinematics.h>

@protocol MKPlaceHeaderBackgroundViewDelegate;
@class MKMapItem, NSString;

@interface MKPlaceHeaderBackgroundView : UIView <MKPlaceHeaderViewCinematics> {

	long long _backgroundType;
	MKMapItem* _mapItem;
	id<MKPlaceHeaderBackgroundViewDelegate> _delegate;
	long long _preparationState;

}

@property (assign,nonatomic,__weak) id<MKPlaceHeaderBackgroundViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long backgroundType;                                             //@synthesize backgroundType=_backgroundType - In the implementation block
@property (assign,nonatomic) long long preparationState;                                           //@synthesize preparationState=_preparationState - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)backgroundTypeForMapItem:(id)arg1 ;
+(Class)classForBackgroundType:(long long)arg1 ;
+(id)backgroundViewForBackgroundType:(long long)arg1 mapItem:(id)arg2 headerView:(id)arg3 ;
+(id)backgroundViewForMapItem:(id)arg1 headerView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MKPlaceHeaderBackgroundViewDelegate>)arg1 ;
-(id<MKPlaceHeaderBackgroundViewDelegate>)delegate;
-(void)reset;
-(void)resume;
-(void)present;
-(void)pause;
-(void)prepareForPresentation;
-(id)initWithFrame:(CGRect)arg1 mapItem:(id)arg2 ;
-(long long)preparationState;
-(void)setPreparationState:(long long)arg1 ;
-(long long)backgroundType;
-(void)setBackgroundType:(long long)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
@end

