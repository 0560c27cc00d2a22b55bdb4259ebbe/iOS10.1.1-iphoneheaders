/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber;

@interface RTVehicleEventHistoryMO : NSManagedObject

@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSDate * locDate; 
@property (nonatomic,retain) NSNumber * locLatitude; 
@property (nonatomic,retain) NSNumber * locLongitude; 
@property (nonatomic,retain) NSNumber * locUncertainty; 
+(id)managedObjectWithVehicleEvent:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

