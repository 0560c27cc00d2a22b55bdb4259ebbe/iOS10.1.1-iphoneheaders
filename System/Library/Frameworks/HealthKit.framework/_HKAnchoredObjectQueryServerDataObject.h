/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKQueryServerDataObject.h>

@class HKQueryAnchor;

@interface _HKAnchoredObjectQueryServerDataObject : _HKQueryServerDataObject {

	BOOL _includeDeletedObjects;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;

}

@property (nonatomic,retain) HKQueryAnchor * anchor;                  //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL includeDeletedObjects;              //@synthesize includeDeletedObjects=_includeDeletedObjects - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQueryAnchor *)anchor;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(void)setIncludeDeletedObjects:(BOOL)arg1 ;
-(BOOL)includeDeletedObjects;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
@end
