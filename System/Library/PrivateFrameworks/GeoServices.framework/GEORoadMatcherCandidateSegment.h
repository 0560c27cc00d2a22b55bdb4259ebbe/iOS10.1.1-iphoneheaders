/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEORoadMatcherCandidateSegment : NSObject {

	double _score;
	SCD_Struct_GE93* _feature;
	SCD_Struct_GE26 _coordinateOnSegment;
	double _distanceFromSegment;
	double _segmentAngle;
	SCD_Struct_GE130* _junction;
	double _distanceInMetersFromJunction;

}

@property (nonatomic,readonly) double score;                                     //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE93* feature;                         //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE26 coordinateOnSegment;              //@synthesize coordinateOnSegment=_coordinateOnSegment - In the implementation block
@property (nonatomic,readonly) double distanceFromSegment;                       //@synthesize distanceFromSegment=_distanceFromSegment - In the implementation block
@property (nonatomic,readonly) double segmentAngle;                              //@synthesize segmentAngle=_segmentAngle - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE130* junction;                       //@synthesize junction=_junction - In the implementation block
@property (nonatomic,readonly) double distanceFromJunction;                      //@synthesize distanceInMetersFromJunction=_distanceInMetersFromJunction - In the implementation block
-(void)dealloc;
-(SCD_Struct_GE93*)feature;
-(id)initWithLocationCoordinate:(SCD_Struct_GE26)arg1 angle:(double)arg2 feature:(SCD_Struct_GE93*)arg3 startCoordinate:(SCD_Struct_GE26)arg4 endCoordinate:(SCD_Struct_GE26)arg5 startJunction:(SCD_Struct_GE130*)arg6 endJunction:(SCD_Struct_GE130*)arg7 startJunctionCoordinate:(SCD_Struct_GE26)arg8 endJunctionCoordinate:(SCD_Struct_GE26)arg9 roadHalfWidth:(double)arg10 ;
-(SCD_Struct_GE26)coordinateOnSegment;
-(double)distanceFromSegment;
-(double)segmentAngle;
-(SCD_Struct_GE130*)junction;
-(double)distanceFromJunction;
-(double)score;
@end

