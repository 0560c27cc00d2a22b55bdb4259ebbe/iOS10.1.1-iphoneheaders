/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKOverlay.h>

@class GEOMapRegion, NSMutableSet, VKPolylineOverlay, NSSet, NSString;

@interface VKPolylineGroupOverlay : NSObject <VKOverlay> {

	NSMutableSet* _polylines;
	GEOMapRegion* _boundingMapRegion;
	CFSetRef _observers;
	VKPolylineOverlay* _selectedPolyline;
	BOOL _containsTransit;

}

@property (nonatomic,readonly) NSSet * polylines;                               //@synthesize polylines=_polylines - In the implementation block
@property (nonatomic,retain) VKPolylineOverlay * selectedPolyline;              //@synthesize selectedPolyline=_selectedPolyline - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;                //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) CGSize coordinate; 
@property (nonatomic,readonly) BOOL containsTransit;                            //@synthesize containsTransit=_containsTransit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(GEOMapRegion *)boundingMapRegion;
-(NSSet *)polylines;
-(void)addPolyline:(id)arg1 ;
-(void)removePolyline:(id)arg1 ;
-(void)setSelectedPolyline:(VKPolylineOverlay *)arg1 ;
-(void)_updateBoundingMapRegion;
-(void)_updateContainsTransit;
-(VKPolylineOverlay *)selectedPolyline;
-(BOOL)containsTransit;
-(CGSize)coordinate;
@end

