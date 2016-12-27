/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_path_evaluator;
@class NWEndpoint, NSObject, NWPath, NWParameters;

@interface NWPathEvaluator : NSObject {

	NWEndpoint* _endpoint;
	NSObject*<OS_nw_path_evaluator> _internalEvaluator;
	NWPath* _internalPath;
	NWParameters* _parameters;

}

@property (readonly) NSObject*<OS_nw_path_evaluator> internalEvaluator;              //@synthesize internalEvaluator=_internalEvaluator - In the implementation block
@property (retain) NWPath * internalPath;                                            //@synthesize internalPath=_internalPath - In the implementation block
@property (readonly) NWParameters * parameters;                                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NWPath * path; 
@property (nonatomic,readonly) NWEndpoint * endpoint;                                //@synthesize endpoint=_endpoint - In the implementation block
+(id)wf_pathEvaluatorForURL:(id)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)copySavedPathEvaluatorForEndpoint:(id)arg1 parameters:(id)arg2 ;
+(void)savePathEvaluator:(id)arg1 ;
+(id)sharedDefaultEvaluator;
-(BOOL)wf_isReachable;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NWPath *)path;
-(NWParameters *)parameters;
-(NWEndpoint *)endpoint;
-(NWPath *)internalPath;
-(void)setInternalPath:(NWPath *)arg1 ;
-(void)triggerPathAgentsIncludingVoluntary:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)satisfyPathAgentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)triggerVoluntaryPathAgentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)requestNexus;
-(BOOL)matchesEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NSObject*<OS_nw_path_evaluator>)internalEvaluator;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
@end

