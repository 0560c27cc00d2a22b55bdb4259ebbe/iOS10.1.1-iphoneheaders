/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface RTRawLocationMO : NSManagedObject

@property (assign,nonatomic) double altitude; 
@property (assign,nonatomic) double course; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double speed; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (assign,nonatomic) double verticalAccuracy; 
+(id)fetchRequest;
+(id)managedObjectWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 horizontalAccuracy:(double)arg4 verticalAccuracy:(double)arg5 course:(double)arg6 speed:(double)arg7 timestamp:(id)arg8 inManagedObjectContext:(id)arg9 ;
@end

