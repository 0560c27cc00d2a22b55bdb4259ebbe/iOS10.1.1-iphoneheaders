/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSData, NSDate, NSSet, FCFeedRange;

@interface FCFDBFeedSegment : NSManagedObject

@property (assign,nonatomic) unsigned long long top; 
@property (assign,nonatomic) unsigned long long bottom; 
@property (nonatomic,retain) NSNumber * feedItemCount; 
@property (nonatomic,retain) NSData * ckCursor; 
@property (nonatomic,retain) NSDate * lastAccessDate; 
@property (nonatomic,retain) NSSet * feedItemIndexes; 
@property (nonatomic,readonly) FCFeedRange * feedRange; 
-(id)description;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(FCFeedRange *)feedRange;
@end

