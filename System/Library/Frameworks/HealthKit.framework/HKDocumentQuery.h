/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class NSArray;

@interface HKDocumentQuery : HKQuery {

	BOOL _includeDocumentData;
	unsigned long long _limit;
	NSArray* _sortDescriptors;
	/*^block*/id _resultsHandler;

}

@property (nonatomic,copy) id resultsHandler;                     //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (readonly) unsigned long long limit;                    //@synthesize limit=_limit - In the implementation block
@property (copy,readonly) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (readonly) BOOL includeDocumentData;                    //@synthesize includeDocumentData=_includeDocumentData - In the implementation block
+(Class)_queryServerDataObjectClass;
-(NSArray *)sortDescriptors;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(void)setResultsHandler:(id)arg1 ;
-(id)resultsHandler;
-(id)initWithDocumentType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 includeDocumentData:(BOOL)arg5 resultsHandler:(/*^block*/id)arg6 ;
-(BOOL)includeDocumentData;
-(void)deliverSample:(id)arg1 forQuery:(id)arg2 ;
-(unsigned long long)limit;
@end

