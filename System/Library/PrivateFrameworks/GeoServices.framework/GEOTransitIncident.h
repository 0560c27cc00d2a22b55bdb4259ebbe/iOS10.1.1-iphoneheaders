/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSArray;


@protocol GEOTransitIncident <NSObject>
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * summary; 
@property (nonatomic,readonly) NSString * fullDescription; 
@property (nonatomic,readonly) NSString * messageForRoutePlanning; 
@property (nonatomic,readonly) NSString * messageForRouteStepping; 
@property (nonatomic,readonly) NSString * messageForNonRoutable; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long iconType; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * lastUpdated; 
@property (getter=isBlockingIncident,nonatomic,readonly) BOOL blockingIncident; 
@property (nonatomic,readonly) NSArray * affectedEntities; 
@required
-(NSString *)title;
-(unsigned long long)muid;
-(NSDate *)lastUpdated;
-(long long)iconType;
-(NSString *)summary;
-(NSString *)fullDescription;
-(NSString *)messageForRoutePlanning;
-(NSString *)messageForRouteStepping;
-(NSString *)messageForNonRoutable;
-(BOOL)isBlockingIncident;
-(NSArray *)affectedEntities;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDate *)creationDate;

@end

