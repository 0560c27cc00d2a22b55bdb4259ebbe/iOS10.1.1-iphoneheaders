/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface MSPUserRoutingPreferences : NSObject <NSSecureCoding> {

	BOOL _avoidTolls;
	BOOL _avoidHighways;
	NSDate* _timestamp;
	long long _defaultDisabledTransitModes;

}

@property (nonatomic,readonly) NSDate * timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL avoidTolls;                                    //@synthesize avoidTolls=_avoidTolls - In the implementation block
@property (nonatomic,readonly) BOOL avoidHighways;                                 //@synthesize avoidHighways=_avoidHighways - In the implementation block
@property (nonatomic,readonly) long long defaultDisabledTransitModes;              //@synthesize defaultDisabledTransitModes=_defaultDisabledTransitModes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copy;
-(NSDate *)timestamp;
-(BOOL)avoidTolls;
-(BOOL)avoidHighways;
-(id)initWithAvoidTolls:(BOOL)arg1 avoidHighways:(BOOL)arg2 defaultDisabledTransitModes:(long long)arg3 ;
-(id)createUserPreferences;
-(long long)defaultDisabledTransitModes;
@end

