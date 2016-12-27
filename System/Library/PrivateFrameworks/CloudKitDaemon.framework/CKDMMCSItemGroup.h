/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MMCSOperationMetric;
@class NSMutableArray, NSError, NSArray, NSURL, NSString;

@interface CKDMMCSItemGroup : NSObject {

	NSMutableArray* _items;
	BOOL _complete;
	NSError* _error;
	id<MMCSOperationMetric> _metrics;
	NSArray* _tuple;

}

@property (nonatomic,retain) NSArray * tuple;                              //@synthesize tuple=_tuple - In the implementation block
@property (nonatomic,readonly) NSURL * contentBaseURL; 
@property (nonatomic,readonly) NSString * owner; 
@property (nonatomic,readonly) NSString * requestor; 
@property (nonatomic,readonly) BOOL useAuthRequests; 
@property (assign,nonatomic) BOOL complete;                                //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<MMCSOperationMetric> metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSArray * items;                            //@synthesize items=_items - In the implementation block
+(id)tupleForItem:(id)arg1 ;
-(id)description;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(NSString *)owner;
-(BOOL)complete;
-(id<MMCSOperationMetric>)metrics;
-(void)setComplete:(BOOL)arg1 ;
-(void)setMetrics:(id<MMCSOperationMetric>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)CKPropertiesDescription;
-(NSURL *)contentBaseURL;
-(NSString *)requestor;
-(BOOL)useAuthRequests;
-(NSArray *)tuple;
-(id)initWithTuple:(id)arg1 ;
-(void)setTuple:(NSArray *)arg1 ;
@end
