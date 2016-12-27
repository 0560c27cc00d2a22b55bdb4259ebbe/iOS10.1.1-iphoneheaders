/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber, NSSet;

@interface CLSArchiveFile : NSManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * contextURI; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * lastModificationDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSNumber * fixedLocation1Distance; 
@property (nonatomic,retain) NSNumber * fixedLocation2Distance; 
@property (nonatomic,retain) NSNumber * fixedLocation3Distance; 
@property (nonatomic,retain) NSSet * clues; 
-(id)description;
-(id)inputArchiveCluesWithPrefetchedPrimitives:(BOOL)arg1 ;
-(id)nonInputArchiveCluesWithPrefetchedPrimitives:(BOOL)arg1 ;
-(id)debugArchiveCluesWithPrefetchedPrimitives:(BOOL)arg1 ;
-(id)_cluesForPredicate:(id)arg1 prefetchPrimitives:(BOOL)arg2 ;
-(id)cluesForKeys:(id)arg1 prefetchPrimitives:(BOOL)arg2 ;
-(id)outputArchiveCluesWithPrefetchedPrimitives:(BOOL)arg1 ;
-(id)meaningArchiveCluesWithPrefetchedPrimitives:(BOOL)arg1 ;
@end

