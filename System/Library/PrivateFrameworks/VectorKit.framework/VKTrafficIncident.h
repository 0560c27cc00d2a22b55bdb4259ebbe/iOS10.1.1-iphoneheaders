/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface VKTrafficIncident : NSObject <NSCopying> {

	Matrix<double, 3, 1> _worldPoint;
	NSString* _title;
	NSString* _subtitle;
	long long _type;
	long long _routeRelevance;
	long long _significance;
	BOOL _isNotForDisplay;
	BOOL _isOnSelectedRoute;
	PolylineCoordinate _routeOffset;
	unsigned _routeOffsetInMeters;
	CGSize _location;
	NSString* _street;
	NSString* _crossStreet;
	NSString* _info;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _lastUpdatedDate;
	float _minZoom;
	float _maxZoom;
	unsigned long long _uniqueID;
	NSString* _uniqueString;

}

@property (nonatomic,readonly) Mercator2<double> worldPoint; 
@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueID;               //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSString * uniqueString;                   //@synthesize uniqueString=_uniqueString - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isNotForDisplay;                      //@synthesize isNotForDisplay=_isNotForDisplay - In the implementation block
@property (assign,nonatomic) long long routeRelevance;                    //@synthesize routeRelevance=_routeRelevance - In the implementation block
@property (assign,nonatomic) BOOL isOnSelectedRoute;                      //@synthesize isOnSelectedRoute=_isOnSelectedRoute - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeOffset;              //@synthesize routeOffset=_routeOffset - In the implementation block
@property (assign,nonatomic) unsigned routeOffsetInMeters;                //@synthesize routeOffsetInMeters=_routeOffsetInMeters - In the implementation block
@property (nonatomic,readonly) NSString * street;                         //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) NSString * crossStreet;                    //@synthesize crossStreet=_crossStreet - In the implementation block
@property (nonatomic,readonly) NSString * info;                           //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdatedDate;                  //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,readonly) float minZoom;                             //@synthesize minZoom=_minZoom - In the implementation block
@property (nonatomic,readonly) float maxZoom;                             //@synthesize maxZoom=_maxZoom - In the implementation block
@property (nonatomic,readonly) long long significance;                    //@synthesize significance=_significance - In the implementation block
-(void)dealloc;
-(NSString *)title;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)info;
-(NSString *)subtitle;
-(float)minZoom;
-(long long)significance;
-(NSString *)street;
-(NSString *)crossStreet;
-(unsigned long long)uniqueID;
-(long long)routeRelevance;
-(BOOL)isNotForDisplay;
-(BOOL)hasSameIdentifier:(id)arg1 ;
-(PolylineCoordinate)routeOffset;
-(void)setRouteRelevance:(long long)arg1 ;
-(NSString *)uniqueString;
-(BOOL)isOnSelectedRoute;
-(id)initWithIncidentData:(const Incident*)arg1 worldPoint:(Matrix<double, 3, 1>*)arg2 ;
-(id)initWithRouteIncident:(id)arg1 routeRelevance:(long long)arg2 ;
-(Mercator2<double>)worldPoint;
-(void)setIsOnSelectedRoute:(BOOL)arg1 ;
-(unsigned)routeOffsetInMeters;
-(void)setRouteOffsetInMeters:(unsigned)arg1 ;
-(NSDate *)lastUpdatedDate;
-(float)maxZoom;
-(void)setRouteOffset:(PolylineCoordinate)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

