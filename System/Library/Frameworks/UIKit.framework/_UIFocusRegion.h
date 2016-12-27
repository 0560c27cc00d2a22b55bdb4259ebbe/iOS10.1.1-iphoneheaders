/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusDebugQuickLookImageDrawing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface _UIFocusRegion : NSObject <_UIFocusDebugQuickLookImageDrawing, NSCopying> {

	NSMutableArray* _mutableOccludingRegions;
	_UIFocusRegion* _originalRegion;
	CGRect _frame;

}

@property (assign,setter=_setFrame:,nonatomic) CGRect frame;                                                                                            //@synthesize frame=_frame - In the implementation block
@property (setter=_setOriginRegion:,getter=_originalRegion,nonatomic,retain) _UIFocusRegion * originalRegion;                                           //@synthesize originalRegion=_originalRegion - In the implementation block
@property (setter=_setMutableOccludingRegions:,getter=_mutableOccludingRegions,nonatomic,retain) NSMutableArray * mutableOccludingRegions;              //@synthesize mutableOccludingRegions=_mutableOccludingRegions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1 ;
+(id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1 beneathRegions:(id)arg2 ;
+(id)_regionsByOccludingRegions:(id)arg1 withRegions:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGRect)frame;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)_shouldOccludeRegion:(id)arg1 ;
-(BOOL)_shouldBeOccludedByRegion:(id)arg1 ;
-(unsigned long long)_boundariesBlockingFocusMovement:(id)arg1 ;
-(BOOL)_shouldCropRegionToSearchArea;
-(id)_originalRegion;
-(id)_resizeToRect:(CGRect)arg1 ;
-(void)_setFrame:(CGRect)arg1 ;
-(unsigned long long)_focusableBoundaries;
-(void)_setOriginRegion:(id)arg1 ;
-(void)_setMutableOccludingRegions:(id)arg1 ;
-(id)_mutableOccludingRegions;
-(id)_subregionWithFrame:(CGRect)arg1 occludedByRegion:(id)arg2 ;
-(void)_addOccludingRegion:(id)arg1 ;
-(id)_visibleSubregionsWhenOccludedByRegion:(id)arg1 ;
-(id)_defaultFocusItem;
-(id)_destinationItemForFocusMovement:(id)arg1 inMap:(id)arg2 ;
-(unsigned long long)_effectiveFocusableBoundariesForHeading:(unsigned long long)arg1 ;
-(unsigned long long)_effectiveBoundariesBlockingFocusMovement:(id)arg1 ;
-(id)_occludingRegions;
-(void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
-(void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
@end

